#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){
	int pid, child, status;
	printf("[%d] 부모 프로세스 시작 \n", getpid());
	pid = fork();

	if(pid == 0){
		printf("[%d] 자식 프로세스 시작 \n", getpid());
		exit(1);
	}
	printf("[%d] status? %d\n", getpid(), status);
	child = wait(&status);
	printf("[%d] 자식 프로세스 %d 종료 \n", getpid(), child);
	printf("\t [%d]종료코드 %d\n", getpid(),  status >> 8);
}
