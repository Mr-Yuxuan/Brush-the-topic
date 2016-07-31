#include <stdio.h>
#include <sys/types.h>          
#include <sys/socket.h>
#include <netinet/in.h>
#include <unistd.h>
#include <string.h>
#include <pthread.h>
#include <stdlib.h>
#define SIZE 1024
const int port=8080;
const char* ip="127.0.0.1";
int main()
{
	int sock =socket(AF_INET,SOCK_STREAM,0);
	if(sock<0)
	{
		perror("sock\n");
	}
	struct sockaddr_in remote;
	remote.sin_family=AF_INET;
	remote.sin_port=htons(port);
	remote.sin_addr.s_addr=inet_addr(ip);
    int ret=connect(sock,(struct sockaddr*)(&remote),sizeof(remote));
	if(ret<0)
	{
		perror("connect\n");
	}
	char buf[SIZE];
	while(1)
	{
		memset(buf,'\0',sizeof(buf));
		printf("Please Enter:\n");
		ssize_t s=read(0,buf,sizeof(buf)-1);
		if(s>0)
		{
			buf[s]='\0';
			write(sock,buf,strlen(buf));
			memset(buf,'\0',sizeof(buf));
			ssize_t f=read(sock,buf,sizeof(buf)-1);
			if(f>0)
			{
				buf[f]='\0';
				printf("%s",buf);
			}
		}
		else
			break;

	}
	return 0;
}
