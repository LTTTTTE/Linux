#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdio.h>

int main(){
	struct stat buf;
	stat("test1",&buf);
	printf("st_mode = %o\n",buf.st_mode);

	return 0;
}
