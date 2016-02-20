#include<fstream>
#include<string>
#include"llist.h"
#include<cstring>
using namespace std;
using namespace System::Windows::Forms;

class Authority
{
protected:
	bool search;
	bool report;
	bool collect;
	bool judge;
	bool save;
	bool submit;
	int endmark;
	int exsitmark;
public:
	Authority()
	{
		search=report=collect=true;
		judge=save=submit=false;
		endmark=0;
		exsitmark=1;
	}
	void setendmark(int i)
	{
		endmark=i;
	}
	void setexsitmark(int i)
	{
		exsitmark=i;
	}
	int getendmark()
	{
		return endmark;
	}
	int getexistmark()
	{
		return exsitmark;
	}
	bool operator==(const Authority&right) const
	{	// test for iterator equality
		return ((search==right.search)&&(report==right.report)&&(collect==right.collect)&&(judge==right.judge)&&(save==right.save)&&(submit==right.submit));
	}
	bool cansearch(){return search;}
	bool canreport(){return report;}
	bool cancollect(){return collect;}
	bool hasjudge(){return judge;}
	bool hassave(){return save;}
	bool hassubmit(){return submit;}
	void setsearch(bool authority){search=authority;}
	void setreport(bool authority){report=authority;}
	void setcollect(bool authority){collect=authority;}
	void setjudge(bool authority){judge=authority;}
	void setsave(bool authority){save=authority;}
	void setsubmit(bool authority){submit=authority;}
};
class State
{
protected:
	bool save;
	bool submit;
	bool judge;
	int endmark;
	int exsitmark;
public:
	State()
	{
		save=submit=judge=false;
		endmark=0;
		exsitmark=1;
	}
	bool operator==(const State& Right) const
	{	// test for iterator equality
		return ((save==Right.save)&&(submit==Right.submit)&&(judge==Right.judge));
	}
	void setendmark(int i)
	{
		endmark=i;
	}
	void setexsitmark(int i)
	{
		exsitmark=i;
	}
	int getendmark()
	{
		return endmark;
	}
	int getexistmark()
	{
		return exsitmark;
	}
	bool issaved(){return save;}
	bool issubmitted(){return submit;}
	bool isjudged(){return judge;}
	void setsave(bool state){save=state;}
	void setsubmit(bool state){submit=state;}
	void setjudge(bool state){judge=state;}
};
class Article:public State
{
private:
	long artid; 
	long stuid;
	long tecid;
	char artname[30];
	char keyword[20];
	//char digest[200];
	int mark;
	//char comment[200];
	char tecname[20];
	char stuname[20];
	char stusubject[30];
	int stugrade;
public:
	Article()
	{
		artid=stuid=tecid=0;
		strcpy_s(artname,"null");
		strcpy_s(keyword,"null");
		strcpy_s(tecname,"null");
		strcpy_s(stuname,"null");
		strcpy_s(stusubject,"null");
		stugrade=2000;
		mark=0;
	}
	Article(const Article&p)
	{
		artid=p.artid;stuid=p.stuid;tecid=p.tecid;
		strcpy_s(artname,p.artname);
		strcpy_s(keyword,p.keyword);
		//digest=p.digest;
		mark=p.mark;
		//comment=p.comment;
		strcpy_s(tecname,p.tecname);
		strcpy_s(stuname,p.stuname);
		strcpy_s(stusubject,p.stusubject);
		stugrade=p.stugrade;
	}
	void settecname(char*tnm)
	{
		strcpy_s(tecname,tnm);
	}
	void setstuname(char*snm)
	{
		strcpy_s(stuname,snm);
	}
	void setstusubject(char*tnm)
	{
		strcpy_s(stusubject,tnm);
	}
	void setstugrade(int gid)
	{
		stugrade=gid;
	}
	char* gettecname()
	{
		return tecname;
	}
	char*getstuname()
	{
		return stuname;
	}
	char*getstusubject()
	{
		return stusubject;
	}
	int getstugrade()
	{
		return stugrade;
	}
	bool operator==(const Article& Right) const
	{	// test for iterator equality
		return (artid==Right.artid);
	}
	void setmark(int m)
	{
		mark=m;
	}
	/*void setcomment(char* cmt)
	{
		comment=cmt;
	}
*/
	void setartid(long aid)
	{
		artid=aid;
	}
	void setstuid(long sid)
	{
		stuid=sid;
	}
	void settecid(long tid)
	{
		tecid=tid;
	}
	void setartname(char* aname)
	{
		strcpy_s(artname,aname);
	}
	void setkeyword(char* kwd)
	{
		strcpy_s(keyword,kwd);
	}
	/*void setdigest(char* dgst)
	{
		digest=dgst;
	}*/
	long getartid()
	{
		return artid;
	}
	long getstuid()
	{
		return stuid;
	}
	long gettecid()
	{
		return tecid;
	}
	char* getartname()
	{
		return artname;
	}
	char* getkeyword()
	{
		return keyword;
	}
	/*char* getdigest()
	{
		return digest;
	}*/
	int getmark()
	{
		return mark;
	}
	/*char* getcomment()
	{
		return comment;
	}*/
};
class Record
{
private:
	long artid;
	long userid;
	int endmark;
	int exsitmark;
public:
	Record()
	{
		artid=0;
		userid=0;
		endmark=0;
		exsitmark=1;
	}
	
