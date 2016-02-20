#pragma once
#include<fstream>
#include<cstring>
using namespace std;
using namespace System;
using namespace System::Windows::Forms;
enum daypart{morning,afternoon,night,不申请};
class goods
{
protected:
	int num;
public:
	goods(){num=0;}
	void set(int n){num=n;}
	int getnum(){return num;}
};
class normal:public goods
{
public:
	void print(){}
	normal(){}
};
class electric:public goods
{
public:
	electric(){}
};
class chair:public normal
{
	friend class activity;
public:
	chair(){}
	chair&operator=(chair p)
	{
		num=p.getnum();
		return *this;
	}
};
class desk:public normal
{
	friend class activity;
public:
	desk(){}
	desk&operator=(desk p)
	{
		num=p.getnum();
		return *this;
	}
};
class micp:public electric
{
	friend class activity;
protected:
	daypart part;
public:
	micp(){part=morning;}
	void setdetail(daypart a){part=a;}
	daypart getdetail(){return part;}
	micp&operator=(micp p)
	{
		num=p.getnum();
		part=p.getdetail();
		return *this;
	}
};
class audio:public electric
{
	friend class activity;
protected:
	daypart part;
public:
	audio(){part=morning;}
	void setdetail(daypart a){part=a;}
	daypart getdetail(){return part;}
	audio&operator=(micp p)
	{
		num=p.getnum();
		part=p.getdetail();
		return *this;
	}
};
class activity
{
	friend class manageactivity;
	friend class date;
	friend class manage;
protected:
	char holder[50];
	char actname[50];
	char place[50];
	long phone;
	char reasponser[30];
	chair a;
	desk b;
	micp c;
	audio d;
public:
	activity()
	{
		strcpy_s(holder,"");
		strcpy_s(actname,"");
		strcpy_s(place,"");
		strcpy_s(reasponser,"");
		phone=0;
	}
	activity(const activity&p)
	{
		strcpy_s(holder,p.holder);
		strcpy_s(actname,p.actname);
		strcpy_s(place,p.place);
		strcpy_s(reasponser,p.reasponser);
		phone=p.phone;
		a=p.a;
		b=p.b;
		c=p.c;
		d=p.d;
	}
	void set
		(char*hd,char*an,char*pl,char*rs,long ph,
		int na,int nb,int nc,int nd,
		daypart micppart,daypart audiopart)
	{
		strcpy_s(holder,hd);
		strcpy_s(actname,an);
		strcpy_s(place,pl);
		strcpy_s(reasponser,rs);
		phone=ph;
		a.set(na);
		b.set(nb);		
		c.set(nc);
		c.setdetail(micppart);
		d.set(nd);
		d.setdetail(audiopart);
	}
	int chairnum(){return a.num;}
	int desknum(){return b.num;}
	int micpnum(){return c.num;}
	int audionum(){return d.num;}
	daypart micppart(){return c.part;}
	daypart audiopart(){return d.part;}
};
const activity actmark;
class address
{
public:
	int year;
	int month;
	int day;
	char route[100];	
	char txt[100];
};
const address adrmark={0,0,0,"endaddress","endtxt"};
class date
{
public:
	int chair;
	int desk;
	int micp;
	int audio;
	int year;
	int month;
	int day;
	date()
	{
		chair=year=month=day=0;
		desk=20;
		micp=2;
		audio=1;
	}
	char*dateroute(int year,int month,int day)
	{
		address obj;
		fstream fdat("d:\\goodmanagefile\\dateroute.dat",ios::in|ios::binary);
		do
				{
				fdat.read((char*)&obj,sizeof(address));//
				}while((year!=obj.year||month!=obj.month||day!=obj.day));
				if(!(year!=obj.year||month!=obj.month||day!=obj.day))
				{
					return obj.route;
				}
				else 
				{
					MessageBox::Show("日期错误","未获得地址",MessageBoxButtons::OK,MessageBoxIcon::Exclamation);
					return NULL;
				}
		fdat.close();
	}
	void getroute(char*dateroute,int year,int month,int day)
	{
		address obj;
		fstream fdat("d:\\goodmanagefile\\dateroute.dat",ios::in|ios::binary);
		do
				{
				fdat.read((char*)&obj,sizeof(address));//
				}while((year!=obj.year||month!=obj.month||day!=obj.day));
				if(!(year!=obj.year||month!=obj.month||day!=obj.day))
				{
					strcpy(dateroute,obj.route);
				}
				else 
				{
					MessageBox::Show("日期错误","未获得地址",MessageBoxButtons::OK,MessageBoxIcon::Exclamation);
				}
		fdat.close();
	}
	void gettxt(char*datetxt,int year,int month,int day)
	{
		address obj;
		fstream fdat("d:\\goodmanagefile\\dateroute.dat",ios::in|ios::binary);
		do
		{
			fdat.read((char*)&obj,sizeof(address));//
		}while((year!=obj.year||month!=obj.month||day!=obj.day));
		if(!(year!=obj.year||month!=obj.month||day!=obj.day))
			{
				strcpy(datetxt,obj.txt);
			}
		else
		{
			MessageBox::Show("日期错误","未获得地址",MessageBoxButtons::OK,MessageBoxIcon::Exclamation);
		}
		fdat.close();
	}
	char*datetxt(int year,int month,int day)
	{
		address obj;
		fstream fdat("d:\\goodmanagefile\\dateroute.dat",ios::in|ios::binary);
		do
				{
					fdat.read((char*)&obj,sizeof(address));//
				}while((year!=obj.year||month!=obj.month||day!=obj.day));
		if(!(year!=obj.year||month!=obj.month||day!=obj.day))
			{
				return obj.txt;
			}
		else
		{
			MessageBox::Show("日期错误","未获得地址",MessageBoxButtons::OK,MessageBoxIcon::Exclamation);
			return NULL;
		}
		fdat.close();
	}
	void set(int y,int m,int d)
	{
		year=y;month=m;day=d;	
	}
	void setnum(const char*dateroute)
	{
		activity obj;
		fstream regoods(dateroute,ios::in|ios::binary);
		regoods.seekp(0,ios::beg);//
		do
		{
			regoods.read((char*)&obj,sizeof(activity));
			if(obj.phone!=0)
			{
				chair+=obj.chairnum();
				desk-=obj.desknum();
				micp-=obj.micpnum();
				audio-=obj.audionum();
			}			
		}while(obj.phone!=0);
		regoods.close();
	}
	void check(activity p,int&flag)
	{
		chair+=p.chairnum();
		desk-=p.desknum();
		micp-=p.micpnum();
		audio-=p.audionum();
		flag=1;
		if(desk<0)
		{
			MessageBox::Show("桌子已经借满，\n请返回主菜单，按桌子查询，\n并与相关活动组织者联系共用","桌子借用超限",MessageBoxButtons::OK,MessageBoxIcon::Exclamation);
			desk+=p.desknum();
			flag=0;
		}
		else if(micp<0)
		{
			MessageBox::Show("无线麦已经借满，\n请返回主菜单，按无线麦查询，\n并与相关活动组织者联系共用","无线麦借用超限",MessageBoxButtons::OK,MessageBoxIcon::Exclamation);
			micp+=p.micpnum();
			flag=0;
		}
		else if(audio<0)
		{
			MessageBox::Show("音响已借出，\n请返回主菜单，按音响查询，\n并与相关活动组织者联系共用","音响桌子借用超限",MessageBoxButtons::OK,MessageBoxIcon::Exclamation);
			audio+=p.audionum();
			flag=0;
		}
		else 	MessageBox::Show("各项物资均有剩余，申请通过！","申请通过",MessageBoxButtons::OK,MessageBoxIcon::Information);
	}
	void check1(activity p,int&flag)
	{
		flag=1;
		if(desk<0)
		{
			MessageBox::Show("桌子已经借满，\n请返回主菜单，按桌子查询，\n并与相关活动组织者联系共用","桌子借用超限",MessageBoxButtons::OK,MessageBoxIcon::Exclamation);
			desk+=p.desknum();
			flag=0;
		}
		else if(micp<0)
		{
			MessageBox::Show("无线麦已经借满，\n请返回主菜单，按无线麦查询，\n并与相关活动组织者联系共用","无线麦借用超限",MessageBoxButtons::OK,MessageBoxIcon::Exclamation);
			micp+=p.micpnum();
			flag=0;
		}
		else if(audio<0)
		{
			MessageBox::Show("音响已借出，\n请返回主菜单，按音响查询，\n并与相关活动组织者联系共用","音响桌子借用超限",MessageBoxButtons::OK,MessageBoxIcon::Exclamation);
			audio+=p.audionum();
			flag=0;
		}
		else 	MessageBox::Show("各项物资均有剩余，申请通过！","申请通过",MessageBoxButtons::OK,MessageBoxIcon::Information);
	}
};
class managedate
{
public:
	void initial()
	{
		fstream fdat("d:\\goodmanagefile\\dateroute.dat",ios::out|ios::binary);//
		fdat.seekp(0,ios::beg);//
		fdat.write((char*)&adrmark,sizeof(address));//
		fdat.close();//
	}
	void createlist(int year1,int month1,int year2,int month2)
	{
		address obj;
		fstream fdat("d:\\goodmanagefile\\dateroute.dat",ios::in|ios::out|ios::binary);//
		if(!fdat)
		{
			MessageBox::Show("活动资料文件不存在，请进行初始化操作","未初始化",MessageBoxButtons::OK,MessageBoxIcon::Exclamation);
			return;
		}
		fdat.seekp(0,ios::beg);//
		fdat.write((char*)&adrmark,sizeof(address));//
		int sum;
		int y,m,d;
		for(y=year1;y<=year2;y++)
			for(m=month1;m<=month2;m++)
			{
				switch(m)
				{
				case 1:
				case 3:
				case 5:
				case 7:
				case 8:
				case 10:
				case 12:sum=31;break;
				case 2:if(year1%4==0&&year1%100!=0||year1%400==0)sum=29;
						 else sum=28;break;
				default:sum=30;break;
				}
				for(d=1;d<=sum;d++)
				{
					fdat.seekg(0,ios::beg);//
					do//
					{
						fdat.read((char*)&obj,sizeof(address));//
					}while(!endmark(obj));//
					fdat.seekp(-long(sizeof(address)),ios::cur);//
					obj.year=y;
					obj.month=m;
					obj.day=d;
					char riqi[10];
					char*houzui1=".dat";
					char*houzui2=".txt";
					sprintf_s(riqi, "%d-%d-%d",y,m,d);
					strcpy_s(obj.route,"d:\\goodmanagefile\\");
					strcat_s(obj.route,riqi);
					strcat_s(obj.route,houzui1);
					strcpy_s(obj.txt,"d:\\goodmanagefile\\");
					strcat_s(obj.txt,riqi);
					strcat_s(obj.txt,houzui2);
					fdat.write((char*)&obj,sizeof(address));//
					fdat.write((char*)&adrmark,sizeof(address));//					
				}			
			}
			fdat.close();//
			for(y=year1;y<=year2;y++)
			for(m=month1;m<=month2;m++)
			{
				switch(m)
				{
				case 1:
				case 3:
				case 5:
				case 7:
				case 8:
				case 10:
				case 12:sum=31;break;
				case 2:if(year1%4==0&&year1%100!=0||year1%400==0)sum=29;
						 else sum=28;break;
				default:sum=30;break;
				}
				for(d=1;d<=sum;d++)
				{
					obj.year=y;
					obj.month=m;
					obj.day=d;
					char riqi[10];
					char*houzui1=".dat";
					char*houzui2=".txt";
					sprintf_s(riqi, "%d-%d-%d",y,m,d);
					strcpy_s(obj.route,"d:\\goodmanagefile\\");
					strcat_s(obj.route,riqi);
					strcat_s(obj.route,houzui1);
					strcpy_s(obj.txt,"d:\\goodmanagefile\\");
					strcat_s(obj.txt,riqi);
					strcat_s(obj.txt,houzui2);
					fstream actdat;
					actdat.open(obj.route,ios::out|ios::binary);//
					actdat.seekp(0,ios::beg);//
					actdat.write((char*)&actmark,sizeof(address));
					actdat.close();	
					fstream acttxt;
					acttxt.open(obj.txt,ios::out|ios::binary);//
					acttxt.seekp(0,ios::beg);//
					acttxt.write((char*)&actmark,sizeof(address));
					acttxt.close();	
				}			
			}
			fdat.close();//
			MessageBox::Show("已批量建立工作表","成功",MessageBoxButtons::OK);
	}
	void createtxt()
	{
		fstream fdat("d:\\goodmanagefile\\dateroute.dat",ios::in|ios::binary);//
		fstream ftxt("d:\\goodmanagefile\\dateroutefile.txt",ios::out);
		fdat.seekp(0,ios::beg);
		address obj;
		do
		{
			fdat.read((char*)&obj,sizeof(address));//
			if(!endmark(obj))
				ftxt<<obj.year<<'\t'<<obj.month<<'\t'<<obj.day<<'\t'<<obj.route<<'\t'<<obj.txt<<endl;
		}while(!endmark(obj));
		ftxt<<"the end";
		ftxt.close();
		fdat.close();//
	}
	void append(int year,int month,int day,char*route,char*txt)
	{
		address obj;
		fstream fdat("d:\\goodmanagefile\\dateroute.dat",ios::in|ios::out|ios::binary);//
		if(!fdat)//
		{
			MessageBox::Show("活动资料文件不存在，请进行初始化操作","未初始化",MessageBoxButtons::OK,MessageBoxIcon::Exclamation);
			return;
		}
		fdat.seekg(0,ios::beg);
		do
		{
			fdat.read((char*)&obj,sizeof(address));//
		}while(!endmark(obj));//
		fdat.seekp(-long(sizeof(address)),ios::cur);//
		obj.year=year;
		obj.month=month;
		obj.day=day;
		strcpy_s(obj.route,route);
		strcpy_s(obj.txt,txt);
		fdat.write((char*)&obj,sizeof(address));//
		fdat.write((char*)&adrmark,sizeof(address));//
		fdat.close();
		MessageBox::Show("日期地址文件路径录入成功","录入成功！",MessageBoxButtons::OK);
	}
	void search(int key,int&year,int&month,int&day,char*route,char*txt)
	{
		address obj;		
		fstream fdat("d:\\goodmanagefile\\dateroute.dat",ios::in|ios::out|ios::binary);//
		if(!fdat)//
		{
			MessageBox::Show("活动资料文件不存在，请进行初始化操作","未初始化",MessageBoxButtons::OK,MessageBoxIcon::Exclamation);
			return;
		}
		fdat.seekg(0,ios::beg);
		switch(key)
		{
			case 1:
			do
			{
				fdat.read((char*)&obj,sizeof(address));//
			}while(strcmp(obj.route,route)&&!endmark(obj));
			if(!strcmp(obj.route,route))
			{
				year=obj.year;
				month=obj.month;
				day=obj.day;
				strcpy(txt,obj.txt);
				fdat.seekp(-long(sizeof(address)),ios::cur);//
				fdat.write((char*)&obj,sizeof(address));//
			}
			else 
				MessageBox::Show("路径输入错误","ERROR",MessageBoxButtons::OK,MessageBoxIcon::Exclamation);
			break;
			case 2:
				do
				{
					fdat.read((char*)&obj,sizeof(address));//
				}while((year!=obj.year||month!=obj.month||day!=obj.day)&&!endmark(obj));
				if(!(year!=obj.year||month!=obj.month||day!=obj.day))
				{
					strcpy(route,obj.route);
					strcpy(txt,obj.txt);
					fdat.seekp(-long(sizeof(address)),ios::cur);//
					fdat.write((char*)&obj,sizeof(address));//
				}
				else 
					MessageBox::Show("日期输入错误","ERROR",MessageBoxButtons::OK,MessageBoxIcon::Exclamation);
				break;
			}
		fdat.close();
	}
	void change(int key,char*route,char*route2,char*txt,char*txt2,
		int&year,int&month,int&day,int year2,int month2,int day2)
	{
		address obj;		
		fstream fdat("d:\\goodmanagefile\\dateroute.dat",ios::in|ios::out|ios::binary);//
		if(!fdat)//
		{
			MessageBox::Show("活动资料文件不存在，请进行初始化操作","未初始化",MessageBoxButtons::OK,MessageBoxIcon::Exclamation);
			return;
		}
		fdat.seekg(0,ios::beg);
		switch(key)
		{
			case 1:
			do
			{
				fdat.read((char*)&obj,sizeof(address));//
			}while(strcmp(obj.route,route)&&!endmark(obj));
			if(!strcmp(obj.route,route))
			{
				year=obj.year;
				month=obj.month;
				day=obj.day;
				strcpy(obj.route,route2);
				strcpy(obj.txt,txt2);
				strcpy(route,route2);
				strcpy(txt,txt2);
				fdat.seekp(-long(sizeof(address)),ios::cur);//
				fdat.write((char*)&obj,sizeof(address));//
			}
			else 
				MessageBox::Show("路径输入错误","ERROR",MessageBoxButtons::OK,MessageBoxIcon::Exclamation);
				//cout<<"路径输入错误\n";
			break;
			case 2:
				do
				{
				fdat.read((char*)&obj,sizeof(address));//
				}while((year!=obj.year||month!=obj.month||day!=obj.day)&&!endmark(obj));
				if(!(year!=obj.year||month!=obj.month||day!=obj.day))
				{
					obj.year=year2;
					obj.month=month2;
					obj.day=day2;
					year=year2;
					month=month2;
					day=day2;
					strcpy(route,obj.route);
					strcpy(txt,obj.txt);
					fdat.seekp(-long(sizeof(address)),ios::cur);//
					fdat.write((char*)&obj,sizeof(address));//
				}
				else 
					MessageBox::Show("日期输入错误","ERROR",MessageBoxButtons::OK,MessageBoxIcon::Exclamation);
				break;
			}
		fdat.close();
	}
	int endmark(address obj)
	{
		if(obj.day==0)
			return 1;
		return 0;
	}
};
class manageactivity
{
public:
	void initial(const char*filedat)
	{
		fstream fdat(filedat,ios::out|ios::binary);//
		fdat.seekp(0,ios::beg);//
		fdat.write((char*)&actmark,sizeof(activity));//
		fdat.close();//
	}
	int endmark(activity obj)
	{
		if(obj.phone==0)
			return 1;
		return 0;
	}
	void createtxt(const char*filedat,const char*datetxt,int year,int month,int day)
	{
		fstream fdat(filedat,ios::in|ios::binary);//
		fstream ftxt(datetxt,ios::out);
		fdat.seekp(0,ios::beg);
		activity obj;
		do 
		{
			fdat.read((char*)&obj,sizeof(activity));//
			if(!endmark(obj))
				ftxt<<obj.holder<<"    "<<obj.actname<<"    "<<obj.place<<"    "<<obj.phone<<"    "<<obj.reasponser<<"    "
				<<obj.chairnum()<<"    "<<obj.desknum()<<"    "
				<<obj.micpnum()<<"    "<<obj.micppart()<<"    "<<obj.audionum()<<"    "<<obj.audiopart()<<endl;
		}while(!endmark(obj));
		ftxt<<"the end";
		ftxt.close();
		fdat.close();//
	}
	void show(const char*filedat,char*actname,char*holder,char*place,char*responser,long&phone,
		int&chairnum,int&desknum,int&micpnum,int&audionum,daypart&micppart,daypart&audiopart,int&p)
	{
		activity obj;
		int flag;
		fstream fdat(filedat,ios::in|ios::out|ios::binary);//
		if(!fdat)//
		{
			MessageBox::Show("活动资料文件不存在，请进行初始化操作","未初始化",MessageBoxButtons::OK,MessageBoxIcon::Exclamation);
			return;
		}
		fdat.seekg(0,ios::beg);
		int i;
		if(p<0)p=0;
		for(i=0;i<p;i++)fdat.read((char*)&obj,sizeof(activity));//
		fdat.read((char*)&obj,sizeof(activity));//
		if(obj.phone!=0)
		{
			strcpy(holder,obj.holder);
			strcpy(actname,obj.actname);
			strcpy(place,obj.place);
			strcpy(responser,obj.reasponser);
			phone=obj.phone;
			chairnum=obj.chairnum();
			desknum=obj.desknum();
			micpnum=obj.micpnum();
			audionum=obj.audionum();
			micppart=obj.c.getdetail();
			audiopart=obj.d.getdetail();
		}
		if(obj.phone==0)
			MessageBox::Show("已达到最后一条","读完了",MessageBoxButtons::OK,MessageBoxIcon::Information);
		fdat.close();
	}
	void showwithholder(const char*filedat,char*actname,char*holder,char*place,char*responser,long&phone,
		int&chairnum,int&desknum,int&micpnum,int&audionum,daypart&micppart,daypart&audiopart,int&p)
	{
		activity obj;
		fstream fdat(filedat,ios::in|ios::out|ios::binary);//
		if(!fdat)//
		{
			MessageBox::Show("活动资料文件不存在，请进行初始化操作","未初始化",MessageBoxButtons::OK,MessageBoxIcon::Exclamation);
			return;
		}
		fdat.seekg(0,ios::beg);
		int i;
		if(p<0)p=0;
		for(i=0;i<p;i++)fdat.read((char*)&obj,sizeof(activity));//
		fdat.read((char*)&obj,sizeof(activity));//
		while(strcmp(obj.holder,holder)&&obj.phone!=0)
		{			
			p++;
			fdat.read((char*)&obj,sizeof(activity));//
		}
		if(obj.phone!=0)
		{
			strcpy(holder,obj.holder);
			strcpy(actname,obj.actname);
			strcpy(place,obj.place);
			strcpy(responser,obj.reasponser);
			phone=obj.phone;
			chairnum=obj.chairnum();
			desknum=obj.desknum();
			micpnum=obj.micpnum();
			audionum=obj.audionum();
			micppart=obj.c.getdetail();
			audiopart=obj.d.getdetail();
		}
		else if(obj.phone==0)
		{
			MessageBox::Show("已达到最后一条","读完了",MessageBoxButtons::OK,MessageBoxIcon::Information);
			p--;
		}
		fdat.close();
	}
	void showwithactname(const char*filedat,char*actname,char*holder,char*place,char*responser,long&phone,
		int&chairnum,int&desknum,int&micpnum,int&audionum,daypart&micppart,daypart&audiopart,int&p)
	{
		activity obj;
		fstream fdat(filedat,ios::in|ios::out|ios::binary);//
		if(!fdat)//
		{
			MessageBox::Show("活动资料文件不存在，请进行初始化操作","未初始化",MessageBoxButtons::OK,MessageBoxIcon::Exclamation);
			return;
		}
		fdat.seekg(0,ios::beg);
		int i;
		if(p<0)p=0;
		for(i=0;i<p;i++)fdat.read((char*)&obj,sizeof(activity));//
		fdat.read((char*)&obj,sizeof(activity));//
		while(strcmp(obj.actname,actname)&&obj.phone!=0)
		{			
			p++;
			fdat.read((char*)&obj,sizeof(activity));//
		}
		if(obj.phone!=0)
		{
			strcpy(holder,obj.holder);
			strcpy(actname,obj.actname);
			strcpy(place,obj.place);
			strcpy(responser,obj.reasponser);
			phone=obj.phone;
			chairnum=obj.chairnum();
			desknum=obj.desknum();
			micpnum=obj.micpnum();
			audionum=obj.audionum();
			micppart=obj.c.getdetail();
			audiopart=obj.d.getdetail();
		}
		else if(obj.phone==0)
		{
			MessageBox::Show("已达到最后一条","读完了",MessageBoxButtons::OK,MessageBoxIcon::Information);
			p--;
		}
		fdat.close();
	}
	void showwithplace(const char*filedat,char*actname,char*holder,char*place,char*responser,long&phone,
		int&chairnum,int&desknum,int&micpnum,int&audionum,daypart&micppart,daypart&audiopart,int&p)
	{
		activity obj;
		fstream fdat(filedat,ios::in|ios::out|ios::binary);//
		if(!fdat)//
		{
			MessageBox::Show("活动资料文件不存在，请进行初始化操作","未初始化",MessageBoxButtons::OK,MessageBoxIcon::Exclamation);
			return;
		}
		fdat.seekg(0,ios::beg);
		int i;
		if(p<0)p=0;
		for(i=0;i<p;i++)fdat.read((char*)&obj,sizeof(activity));//
		fdat.read((char*)&obj,sizeof(activity));//
		while(strcmp(obj.place,place)&&obj.phone!=0)
		{			
			p++;
			fdat.read((char*)&obj,sizeof(activity));//
		}
		if(obj.phone!=0)
		{
			strcpy(holder,obj.holder);
			strcpy(actname,obj.actname);
			strcpy(place,obj.place);
			strcpy(responser,obj.reasponser);
			phone=obj.phone;
			chairnum=obj.chairnum();
			desknum=obj.desknum();
			micpnum=obj.micpnum();
			audionum=obj.audionum();
			micppart=obj.c.getdetail();
			audiopart=obj.d.getdetail();
		}
		else if(obj.phone==0)
		{
			MessageBox::Show("已达到最后一条","读完了",MessageBoxButtons::OK,MessageBoxIcon::Information);
			p--;
		}
		fdat.close();
	}
	void showwithresponser(const char*filedat,char*actname,char*holder,char*place,char*responser,long&phone,
		int&chairnum,int&desknum,int&micpnum,int&audionum,daypart&micppart,daypart&audiopart,int&p)
	{
		activity obj;
		fstream fdat(filedat,ios::in|ios::out|ios::binary);//
		if(!fdat)//
		{
			MessageBox::Show("活动资料文件不存在，请进行初始化操作","未初始化",MessageBoxButtons::OK,MessageBoxIcon::Exclamation);
			return;
		}
		fdat.seekg(0,ios::beg);
		int i;
		if(p<0)p=0;
		for(i=0;i<p;i++)fdat.read((char*)&obj,sizeof(activity));//
		fdat.read((char*)&obj,sizeof(activity));//
		while(strcmp(obj.reasponser,responser)&&obj.phone!=0)
		{			
			p++;
			fdat.read((char*)&obj,sizeof(activity));//
		}
		if(obj.phone!=0)
		{
			strcpy(holder,obj.holder);
			strcpy(actname,obj.actname);
			strcpy(place,obj.place);
			strcpy(responser,obj.reasponser);
			phone=obj.phone;
			chairnum=obj.chairnum();
			desknum=obj.desknum();
			micpnum=obj.micpnum();
			audionum=obj.audionum();
			micppart=obj.c.getdetail();
			audiopart=obj.d.getdetail();
		}
		else if(obj.phone==0)
		{
			MessageBox::Show("已达到最后一条","读完了",MessageBoxButtons::OK,MessageBoxIcon::Information);
			p--;
		}
		fdat.close();
	}
	void showwithphone(const char*filedat,char*actname,char*holder,char*place,char*responser,long&phone,
		int&chairnum,int&desknum,int&micpnum,int&audionum,daypart&micppart,daypart&audiopart,int&p)
	{
		activity obj;
		fstream fdat(filedat,ios::in|ios::out|ios::binary);//
		if(!fdat)//
		{
			MessageBox::Show("活动资料文件不存在，请进行初始化操作","未初始化",MessageBoxButtons::OK,MessageBoxIcon::Exclamation);
			return;
		}
		fdat.seekg(0,ios::beg);
		int i;
		if(p<0)p=0;
		for(i=0;i<p;i++)fdat.read((char*)&obj,sizeof(activity));//
		fdat.read((char*)&obj,sizeof(activity));//
		while(obj.phone!=phone&&obj.phone!=0)
		{			
			p++;
			fdat.read((char*)&obj,sizeof(activity));//
		}
		if(obj.phone!=0)
		{
			strcpy(holder,obj.holder);
			strcpy(actname,obj.actname);
			strcpy(place,obj.place);
			strcpy(responser,obj.reasponser);
			phone=obj.phone;
			chairnum=obj.chairnum();
			desknum=obj.desknum();
			micpnum=obj.micpnum();
			audionum=obj.audionum();
			micppart=obj.c.getdetail();
			audiopart=obj.d.getdetail();
		}
		else if(obj.phone==0)
		{
			MessageBox::Show("已达到最后一条","读完了",MessageBoxButtons::OK,MessageBoxIcon::Information);
			p--;
		}
		fdat.close();
	}
	void showwithchair(const char*filedat,char*actname,char*holder,char*place,char*responser,long&phone,
		int&chairnum,int&desknum,int&micpnum,int&audionum,daypart&micppart,daypart&audiopart,int&p)
	{
		activity obj;
		fstream fdat(filedat,ios::in|ios::out|ios::binary);//
		if(!fdat)//
		{
			MessageBox::Show("活动资料文件不存在，请进行初始化操作","未初始化",MessageBoxButtons::OK,MessageBoxIcon::Exclamation);
			return;
		}
		fdat.seekg(0,ios::beg);
		int i;
		if(p<0)p=0;
		for(i=0;i<p;i++)fdat.read((char*)&obj,sizeof(activity));//
		fdat.read((char*)&obj,sizeof(activity));//
		while(obj.chairnum()==0&&obj.phone!=0)
		{			
			p++;
			fdat.read((char*)&obj,sizeof(activity));//
		}
		if(obj.phone!=0)
		{
			strcpy(holder,obj.holder);
			strcpy(actname,obj.actname);
			strcpy(place,obj.place);
			strcpy(responser,obj.reasponser);
			phone=obj.phone;
			chairnum=obj.chairnum();
			desknum=obj.desknum();
			micpnum=obj.micpnum();
			audionum=obj.audionum();
			micppart=obj.c.getdetail();
			audiopart=obj.d.getdetail();
		}
		else if(obj.phone==0)
		{
			MessageBox::Show("已达到最后一条","读完了",MessageBoxButtons::OK,MessageBoxIcon::Information);
			p--;
		}
		fdat.close();
	}
	void showwithdesk(const char*filedat,char*actname,char*holder,char*place,char*responser,long&phone,
		int&chairnum,int&desknum,int&micpnum,int&audionum,daypart&micppart,daypart&audiopart,int&p)
	{
		activity obj;
		fstream fdat(filedat,ios::in|ios::out|ios::binary);//
		if(!fdat)//
		{
			MessageBox::Show("活动资料文件不存在，请进行初始化操作","未初始化",MessageBoxButtons::OK,MessageBoxIcon::Exclamation);
			return;
		}
		fdat.seekg(0,ios::beg);
		int i;
		if(p<0)p=0;
		for(i=0;i<p;i++)fdat.read((char*)&obj,sizeof(activity));//
		fdat.read((char*)&obj,sizeof(activity));//
		while(obj.desknum()==0&&obj.phone!=0)
		{			
			p++;
			fdat.read((char*)&obj,sizeof(activity));//
		}
		if(obj.phone!=0)
		{
			strcpy(holder,obj.holder);
			strcpy(actname,obj.actname);
			strcpy(place,obj.place);
			strcpy(responser,obj.reasponser);
			phone=obj.phone;
			chairnum=obj.chairnum();
			desknum=obj.desknum();
			micpnum=obj.micpnum();
			audionum=obj.audionum();
			micppart=obj.c.getdetail();
			audiopart=obj.d.getdetail();
		}
		else if(obj.phone==0)
		{
			MessageBox::Show("已达到最后一条","读完了",MessageBoxButtons::OK,MessageBoxIcon::Information);
			p--;
		}
		fdat.close();
	}
	void showwithmicp(const char*filedat,char*actname,char*holder,char*place,char*responser,long&phone,
		int&chairnum,int&desknum,int&micpnum,int&audionum,daypart&micppart,daypart&audiopart,int&p)
	{
		activity obj;
		fstream fdat(filedat,ios::in|ios::out|ios::binary);//
		if(!fdat)//
		{
			MessageBox::Show("活动资料文件不存在，请进行初始化操作","未初始化",MessageBoxButtons::OK,MessageBoxIcon::Exclamation);
			return;
		}
		fdat.seekg(0,ios::beg);
		int i;
		if(p<0)p=0;
		for(i=0;i<p;i++)fdat.read((char*)&obj,sizeof(activity));//
		fdat.read((char*)&obj,sizeof(activity));//
		while(obj.micpnum()==0&&obj.phone!=0)
		{			
			p++;
			fdat.read((char*)&obj,sizeof(activity));//
		}
		if(obj.phone!=0)
		{
			strcpy(holder,obj.holder);
			strcpy(actname,obj.actname);
			strcpy(place,obj.place);
			strcpy(responser,obj.reasponser);
			phone=obj.phone;
			chairnum=obj.chairnum();
			desknum=obj.desknum();
			micpnum=obj.micpnum();
			audionum=obj.audionum();
			micppart=obj.c.getdetail();
			audiopart=obj.d.getdetail();
		}
		else if(obj.phone==0)
		{
			MessageBox::Show("已达到最后一条","读完了",MessageBoxButtons::OK,MessageBoxIcon::Information);
			p--;
		}
		fdat.close();
	}
	void showwithaudio(const char*filedat,char*actname,char*holder,char*place,char*responser,long&phone,
		int&chairnum,int&desknum,int&micpnum,int&audionum,daypart&micppart,daypart&audiopart,int&p)
	{
		activity obj;
		fstream fdat(filedat,ios::in|ios::out|ios::binary);//
		if(!fdat)//
		{
			MessageBox::Show("活动资料文件不存在，请进行初始化操作","未初始化",MessageBoxButtons::OK,MessageBoxIcon::Exclamation);
			return;
		}
		fdat.seekg(0,ios::beg);
		int i;
		if(p<0)p=0;
		for(i=0;i<p;i++)fdat.read((char*)&obj,sizeof(activity));//
		fdat.read((char*)&obj,sizeof(activity));//
		while(obj.audionum()==0&&obj.phone!=0)
		{			
			p++;
			fdat.read((char*)&obj,sizeof(activity));//
		}
		if(obj.phone!=0)
		{
			strcpy(holder,obj.holder);
			strcpy(actname,obj.actname);
			strcpy(place,obj.place);
			strcpy(responser,obj.reasponser);
			phone=obj.phone;
			chairnum=obj.chairnum();
			desknum=obj.desknum();
			micpnum=obj.micpnum();
			audionum=obj.audionum();
			micppart=obj.c.getdetail();
			audiopart=obj.d.getdetail();
		}
		else if(obj.phone==0)
		{
			MessageBox::Show("已达到最后一条","读完了",MessageBoxButtons::OK,MessageBoxIcon::Information);
			p--;
		}
		fdat.close();
	}
	void append(const char*filedat,char*actname,char*holder,char*place,char*responser,long&phone,
		int&chairnum,int&desknum,int&micpnum,int&audionum,char*s1,char*s2,int&p,int&flag)
	{
		activity obj;
		date b;
		fstream fdat(filedat,ios::in|ios::out|ios::binary);//
		if(!fdat)//
		{
			MessageBox::Show("活动资料文件不存在，请进行初始化操作","未初始化",MessageBoxButtons::OK,MessageBoxIcon::Exclamation);
			return;
		}
		flag=1;
		fdat.seekg(0,ios::beg);//
		do//
		{
			fdat.read((char*)&obj,sizeof(activity));//	
			p++;
		}while(!endmark(obj));//
		fdat.seekp(-long(sizeof(activity)),ios::cur);//
		daypart micppart,audiopart;
		if(!strcmp(s1,"morning"))micppart=morning;
		else if(!strcmp(s1,"afternoon"))micppart=afternoon;
		else if(!strcmp(s1,"night"))micppart=night;
		else micppart=不申请;
		if(!strcmp(s2,"morning"))audiopart=morning;
		else if(!strcmp(s2,"afternoon"))audiopart=afternoon;
		else if(!strcmp(s2,"night"))audiopart=night;
		else audiopart=不申请;
		obj.set(holder,actname,place,responser,phone,
			chairnum,desknum,micpnum,audionum,micppart,audiopart);
		b.setnum(filedat);
		b.check(obj,flag);
		if(flag==1)
		{
			fdat.write((char*)&obj,sizeof(activity));//
			fdat.write((char*)&actmark,sizeof(activity));//						
		}
		fdat.close();
	}
	void change(const char*filedat,char*actname,char*holder,char*place,char*responser,long&phone,
		int&chairnum,int&desknum,int&micpnum,int&audionum,char*s1,char*s2,int p,int&flag)
	{
		activity obj;
		date b;
		fstream fdat(filedat,ios::in|ios::out|ios::binary);//
		if(!fdat)//
		{
			MessageBox::Show("活动资料文件不存在，请进行初始化操作","未初始化",MessageBoxButtons::OK,MessageBoxIcon::Exclamation);
			return;
		}
		flag=1;
		fdat.seekg(0,ios::beg);//
		int i=0;
		do//
		{
			fdat.read((char*)&obj,sizeof(activity));//	
			i++;
		}while(!endmark(obj)&&i<=p);//
		fdat.seekp(-long(sizeof(activity)),ios::cur);//
		daypart micppart,audiopart;
		if(!strcmp(s1,"morning"))micppart=morning;
		else if(!strcmp(s1,"afternoon"))micppart=afternoon;
		else if(!strcmp(s1,"night"))micppart=night;
		else micppart=不申请;
		if(!strcmp(s2,"morning"))audiopart=morning;
		else if(!strcmp(s2,"afternoon"))audiopart=afternoon;
		else if(!strcmp(s2,"night"))audiopart=night;
		else audiopart=不申请;
		activity temp(obj);
		/*activity noact(obj);
		noact.set(holder,actname,place,responser,phone,
			0,0,0,0,micppart,audiopart);
		fdat.seekp(-long(sizeof(activity)),ios::cur);//
		fdat.write((char*)&noact,sizeof(activity));//*/	
		obj.set(holder,actname,place,responser,phone,
			chairnum,desknum,micpnum,audionum,micppart,audiopart);
		//fdat.seekp(-long(sizeof(activity)),ios::cur);//
		fdat.write((char*)&obj,sizeof(activity));//	
		fdat.close();
		fdat.open(filedat,ios::in|ios::out|ios::binary);
		b.setnum(filedat);
		b.check1(obj,flag);
		do//
		{
			fdat.read((char*)&obj,sizeof(activity));//	
			i++;
		}while(!endmark(obj)&&i<=p);//
		fdat.seekp(-long(sizeof(activity)),ios::cur);//
		if(flag==0)
		{
			fdat.seekp(-long(sizeof(activity)),ios::cur);//
			fdat.write((char*)&temp,sizeof(activity));//
		}
		fdat.close();
	}
};
class manage
{
public:
	void createsheet(int year1,int month1,int year2,int month2)
	{
		fstream fdat("d:\\goodmanagefile\\dateroute.dat",ios::in|ios::binary);
		fstream sheetdat("d:\\goodmanagefile\\sheet.dat",ios::out|ios::in|ios::binary);
		fstream sheettxt("d:\\goodmanagefile\\校园活动物资管理系统存档.txt",ios::out);
		address obj;
		activity obj1;
		managedate a;
		manageactivity b;
		fdat.seekg(0,ios::beg);
		sheetdat.seekg(0,ios::beg);
		sheettxt.seekg(0,ios::beg);
		sheettxt<<"**********校园活动物资管理系统**********\n";
		do
		{
			fdat.read((char*)&obj,sizeof(address));
			if(!a.endmark(obj))
			{
				fstream datedat(obj.route,ios::in|ios::out|ios::binary);
				datedat.seekg(0,ios::beg);
				sheettxt<<obj.year<<"年"<<obj.month<<"月"<<obj.day<<"日\n"
				<<"主办方    活动名称    举办地点    负责人    联系方式    胶凳    桌子    无线麦    借用时段    音响    借用时段\n";
				do
				{
					datedat.read((char*)&obj1,sizeof(activity));
					sheetdat.write((char*)&obj1,sizeof(activity));
					sheettxt<<obj1.holder<<"    "<<obj1.actname<<"    "<<obj1.place<<"    "<<obj1.phone<<"    "<<obj1.reasponser
				<<obj1.chairnum()<<"    "<<obj1.desknum()<<"    "
				<<obj1.micpnum()<<"    "<<obj1.micppart()<<"    "<<obj1.audionum()<<"    "<<obj1.audiopart()<<endl;
				}while(!b.endmark(obj1));
				datedat.close();
			}
		}while(!a.endmark(obj));
		sheettxt<<"the end\n";
		sheetdat.close();
		sheettxt.close();
		fdat.close();
		MessageBox::Show("已合并指定工作表\n请在以下目录浏览文件\nd:\\goodmanagefile\\校园活动物资管理系统存档.txt","成功",MessageBoxButtons::OK);
	}
};