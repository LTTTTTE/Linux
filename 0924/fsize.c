#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main(int argc, char* argv[]){

	char buffer[500];	//사용자지정 버퍼사이즈
	int fd;  		//파일 디스크립터
	ssize_t nread;		//signed 
	long total = 0;  	// 문자열길이

	if((fd = open(argv[1], O_RDONLY)) == -1){
		perror(argv[1]);
	}

	while((nread = read(fd, buffer, 500)) > 0){
		total += nread;
	}
	printf("%s의 파일크기 : %ld 바이트 \n", argv[1],total);
	close(fd);
	exit(0);
}
