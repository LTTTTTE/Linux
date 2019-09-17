#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
int main(int argc, char* argv[]){
	int fd;
	if((fd =open(argv[1],O_RDWR)) == -1)
		printf("파일열기 오류\n");
	else printf("파일 %s 열기 성공 : %d\n",argv[1], fd);
	
	close(fd);
	printf("%d, %d, %d, %d",O_TRUNC,O_EXCL,O_NONBLOCK,O_SYNC);
	exit(0);	

}
