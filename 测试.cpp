#include<iostream>
using namespace std;
#define null 0
typedef struct et//自定义双循环链表的存储结构
{
	int data;
	struct et*pr,*next;
 } dtp;
 void setin(dtp *a)//读入数据存储在双链表中的函数；
 {
 	char k;
 	int w,len=0;
 	dtp *p;
 	a->next=null;
 	a->data=null;
 	a->pr=null;
 	cout<<"input the number:";
 	while(cin>>k)//一次读入数字或一个字符",";
	 {
	 	if(k=='\n')
	 	continue;
	 	if(k=='#')
	 	break;//
		 if(k==44)
		 continue;
		 p=new dtp;
		 w=k-'0';
		 p->data=w;
		 len++;
		 if(a->next)
		 a->next->pr=p;
		 p->next=a->next;
		 a->next=p;
		 p->pr=a;
		 k=0; 
	  } 
  } 
  void add(dtp a,dtp b,dtp *c,int *len)
  {
  	dtp *s,*r,*t;
  	int i,j,sum,k=0,w=0;
  	c->next=null;
  	c->data=null;
  	c->pr=null;
  	s=a.next;
  	r=b.next;
  	while(s&&r)
  	{
  		i=s->data;
  		j=r->data;
  		sum=i+j+k;
  		k=sum/10;
  		t= new dtp;
  		t->data=sum;
  		w=w+1;
  		if(c->next)
  		c->next->pr=t;
  		t->next=c->next;
  		c->next=t;
  		t->pr=c;
  		s=s->next;
  		r=r->next;
	  }
	  if(s||r)
	  {
	  	if(s)
	  	while(s)
	  	{
	  		t=new dtp;
	  		sum=s->data+k;
	  		k=sum/10;
	  		sum=sum%10;
	  		t->data=sum;
	  		w=w+1;
	  		if(c->next)
	  		c->next->pr=t;
	  		t->next=c->next;
	  		c->next=t;
	  		t->pr=c;
	  		s=s->next;
			  }
		if(r)
	  	while(r)
	  	{
	  		t=new dtp;
	  		sum=r->data+k;
	  		k=sum/10;
	  		sum=sum%10;
	  		t->data=sum;
	  		w=w+1;
	  		if(c->next)
	  		c->next->pr=t;
	  		t->next=c->next;
	  		c->next=t;
	  		t->pr=c;
	  		r=r->next;
		  }
	  }
	  if(k!=0)
	  {
	  	t=new dtp;
	  	t->data=k;
	  	w=w+1;
	  	if(c->next)
	  	c->next->pr=t;
	  	t->next=c->next;
	  	c->next=t;
	  	t->pr=c;
	  }
	  *len=w;
  }
  void printf1(dtp *w,int len)
  {
  	dtp *q;
  	int i=len;
  	q=w->next;
  	while(q->next)
  	{
  		q=q->next;
	   } 
	   while(q->pr)
	   {
	   	cout<<q->data;
	   	q=q->pr;
	   	i--;
	   	if(i%4==0&&i)
	   	cout<<",";
	   }
	   cout<<endl;
  }
  void printf2(dtp a,int len)
  {
  	int i=len;
  	dtp *q;
  	q=a.next;
  	while(q)
  	{
  		cout<<q->data;
  		q=q->next;
  		i--;
  		if(i%4==0&&i)
  		cout<<",";
	  }
	  cout<<endl;
  }

int main()
{
	 int length;
  	char ma;
  	dtp la,lb,lc;
  	while(1){
  		cout<<"输入方式，按从后面每四位之间一个字符','的形式,以'#'表示输入结束:"<<endl;
		cout<<"请输入第一个数a: "<<endl;
		setin(&la);
		cout<<"请输入第二个数b: "<<endl;
		setin(&lb);
		add(la,lb,&lc,&length);
		cout<<"你输入的两个数的和为:"<<endl;
		cout<<" ";
		printf1(&la,length);
		cout<<"+";
		printf1(&lb,length);
		cout<<"------------";
		cout<<endl<<" ";
		printf2(lc,length);
	  }
  return 0;
  }