	Record(const Record&p)
	{
		artid=p.artid;
		userid=p.userid;
		endmark=p.endmark;
		exsitmark=p.exsitmark;
	}
	void setendmark(int i)
	{
		endmark=i;
	}
	void setexsitmark(int i)
	{
		exsitmark=i;
	}
	int getendmark()
	{
		return endmark;
	}
	int getexistmark()
	{
		return exsitmark;
	}
	void setrecord(long aid,long uid)
	{
		artid=aid;
		userid=uid;
	}
	
	long getartid()
	{
		return artid;
	}
	long getuserid()
	{
		return userid;
	}
	bool operator==(const Record& Right) const
	{	// test for iterator equality
		return (artid==Right.artid&&userid==Right.userid);
	}
};
class user:public Authority
{
public:
	void initialize()
	{
		this->setcollect(false);
		this->setreport(false);
		this->setjudge(false);
		this->setsearch(true);
		this->setsave(false);
		this->setsubmit(false);
	}
	template<typename p1>
	void searchforarticle(p1 p)
	{

	}
};
class Student:public user
{
private:
	long stuid;
	long tecid;
	long artid;
	char pwd[20];
	int gradeid;
	int classid;
	char sj[20];
	bool sex;
	char name[20];
	Record collection[20];
	int colnum;
public:
	Student()
	{
		stuid=tecid=artid=0;
		colnum=0;
		strcpy_s(pwd,"null");
		strcpy_s(name,"null");
		sex=true;
		classid=1;
		gradeid=2000;
		strcpy_s(sj,"计算机科学与技术");
		for(int i=0;i<20;i++)
		{
			collection[i]=Record();
		}
	}
	bool operator==(Student  Right) const
	{	// test for iterator equality
		return (stuid==Right.getstuid());
	}
	int getcolnum()
	{
		return colnum;
	}
	void addcollection(Record x)
	{
		if(colnum>20)
		{
			MessageBox::Show("数目超过上限！");
		}
		else
		{
			collection[colnum++]=Record(x);
			MessageBox::Show("已收藏！");
		}
	}
	Student(const Student&p)
	{
		stuid=p.stuid;
		colnum=p.colnum;
		endmark=p.endmark;
		exsitmark=p.exsitmark;
		tecid=p.tecid;
		artid=p.artid;
		strcpy_s(pwd,p.pwd);
		strcpy_s(name,p.name);
		sex=p.sex;
		classid=p.classid;
		strcpy_s(sj,p.sj);
		search=p.search;
		report=p.report;
		gradeid=p.gradeid;
		collect=p.collect;
		save=p.save;
		submit=p.submit;
		judge=p.judge;
		for(int i=0;i<20;i++)
		{
			collection[i]=Record(p.collection[i]);
		}
	}
	void initialize()
	{
		this->setcollect(true);
		this->setreport(true);
		this->setjudge(false);
		this->setsearch(true);
		this->setsave(false);
		this->setsubmit(false);
	}
	void collectarticle(long aid,long uid)
	{
		Record rcd=Record();
		rcd.setrecord(aid,uid);
		collection[colnum++]=Record(rcd);
	}
	Record*getcollection(int&num)
	{
		num=colnum;
		return collection;
	}
	void setcollection(Record*rcdlist)
	{
		for (int i=0;i<20;i++)
		{
			collection[i]=Record(rcdlist[i]);
		}
	}
	void reportbad(long rid,long artid,long uid,LList<Record>reportlist)
	{
		Record rcd;
		rcd.setrecord(artid,uid);
		reportlist.append(rcd);
	}
	void savearticle(LList<Article>artsavelist,Article art)
	{
		if(art.issubmitted()||art.isjudged())
		{
			//cout<<"can't save";
		}
		else
		{
			artsavelist.append(art);
			art.setsave(true);
		}
	}
	void submitarticle(LList<Article>artsubmitlist,Article art)
	{
		if (art.isjudged()||(!art.issaved()))
		{
			//cout<<"can't submit";
		}
		else
		{
			artsubmitlist.append(art);
			art.setsave(true);
			art.setsubmit(true);
			this->setsave(false);
			this->setsubmit(false);
		}
	}
	long getstuid()
	{
		return stuid;
	}
	long getaid()
	{
		return artid;
	}
	long gettecid()
	{
		return tecid;
	}
	char* getpwd()
	{
		return pwd;
	}
	char* getname()
	{
		return name;
	}
	/*string getelephone()
	{
		return telephone;
	}
	string getemail()
	{
		return email;
	}*/
	bool getsex()
	{
		return sex;
	}
	int getclassid()
	{
		return classid;
	}
	int getgradeid()
	{
		return gradeid;
	}
	char* getsubject()
	{
		return sj;
	}
	void setstuid(long sid)
	{
		stuid=sid;
	}
	void setaid(long aid)
	{
		artid=aid;
	}
	void settecid(long tid)
	{
		tecid=tid;
	}
	void setpwd(char* pwd1)
	{
		strcpy_s(pwd,pwd1);
	}
	void setname(char* name1)
	{
		strcpy_s(name,name1);
	}
	/*void settelephone(string telephone)
	{
		this->telephone=telephone;
	}
	void setemail(string email)
	{
		this->email=email;
	}*/
	void setclassid(int cid)
	{
		classid=cid;
	}
	void setgradeid(int gid)
	{
		gradeid=gid;
	}
	void setsubject(char* sj1)
	{
		strcpy_s(sj,sj1);
	}
	void setsex(char*x)
	{
		if (!strcmp(x,"男"))
		{
			sex=true;
		} 
		else
		{
			sex=false;
		}
	}
};
class Teacher:public user
{
private:
	long tecid;
	char pwd[20];
	char name[20];
	bool sex;
	char tecrank[20];
	/*string telephone;
	string email;*/
	long stulist[50];
	int stunum;
public:
	Teacher()
	{
		tecid=0;
		strcpy_s(pwd,"null");
		strcpy_s(name,"null");
		sex=true;
		stunum=0;
		strcpy_s(tecrank,"讲师");
		for (int i=0;i<50;i++)
		{
			stulist[i]=0;
		}
	}
	
