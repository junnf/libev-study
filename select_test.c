#include<unistd.h>
#include<sys/select.h>
//int FD_ISSET(int fd, fd_set *fdset);
int main(void){
    fd_set rset;
    FD_ZERO(&rset);
    int fd = 111;
    FD_SET(fd,&rset);
    int a = FD_ISSET(fd, &rset);
    printf("%d",a);
    return ;
}
