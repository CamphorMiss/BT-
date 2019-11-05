#include<iostream>
#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<arpa/inet.h>
#include<sys/select.h>
#define num (sizeof(fd_set)*8)
using namespace std;
class SelectServer{
    private:
        int port;
        int lsock;
    public:
        SelectServer(int _port=8080):port(_port),lsock(-1)
        {
        }
        void InitServer()
        {
            lsock=socket(AF_INET,SOCK_STREAM,0);
            if(lsock<0)
            {
            cerr<<"socket false..."<<endl;
            exit(1);
            }
            struct sockaddr_in local;
            local.sin_family=AF_INET;
            local.sin_port=htons(port);
            local.sin_addr.s_addr=inet_addr(INADDR_ANY);
            if(bind(lsock,(struct sockaddr*)&local,sizeof(local))<0)
            {
            cerr<<"bond false..."<<endl;
            exit(2);
            }
            if(listen(lsock,8)<0)
            {
            cerr<<"listen false..."<<endl;
            exit(3);
            }  
        }
        void RunServer()
        {
             int arr[num];
             fd_set lset;
             struct timeval t={3,0};
             int i=1;
             arr[0]=lsock;
             int max=lsock;
             for(;i<num;i++)
             {
                  arr[i]=-1;
             }
              while(1)
            {

                FD_ZERO(&lset);
                for(i=0;i<num;i++)
                {
                    if(arr[i]>0)
                    {
                    FD_SET(lsock,&lset);
                    if(arr[i]>max)
                        max=arr[i];
                    }
                }
                switch(select(max+1,&lset,NULL,NULL,&t))
                {
                    case 0:cout<<"timeout..."<<endl;
                        break;
                    case -1:perror("select");
                            break;
                    default:{
                            for(i=0;i<num;i++)
                            {
                             if(arr[i]==-1)
                                 continue;
                             if(arr[i]==lsock&&FD_ISSET(arr[i],&lset))
                             {//此时，有新链接来了，处理它
                                        struct sockaddr_in peer;
                                        socklen_t len=0;
                                        int sock=accept(lsock,(struct sockaddr* )&peer,&len);
                                        if(sock==-1)
                                        {
                                            perror("accpet");
                                            continue;
                                        }
                                        else
                                        {//成功接收一个新链接
                                        cout<<"get a new line..."<<endl;
                                        int j=0;
                                        for(j=0;j<num;j++)
                                         {
                                            if(arr[j]==-1)
                                            break;
                                         }
                                        if(j==num)
                                        {
                                         close(sock);
                                        }
                           else if(arr[i]!=lsock&&FD_ISSET(arr[i],&lset))
                           {
                           char buf[1024];
                           ssize_t s=recv(arr[i],buf,sizeof(buf),0);
                                if(s<0)
                                {//读取失败
                                perror("recv");
                                close(arr[i]);
                                arr[i]=-1;
                                }
                                else if(s==0)
                                {
                                cerr<<"Client close..."<<endl;
                                close(arr[i]);
                                arr[i]=-1;
                                }
                                else
                                {//终于啊啊啊啊啊读取成功~
                                    buf[s]=0;
                                    cout<<"Client: "<<buf<<endl;

                                }
                           }
                                 
                    }             
                }
                }
           }
                }
            }
        }
        ~SelectServer()
        {
            if(lsock>0)
                close(lsock);
        }

};