	Teacher(const Teacher&p)
	{
		tecid=p.tecid;
		strcpy_s(pwd,p.pwd);
		strcpy_s(name,p.name);
		sex=p.sex;
		strcpy_s(tecrank,p.tecrank);
		search=p.search;
		report=p.report;
		collect=p.collect;
		save=p.save;
		stunum=p.stunum;
		submit=p.submit;
		judge=p.judge;
		for (int i=0;i<50;i++)
		{
			stulist[i]=p.stulist[i];
		}
	}
	void initialize()
	{
		this->setcollect(false);
		this->setreport(false);
		this->setjudge(true);
		this->setsearch(true);
		this->setsave(false);
		this->setsubmit(false);
	}
	long*getstulist(int num)
	{
		num=stunum;
		return stulist;
	}
	void addstu(long stu)
	{
		if(stunum>20)
		{
			MessageBox::Show("数目超过上限！");
		}
		else
		{
			stulist[stunum++]=stu;
		}
	}
	long gettecid()
	{
		return tecid;
	}
	char* getpwd()
	{
		return pwd;
	}
	char* getname()
	{
		return name;
	}
	/*string getelephone()
	{
		return telephone;
	}
	string getemail()
	{
		return email;
	}*/
	bool getsex()
	{
		return sex;
	}
	char* getprofrank()
	{
		return tecrank;
	}
	void setsex(char*x)
	{
		if (!strcmp(x,"男"))
		{
			sex=true;
		} 
		else
		{
			sex=false;
		}
	}
	void settecid(long tid)
	{
		tecid=tid;
	}
	void setpwd(char* pwd1)
	{
		strcpy_s(pwd,pwd1);
	}
	void setname(char* name1)
	{
		strcpy_s(name,name1);
	}
	/*void settelephone(string telephone)
	{
		this->telephone=telephone;
	}
	void setemail(string email)
	{
		this->email=email;
	}*/
	int getstunum()
	{
		return stunum;
	}

