#define _CRT_SECURE_NO_WARNINGS 1
#include"CONTACT.H"

void initial_infrom(para* pc)
{ 
	peoin * ptr=NULL;
    pc->sz=0;
//memset(pc->inf,0,sizeof(pc->inf));
//��̬�ڴ�
 
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
	printf("%-5s\t%-4s\t%-3s\t%-12s\t%-20s\n","����","�Ա�","����","�绰","��ַ");
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
void DELETE_infrom(para*pc)//ɾ����Ϣ
{
  //����Ҫȷ���е�ɾ
	if(pc->sz==0)
	{
		return;
	}
	else
	{
		char mingzi[20]={0};
		int i=0;
       printf("��������Ҫɾ�����˵����֣�>");
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
	        printf("����ɾ������ϵ�˲����ڣ�\n");
	   }
	}
}
void search_infrom(para*pc)
{
	char mingzi[20]={0};
	int i=0;
	printf("��������Ҫ���ҵ���ϵ�˵�������>");
	scanf("%s",mingzi);
	for(i=0;i<pc->sz;i++)
	   {
	   if(strcmp(pc->inf[i].name,mingzi)==0)
	   {
		  printf("�ҵ��ˣ�\n");
          show_infrom((para*)&(pc->inf[i]));
		  break;
	   }
	}
	if(i==pc->sz)
	{
	  printf("�������ҵ���ϵ�˲����ڣ�\n");
	}
}
void sort_infrom(para *pc)
{
	//������ĸ��������
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
void modify_infrom(para *pc)//�޸�
{
  //�ҵ���
	char mingzi[20]={0};
	int i=0;
	printf("��������Ҫ�޸ĵ���ϵ�����֣�>");
	scanf("%s",mingzi);
    for(i=0;i<pc->sz;i++)
	   {
	   if(strcmp(pc->inf[i].name,mingzi)==0)
	   {
		printf("�ҵ��ˣ��������޸ĵ���Ϣ��>\n");
        printf("����������:> ");
		scanf("%s",pc->inf[i].name);
		printf("�������Ա�:> ");
		scanf("%s",pc->inf[i].sex);
		printf("����������:> ");
		scanf("%d",&(pc->inf[i].age));
		printf("������绰��:> ");
		scanf("%s",pc->inf[i].tel);
		printf("�������ַ:> ");
		scanf("%s",pc->inf[i].addr);
		break;
	   }
	}
	  if(i==pc->sz)
		   printf("����ϵ�˲����ڣ�\n");
}
void empty_infrom(para*pc)//���������ϵ�˵���Ϣ
{
	int opion=0;
	printf("��ȷ����Ҫ��յ�ǰ���е���ϵ����Ϣ��\n");
	printf("**********1.    YES     ************\n");
	printf("**********0.     NO     ************\n");
    scanf("%d",&opion);
	if(opion==1){
		free(pc);
		pc=NULL;
		pc->sz=0;
		pc->capacity=3;
		printf("������>\n");
	}
	else
	{
	 printf("����ȡ�����β���>\n");
	 return;
	}
}
int  check_capacity(para*pc)
{
	if(pc->sz==pc->capacity)
	{
      //��Ҫ����
		peoin* ptr=NULL;
		ptr=realloc(pc->inf,(pc->capacity+2)*sizeof(peoin));
			if(ptr!=NULL)
			{
                 
				 pc->capacity+=2;
				 printf("���ݳɹ���\n");
                 return 1;
			}
			return 0;
	}		
	return 1;	
	
}
void ADD_infrom(para*pc)
{
//���ȣ��ж��Ƿ����ˣ������ˣ����޷����
	/*if(pc->sz==NUM)��̬�ڴ�
		{
		printf("ͨѶ¼�������޷���ӣ�\n");
		return;
	}*/
//��̬�ڴ濪��
	int ret=check_capacity(pc);
	
	if(ret==0){
         printf("����ʧ�ܣ�\n");
		 exit(1);

	}
	//printf("%-5s\t%s-4\t%s-3\t%s-12\t%s-20\n","����","�Ա�","����","�绰","��ַ");
	//���ͨѶ¼��Ϣ
	if(ret==1){
		
        printf("����������:> ");
		scanf("%s",pc->inf[pc->sz].name);
		printf("�������Ա�:> ");
		scanf("%s",pc->inf[pc->sz].sex);
		printf("����������:> ");
		scanf("%d",&(pc->inf[pc->sz].age));
		printf("������绰��:> ");
		scanf("%s",pc->inf[pc->sz].tel);
		printf("�������ַ:> ");
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
   //���ļ�����ʽ����ͨѶ¼��Ϣ
   for(i=0;i<pc->sz;i++)
   {
    fwrite(&(pc->inf[i]),sizeof(peoin),1,pf);
   }
   fclose(pf);
   pf=NULL;
   printf("������Ϣ��ɣ�\n");
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
	//����һ�α������Ϣ���ƹ���
	while(fread(&temp,sizeof(peoin),1,pf))
	{
		  check_capacity(pc);
		  pc->inf[pc->sz]=temp;
		  pc->sz++;
	}
	fclose(pf);
	pf=NULL;
}