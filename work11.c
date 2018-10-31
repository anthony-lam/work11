#include <sys/stat.h>
#include <stdio.h>
#include <time.h>


char* find_size(char* buffer, double size){
	if (size <1024){
		sprintf(buffer, "%f B", size);
		return buffer;
	}
	size /= 1024.0;
	if (size <1024){
		sprintf(buffer, "%f KB", size);
		return buffer;
	}
	size /= 1024.0;
	if (size <1024){
		sprintf(buffer, "%f MB", size);
		return buffer;
	}
	size /= 1024.0;
	sprintf(buffer, "%f GB", size);
	return buffer;
}

int main(){
	char buff[20];
	struct stat buffer;
	stat("work11.c",&buffer);
	printf("Size of file: %ld\n", buffer.st_size);
	printf("Permissions of file: %d\n", buffer.st_mode);
	printf("Time last accessed: %s\n", ctime(&buffer.st_atime));
	printf("Time last modified: %s\n", ctime(&buffer.st_mtime));
	printf("Readable file size: %s\n", find_size(buff,buffer.st_size));
	return 0;
}
