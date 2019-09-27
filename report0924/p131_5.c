#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

int main(int argc, char* argv[]){
	int fd;
	char buf[500];
	int chars = 0;
	int words = 1;
	int lines = 0;
	int reads;
	int countReads = 0;
	if((fd = open(argv[1],O_RDONLY)) == -1){
		perror(argv[1]);
		exit(1);
	}

	while((reads = read(fd, buf, 500)) > 0){
		countReads += reads;
		for(int i = 0; i < 500; i++){
			if(buf[i] == '\n') lines++;
			if(buf[i] == ' ') words++;
		}
	}
	words += lines - 1;
	printf("\n문자수 : %d\n단어수 : %d\n 줄수 : %d\n", countReads, words, lines);
	close(fd);
	exit(0);
}


