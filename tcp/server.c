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

void *sock_run(void* arg)
{
	char buf[SIZE];
	int f=(int)arg;
	while(1)
	{
		memset(buf,'\0',sizeof(buf));
        ssize_t _s=read(f,buf,sizeof(buf)-1);
		if(_s>0)
		{
			buf[_s]='\0';
		    write(f,buf,strlen(buf));
		    printf("Client# %s",buf);
		}
		else if(_s==0)
		{
			printf("read done...\n");
			break;
		}
		else
			break;


    }
	exit(0);



}
int main()
{
	int listen_sock=socket(AF_INET, SOCK_STREAM, 0);
	if(listen_sock<0)
	{
		perror("socket\n");
		return 1;
	}
	struct sockaddr_in local;
	local.sin_family=AF_INET;
	local.sin_port=htons(port);
	local.sin_addr.s_addr=inet_addr(ip);
    
	if(bind(listen_sock,(struct sockaddr*)(&local),sizeof(local))<0)
	{
		perror("bind\n");
	}
	if(listen(listen_sock,5)<0)
	{
		perror("listen\n");
	}
	while(1)
	{
		struct sockaddr_in peer;
        socklen_t len=sizeof(peer);
		int fd=accept(listen_sock,(struct sockaddr*)&peer,&len);
        if(fd!=-1)
		{
			pthread_t id;
		    int ret=pthread_create(&id,NULL,sock_run,(void*)fd);
		    if(ret!=0)
		    {
			  perror("pthread_create\n");
		    }
		    pthread_detach(id);
		}

	}

	return 0;

}
