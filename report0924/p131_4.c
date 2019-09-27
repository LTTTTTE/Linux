#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int main(int argc, char* argv[]){

	int fd1, fd2;
	int index = 0;
	char buf1[500];
	char buf2[500];
	if(argc < 2){
		fprintf(stderr,"사용법 %s file1 file2 \n",argv[0]);
		exit(1);
	}
	
	if((fd1 = open(argv[1], O_RDONLY)) == -1){
		perror(argv[1]);
		exit(2);
	}

	if((fd2 = open(argv[2], O_RDONLY)) == -1){
		perror(argv[2]);
		exit(3);
	}
	
	while((read(fd1, buf1, 500) > 0) && (read(fd2, buf2, 500) > 0)){
		for(int i = 0; i < 500; i++){
			if(buf1[i] != buf2[i]){
				index += i;
				printf("\n %d 번째 문자가 다릅니다.\n",index - 1);
				break;
			}
		}
		index += 500;	
	}
	close(fd1);
	close(fd2);
	exit(0);
}
