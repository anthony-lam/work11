#include <sys/stat.h>
#include <stdio.h>
#include <time.h>

int main(){
  struct stat buffer;
  stat("work11.c",&buffer);
  printf("Size of file: %ld\n", buffer.st_size);
  printf("Permissions of file: %d\n", buffer.st_mode);
  printf("Time last accessed: %s\n", c_time(buffer.st_atime));
  return 0;
}
