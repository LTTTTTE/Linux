#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char* argv[]){
	if(argc < 2){
		fprintf(stderr,"사용법 %s time",argv[0]);
		exit(1);
	}
	printf("Hello\n");
	sleep(atoi(argv[1]));
	printf("Bye\n");
	
	return 0;
}
