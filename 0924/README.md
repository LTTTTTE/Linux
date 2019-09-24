## read() 
- 함수로 열기를 한 파일의 내용을 읽기를 합니다.
- 헤더	unistd.h
- 형태	ssize_t read (int fd, void *buf, size_t nbytes)
### 인수	
````c
 int fd	//파일 디스크립터
 void *buf	//파일을 읽어 들일 버퍼
 size_t nbytes	//버퍼의 크기
````
- 반환	ssize_t	정상적으로 실행되었다면 읽어들인 바이트 수를, 실패했다면 -1을 반환

## write()
- 함수로 열기를 한 파일에 쓰기를 합니다. 
- open()함수는 fcntl.h 에 정의 되어 있지만 write(), read(), close()는 unistd.h에 정의 되어 있습니다.

- 헤더	unistd.h
- 형태	ssize_t write (int fd, const void *buf, size_t n)
### 인수
````c
int fd	//파일 디스크립터
void *buf	//파일에 쓰기를 할 내용을 담은 버퍼
size_t n	//쓰기할 바이트 개수
````
- 반환	ssize_t	정상적 쓰기를 했다면 쓰기를 한 바이트 개수를, 실패했다면 -1을 반환

## lseek()
//TODO 추가하기.



## 파일실행

### fsize.c

#### 설명

- ./fsize fsize.c
- 뒤 사용자 입력변수에 파일명이 들어가고
- 그 파일의 사이즈를 반환한다.

### fcopy.c

#### 설명
- ./fcopy file1 file2
- file1의 내용을 file2로 복사한다.(file2에 덮어쓴다.)



report p131 4,5 번
깃허브에 dbcreate.c , dbquery.c, dbupdate.c , student.c 파일 업로드 그리고
직접 dbdelete.c 만들어서 upload.