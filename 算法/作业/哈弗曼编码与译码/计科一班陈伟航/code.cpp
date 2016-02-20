#include<iostream>
#include<cstring>
#include<fstream>
using namespace std;
struct map
{
	char code[47];
	char c;
	int freq;
	map()
	{
		freq=0;
		c=' ';
		code[0]='\0';
	}
};
struct HuffNode
{
	virtual ~HuffNode(){}
	virtual bool isLeaf()=0;
	int wgt;
	char hfcode[37];
	HuffNode(){hfcode[0]='\0';}
};
struct LeafNode:public HuffNode
{
	char ch;
	LeafNode()
	{
		wgt=0;
	}
	LeafNode(char val,int freq)
	{
		ch=val;wgt=freq;
	}
	bool isLeaf(){return true;}
};
struct IntlNode:public HuffNode
{
	HuffNode*lc;
	HuffNode*rc;
	IntlNode(HuffNode*l,HuffNode*r)
	{wgt=l->wgt+r->wgt;lc=l;rc=r;}
	bool isLeaf(){return false;}
	void setLeft(HuffNode*b)
	{lc=(HuffNode*)b;}
	void setRight(HuffNode*b)
	{rc=(HuffNode*)b;}
};
struct HuffTree
{
	HuffNode*root;
	int Eweight;
	HuffTree(){Eweight=0;}
	HuffTree(const char&val,int freq)//leaf constructor
	{root=new LeafNode(val,freq);}
	HuffTree(HuffTree*l,HuffTree*r)//Internal node constructor
	{
		root=new IntlNode(l->root,r->root);
		Eweight=0;
	}
	~HuffTree(){}
	static bool prior(HuffTree*p,HuffTree*q)
	{
		if(p->root->wgt<=q->root->wgt)return true;
		else return false;
	}
	void hufcode(HuffNode*p)
	{
		if(p->isLeaf())
		{
			fstream f;
			f.open("D:\\map.txt",ios::app);
			Eweight+=strlen(p->hfcode)*(p->wgt);
			f<<p->hfcode<<"\n";
			f.close();
			return;
		}
		if(p==root)
		{
			strcpy_s(((IntlNode*)root)->lc->hfcode,"0");
			strcpy_s(((IntlNode*)root)->rc->hfcode,"1");
		}
		else
		{
			strcpy_s(((IntlNode*)p)->lc->hfcode,p->hfcode);
			strcat_s(((IntlNode*)p)->lc->hfcode,"0");
			strcpy_s(((IntlNode*)p)->rc->hfcode,p->hfcode);
			strcat_s(((IntlNode*)p)->rc->hfcode,"1");
		}
		hufcode(((IntlNode*)p)->lc);
		hufcode(((IntlNode*)p)->rc);
	}
	void writecode(HuffNode*p)
	{
		fstream f;
		f.open("D:\\map.txt",ios::out);
		f.clear();
		f.close();
		hufcode(p);
		print();
	}
	void  inorderprinthelp(HuffNode*root,int level)
	{
		if(root==NULL)return;
		if(!root->isLeaf())inorderprinthelp(((IntlNode*)root)->lc,level+1);
		fstream f;
		f.open("D:\\map.txt",ios::app);
		for(int i=0;i<level;i++)f<<"    ";
		if(root->isLeaf())
		{
			f<<((LeafNode*)root)->ch<<": "<<root->wgt<<"\n";
		}
		else 	f<<root->wgt<<"\n";
		f.close();
		if(!root->isLeaf())inorderprinthelp(((IntlNode*)root)->rc,level+1);
	}
	void print()
	{
		fstream f;
		f.open("D:\\map.txt",ios::app);
		if(root==NULL)f<<"empty"<<endl;
		else inorderprinthelp(root,0);
		f.close();
	}
};
class heap
{
private:
	HuffTree**arrayheap;//pointer to the heap array
	int maxsize;
	int n;
	void siftdown(int pos)
	{
		while(!isLeaf(pos))
		{
			int j=leftchild(pos);
			int rc=rightchild(pos);
			if((rc<n)&&HuffTree::prior(arrayheap[rc],arrayheap[j]))
				j=rc;
			if(HuffTree::prior(arrayheap[pos],arrayheap[j]))return;
			swap(pos,j);
			pos=j;
		}
	}
public:
	heap(HuffTree**h,int num,int max)
	{arrayheap=h;n=num;maxsize=max;buildHeap();}
	int size(){return n;}
	bool isLeaf(int pos){return (pos>=n/2)&&(pos<n);}
	int leftchild(int pos){return 2*pos+1;}
	int rightchild(int pos){return 2*pos+2;}
	int parent(int pos){return (pos-1)/2;}
	void swap(int pos,int j)
	{
		HuffTree*temp=arrayheap[pos];
		arrayheap[pos]=arrayheap[j];
		arrayheap[j]=temp;
	}
	void buildHeap()
	{
		for(int i=n/2-1;i>=0;i--)
			siftdown(i);
	}
	void insert(HuffTree*it)
	{
		int curr=n++;
		arrayheap[curr]=it;
		while((curr!=0)&&(HuffTree::prior(arrayheap[curr],arrayheap[parent(curr)])))
		{
			swap(curr,parent(curr));
			curr=parent(curr);
		}
	}
	HuffTree*removefirst()
	{
		swap(0,--n);
		if(n!=0)siftdown(0);
		return arrayheap[n];
	}
};
HuffTree*buildHuff(HuffTree**TreeArray,int count)
{
	heap*forest=new heap(TreeArray,count,count);
	HuffTree*temp1,*temp2,*temp3=NULL;
	while(forest->size()>1)
	{
		temp1=forest->removefirst();//pull first two trees
		temp2=forest->removefirst();
		temp3=new HuffTree(temp1,temp2);//internal node
		forest->insert(temp3);//把结点连接后，把树放到forest中
		delete temp1;
		delete temp2;
	}
	return temp3;
}
void checkfreq(map map[46])
{
	fstream f;
	f.open("d:\\source.txt",ios::in);
	char c;
	bool mark=0;
	while(!f.eof())
	{
		c=f.get();
		if(c>='a'&&c<'z')c-=32;
		for(int i=0;i<46;i++)
			if(c==map[i].c)
			{
				mark=1;
				map[i].freq++;break;
			}
		if(!mark)map[31].freq++;
	}
	f.close();
}
void mapgene(map map[46])
{
	for(int i=0;i<26;i++)map[i].c=65+i;
	map[26].c='\'';
	 map[27].c='\"';
	 map[28].c=',';
	 map[29].c='.';
	 map[30].c=';';
	 map[31].c=' ';
	 map[32].c='!';
	 map[33].c='?';
	 map[34].c=':';
	 map[35].c='\n';
	 for(int i=36;i<46;i++)
		 map[i].c=i+12;
}
void transtobin(map map[46])
{
	fstream fread,fmap,fwrite;
	fread.open("D:\\source.txt",ios::in);
	fmap.open("D:\\map.txt",ios::in);
	fwrite.open("D:\\huffcode.txt",ios::out);
	for(int i=0;i<46;i++)
	{
		fmap.getline(map[i].code,47);
	}
	fmap.close();
	char c;
	while(!fread.eof())
	{
		c=fread.get();
		if(c>='a'&&c<'z')c-=32;
		for(int i=0;i<46;i++)
			if(c==map[i].c)
			{
				fwrite<<map[i].code;break;
			}
	}
	fread.close();
	fwrite.close();
}
void transtotxt(map map[46])
{
	fstream f1,f2;
	f1.open("d:\\huffcode.txt",ios::in);
	f2.open("d:\\result.txt",ios::out);
	char c;
	char cntsrc[2];
	char cntdst[46];
	cntdst[0]='\0';
	while(!f1.eof())
	{
		c=f1.get();
		cntsrc[0]=c;
		cntsrc[1]='\0';
		strcat_s(cntdst,cntsrc);
		for(int i=0;i<46;i++)
			if(!strcmp(cntdst,map[i].code))
			{
				f2<<map[i].c;
				cntdst[0]='\0';
				break;
			}	
	}
	f1.close();
	f2.close();
}
int main()
{
	cout<<"正在建立映射表......\n";
	map map[46];
	mapgene(map);
	cout<<"\t映射表已建立\n正在读取source.txt......\n";
	checkfreq(map);
	cout<<"\t频率已统计!\n正在建立哈弗曼树......\n";
	HuffTree*htr[46];
	for(int i=0;i<46;i++)
		htr[i]=new HuffTree(map[i].c,map[i].freq);
	HuffTree*htr1=buildHuff(htr,46);
	cout<<"\t哈弗曼树已建立\n正在写入哈弗曼编码与哈弗曼树......\n";
	htr1->writecode(htr1->root);
	cout<<"\t哈弗曼码已写入map.txt\n正在将文本翻译为01码......\n";
	transtobin(map);
	cout<<"\t已将文本转为01码，存放在huffcode.txt\n正在把01码转为文本......\n";
	transtotxt(map);
	cout<<"\t已将01码转为文本，存放在result.txt\n";
}