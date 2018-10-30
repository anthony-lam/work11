#include <sys/stat.h>
#include <stdio.h>
#include <time.h>

int main(){
  struct stat buffer;
  stat("work11.c",&buffer);
  printf("Size of file: %ld\n", buffer.st_size);
  printf("Permissions of file: %d\n", buffer.st_mode);
  printf("Time last accessed: %s\n", ctime(&buffer.st_atime));
  printf("Time last modified: %s\n", ctime(&buffer.st_mtime));
  return 0;
}
