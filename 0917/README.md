# 0917

-int open(char* filePath, oflag, MODE)

### oflag
- O_RDONLY 0
	읽기 모드, read() 호출은 사용 가능
- O_WRONLY 1
	쓰기 모드, write() 호출은 사용 가능
- O_RDWR 2
	읽기/쓰기 모드, read(), write() 호출 사용 가능
- O_APPEND 1024	
	데이터를 쓰면 파일끝에 첨부된다.
- O_CREAT 	64
	해당 파일이 없는 경우에 생성하며 
	mode는 생성할 파일의 사용권한을 나타낸다.
- O_TRUNC 	512
	파일이 이미 있는 경우 내용을 지운다.
- O_EXCL 	128
   	O_CREAT와 함께 사용되며 해당 파일이 이미 있으면 오류
- O_NONBLOCK 2048
	넌블로킹 모드로 입출력 하도록 한다.
- O_SYNC 	1052672
	write() 시스템 호출을 하면 디스크에 물리적으로 쓴 후 반환된다
