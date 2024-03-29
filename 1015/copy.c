#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[]){
	
	char c;
	FILE *fp1, *fp2;
	if(argc != 3){
		fprintf(stderr,"사용법 :%s file1 file2\n",argv[0]);
		exit(1);
	}
	
	fp1 = fopen(argv[1],"r");
	if(fp1 == NULL){
		fprintf(stderr,"파일 %s 읽기 오류\n",argv[1]);
		exit(2);
	}

	fp2 = fopen(argv[2],"w");
	if(fp2 = NULL){
		fprintf(stderr,"파일 %s 읽기 오류\n",argv[2]);
		exit(3);
	}
	while((c = fgetc(fp1)) != EOF){
		fputc(c, fp2);
	}
	fclose(fp1);
	fclose(fp2);
	return 0;
}

