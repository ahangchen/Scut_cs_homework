#include <stdio.h>
#include <tchar.h>
#include <exception> 
// socketTest.cpp : 定义控制台应用程序的入口点。
//
#include <iostream>
#include <winsock.h>


#pragma  comment (lib,"ws2_32.lib")
#define  MAXBUFLEN 256
#define  PORT 44965

using namespace std;
int _tmain(int argc, _TCHAR* argv[])
{
	WSADATA Data;
	SOCKADDR_IN serverSockAddr;
	//SOCKADDR_IN clientSockAddr;
	SOCKET serversocket;  //其实就是一个unsig int类型，用来记录已经建立或者尚未建立的套接字号
	SOCKET clientsocket;
	int addrlen = sizeof(SOCKADDR_IN);   //16
	int status;
	int numrcv;
	char buffer[MAXBUFLEN];

	//初始化windows Socket Dll
	status = WSAStartup(MAKEWORD(1,1),&Data);
	if (0!=status)
	{
		cout<<"初始化失败"<<endl;
		return 0;
	}

	//清0
	memset(&serverSockAddr,0,sizeof(serverSockAddr));
	//初始化
	serverSockAddr.sin_port = htons(PORT);
	serverSockAddr.sin_family = AF_INET;    //指定地址协议族
	serverSockAddr.sin_addr.s_addr = htonl(INADDR_ANY);  //初始化ip地址0,0,0,0 任何ip都可以连接

	//创建套接字
	serversocket = socket(AF_INET,SOCK_STREAM/*套接字类型*/,0/*套接字使用的特定协议*/);
	if (INVALID_SOCKET == serversocket)
	{
		cout<<"创建socket失败"<<endl;
		return 1;
	}

	//绑定socket到特定地址(结构体地址)
	status = bind(serversocket,(LPSOCKADDR)&serverSockAddr,sizeof(serverSockAddr));
	if (SOCKET_ERROR==status)
	{
		cout<<"绑定地址失败"<<endl;
		return 1;
	}

	//允许外来申请链接请求，或者说就是监听
	status = listen(serversocket/*套接字号*/,2/*最大容许链接的套接字个数*/);
	if (SOCKET_ERROR == status)
	{
		cout<<"监听失败"<<endl;
		return 1;
	}
	cout<<"连接创建成功，监听是否有客户端接入……\n";
	clientsocket = accept(serversocket,(LPSOCKADDR)&clientsocket,&addrlen);
	
	//当有请求申请是就接受链接请求
	while(1)
	{
		try
		{
			if (SOCKET_ERROR==clientsocket)
			{
				cout<<"客户端接入失败"<<endl;
				return 1;
			}
			numrcv = recv(clientsocket/*已经建立的套接字*/,buffer/*接受输入数据缓冲器的指针*/,MAXBUFLEN/*接受缓冲区大小*/,0/*传输控制方式*/);
			if (0==numrcv||numrcv==SOCKET_ERROR)
			{
				cout<<"链接受到限制"<<endl;

				status = closesocket(clientsocket);
				if (SOCKET_ERROR==status)
					cout<<"断开链接失败"<<endl;

				status = WSACleanup();
				if (SOCKET_ERROR==status)
					cout<<"清理链接失败"<<endl;
				return(1);
			}

			cout<<"接受到客户端发过来的消息内容是："<<buffer<<endl;
			if (!strcmp(buffer,"closeClient"))
			{
				cout << "Connection terminated" << endl;

				status=closesocket(clientsocket);
				if (status == SOCKET_ERROR)
					cout<< "ERROR: closesocket unsuccessful" << endl;
				status=WSACleanup();
				if (status == SOCKET_ERROR)
					cout<< "ERROR: WSACleanup unsuccessful" << endl;
				return(1);
				
			}
			cout<<"输入想要发送给客户端发送的消息内容并按回车发送"<<endl;

			int numsnt;
			char toSendtxt[256];
			cin.getline(toSendtxt,256,'\n');

			numsnt=send(clientsocket, toSendtxt, strlen(toSendtxt) + 1, 0);
			if (numsnt != (int)strlen(toSendtxt) + 1)
			{
				cout << "Connection terminated" << endl;

				status=closesocket(clientsocket);
				if (status == SOCKET_ERROR)
					cout<< "ERROR: closesocket unsuccessful" << endl;
				status=WSACleanup();
				if (status == SOCKET_ERROR)
					cout<< "ERROR: WSACleanup unsuccessful" << endl;
				return(1);
			}
			cout<<"等待继续接受客户端发来的消息.........."<<endl;

		}
		catch (exception& e)
		{
			cout<<e.what()<<endl;
			return 1;
		}		
	}

	return 0;
}

/*总结通信服务器端，建立一个socket通信，        socket()
绑定这个socket到地址结构体，bind()
监听外来申请建立链接请求,   listen() 
接受外来申请的链接请求,     accept()
接受客户端发来的消息内容，  recv()
向客户端发送消息，          send()
*/