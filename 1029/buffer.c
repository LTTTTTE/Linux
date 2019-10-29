#include <stdio.h>
#include <stdlib.h>
int main(){

	int repeatCount;
	char c;
	int count;
	printf("반복 횟수 입력 : ");
	scanf("%d",&repeatCount);
	for(int i=0; i < repeatCount; i++){
		printf("문자와 출력횟수 입력 : ");
		__fpurge(stdin);
		scanf("%c %d",&c,&count);
		for(int j = 0; j < count; j++){
			printf("%c",c);
		}
		printf("\n");
	}
	exit(0);
}