	void setstulist(long*stulist1)
	{
		for(int i=0;i<20;i++)
		{
			stulist[i]=stulist1[i];
		}
	}
	void setprorank(char* pfr)
	{
		strcpy_s(tecrank,pfr);
	}
	bool judgeforarticle(Article art,int mark,LList<Article>judgelist,long stu)
	{
		if ((!art.issaved())||(!art.issubmitted()))
		{
			//cout<<"can't judge";
			judgelist.remove(art);
		} 
		else
		{
			art.setmark(mark);
			//art.setcomment(comment);
			stulist[stunum++]=stu;
			art.setjudge(true);
			//找到学生记录并改变其状态
			/*stu.setsave(false);
			stu.setsubmit(false);*/
			this->setjudge(false);
			judgelist.remove(art);
		}
		
	}
	bool refusearticle(Article art,LList<Article>judgelist)
	{
		judgelist.remove(art);
		//提示文章未通过

	}
	bool operator==(Teacher Right) const
	{	// test for iterator equality
		return (tecid==Right.gettecid());
	}
};
class Manager:public user
{
private:
	long mid;
	char name[20];
	char pwd[20];
public:
	Manager()
	{
		mid=0;
		strcpy_s(pwd,"null");
		strcpy_s(name,"null");
	}
	
	Manager(const Manager&p)
	{
		mid=p.mid;
		strcpy_s(pwd,p.pwd);
		strcpy_s(name,p.name);
	}
	void setmid(int id)
	{
		mid=id;
	}
	void setname(char*s1)
	{
		strcpy_s(name,s1);
	}
	void setpwd(char* pwd1)
	{
		strcpy_s(pwd,pwd1);
	}
	long getmid()
	{
		return mid;
	}
	char*getname()
	{
		return name;
	}
	char* getpwd()
	{
		return pwd;
	}
	void initialize()
	{
		this->setcollect(false);
		this->setreport(false);
		this->setjudge(false);
		this->setsearch(true);
		this->setsave(false);
		this->setsubmit(false);
	}
	void descreaseAuthority(int i,Record rcd,LList<Record>reportlist)
	{
		switch(i)
		{
		case 1:setsearch(false);break;
		case 2:setcollect(false);break;
		case 3:setreport(false);break;
		case 4:setsave(false);break;
		case 5:setsubmit(false);break;
		case 6:setjudge(false);break;
		default:break;
		}
		//移除以处理的举报信息
		reportlist.remove(rcd);
	}
	bool operator==( Manager  Right) const
	{	// test for iterator equality
		return (mid==Right.getmid());
	}
	void increaseAuthority(int i,Record rcd,LList<Record>reportlist)
	{
		switch(i)
		{
		case 1:setsearch(true);break;
		case 2:setcollect(true);break;
		case 3:setreport(true);break;
		case 4:setsave(true);break;
		case 5:setsubmit(true);break;
		case 6:setjudge(true);break;
		}
		reportlist.remove(rcd);
	}
};