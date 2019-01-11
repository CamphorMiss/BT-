#define _CRT_SECURE_NO_WARNINGS 1
#include"CONTACT.H"

void initial_infrom(para* pc)
{ 
	peoin * ptr=NULL;
    pc->sz=0;
//memset(pc->inf,0,sizeof(pc->inf));
//动态内存
 
  ptr=(peoin *)calloc(3,3*sizeof(peoin));
  if(ptr==NULL)
  {
      exit(1);   
  }
  else
  {
  pc->inf = ptr;
  pc->capacity=3;
  }
  copy_infrom(pc);
}
void show_infrom(para*pc)
{
	int i=0;
	printf("%-5s\t%-4s\t%-3s\t%-12s\t%-20s\n","姓名","性别","年龄","电话","地址");
	for(i=0;i<(pc->sz);i++)
	{
      printf("%-5s\t",pc->inf[i].name);
	  printf("%-4s\t",pc->inf[i].sex);
	  printf("%-3d\t",pc->inf[i].age);
	  printf("%-12s\t",pc->inf[i].tel);
	  printf("%-20s\t",pc->inf[i].addr);
	  printf("\n");
}
	printf("\n");
}
void DELETE_infrom(para*pc)//删除信息
{
  //首先要确定有的删
	if(pc->sz==0)
	{
		return;
	}
	else
	{
		char mingzi[20]={0};
		int i=0;
       printf("请输入你要删除的人的名字：>");
	   scanf("%s",mingzi);
	   for(i=0;i<pc->sz;i++)
	   {
	   if(strcmp(pc->inf[i].name,mingzi)==0)
	   {
	       for(;i<pc->sz-1;i++)
			{
			  pc->inf[i]=pc->inf[i+1];
			}
	    pc->sz--;
	   }
	   }
	   if(i==pc->sz)
	   {
	        printf("你所删除的联系人不存在！\n");
	   }
	}
}
void search_infrom(para*pc)
{
	char mingzi[20]={0};
	int i=0;
	printf("请输入你要查找的联系人的姓名：>");
	scanf("%s",mingzi);
	for(i=0;i<pc->sz;i++)
	   {
	   if(strcmp(pc->inf[i].name,mingzi)==0)
	   {
		  printf("找到了！\n");
          show_infrom((para*)&(pc->inf[i]));
		  break;
	   }
	}
	if(i==pc->sz)
	{
	  printf("你所查找的联系人不存在！\n");
	}
}
void sort_infrom(para *pc)
{
	//以首字母升序排列
	int i=0;
	int j=0;
	peoin tmp;
	int n=pc->sz;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(strcmp(pc->inf [i].name,pc->inf[i+1].name)>0)
			{

				tmp=pc->inf[i];
				pc->inf[i]=pc->inf[i+1];
				pc->inf[i+1]=tmp;
			}
		}
	
	}


}
void modify_infrom(para *pc)//修改
{
  //找到他
	char mingzi[20]={0};
	int i=0;
	printf("请输入你要修改的联系人名字：>");
	scanf("%s",mingzi);
    for(i=0;i<pc->sz;i++)
	   {
	   if(strcmp(pc->inf[i].name,mingzi)==0)
	   {
		printf("找到了，请输入修改的信息：>\n");
        printf("请输入姓名:> ");
		scanf("%s",pc->inf[i].name);
		printf("请输入性别:> ");
		scanf("%s",pc->inf[i].sex);
		printf("请输入年龄:> ");
		scanf("%d",&(pc->inf[i].age));
		printf("请输入电话号:> ");
		scanf("%s",pc->inf[i].tel);
		printf("请输入地址:> ");
		scanf("%s",pc->inf[i].addr);
		break;
	   }
	}
	  if(i==pc->sz)
		   printf("此联系人不存在！\n");
}
void empty_infrom(para*pc)//清空所有联系人的信息
{
	int opion=0;
	printf("你确认你要清空当前所有的联系人信息？\n");
	printf("**********1.    YES     ************\n");
	printf("**********0.     NO     ************\n");
    scanf("%d",&opion);
	if(opion==1){
		free(pc);
		pc=NULL;
		pc->sz=0;
		pc->capacity=3;
		printf("清空完成>\n");
	}
	else
	{
	 printf("你已取消本次操作>\n");
	 return;
	}
}
int  check_capacity(para*pc)
{
	if(pc->sz==pc->capacity)
	{
      //需要增容
		peoin* ptr=NULL;
		ptr=realloc(pc->inf,(pc->capacity+2)*sizeof(peoin));
			if(ptr!=NULL)
			{
                 
				 pc->capacity+=2;
				 printf("增容成功！\n");
                 return 1;
			}
			return 0;
	}		
	return 1;	
	
}
void ADD_infrom(para*pc)
{
//首先，判断是否满了，若满了，则无法添加
	/*if(pc->sz==NUM)静态内存
		{
		printf("通讯录已满，无法添加！\n");
		return;
	}*/
//动态内存开辟
	int ret=check_capacity(pc);
	
	if(ret==0){
         printf("增容失败！\n");
		 exit(1);

	}
	//printf("%-5s\t%s-4\t%s-3\t%s-12\t%s-20\n","姓名","性别","年龄","电话","地址");
	//添加通讯录信息
	if(ret==1){
		
        printf("请输入姓名:> ");
		scanf("%s",pc->inf[pc->sz].name);
		printf("请输入性别:> ");
		scanf("%s",pc->inf[pc->sz].sex);
		printf("请输入年龄:> ");
		scanf("%d",&(pc->inf[pc->sz].age));
		printf("请输入电话号:> ");
		scanf("%s",pc->inf[pc->sz].tel);
		printf("请输入地址:> ");
		scanf("%s",pc->inf[pc->sz].addr);
		pc->sz++;

	}
	
}
void save_infrom(para *pc)
{
    FILE*pf=fopen("save_infrom.txt","wb");
	int i=0;
	if(pf==NULL)
	{
		ferror("save_infrom");
		return;
	}
   //用文件的形式保存通讯录信息
   for(i=0;i<pc->sz;i++)
   {
    fwrite(&(pc->inf[i]),sizeof(peoin),1,pf);
   }
   fclose(pf);
   pf=NULL;
   printf("保存信息完成！\n");
}


void copy_infrom(para*pc)
{
	FILE *pf=fopen("sava_infrom.txt","rb");
	int i=0;
	peoin temp={0};
	if(pf==NULL)
	{
		ferror("copy_infrom");
		return;
	}
	//把上一次保存的信息复制过来
	while(fread(&temp,sizeof(peoin),1,pf))
	{
		  check_capacity(pc);
		  pc->inf[pc->sz]=temp;
		  pc->sz++;
	}
	fclose(pf);
	pf=NULL;
}