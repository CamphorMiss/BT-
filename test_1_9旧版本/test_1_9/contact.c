#define _CRT_SECURE_NO_WARNINGS 1
#include"CONTACT.H"

void initial_infrom(para* pc)
{
pc->sz=0;
memset(pc->inf,0,sizeof(pc->inf));
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
	  printf("%-12d\t",pc->inf[i].tel);
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
		scanf("%d",pc->inf[i].tel);
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
		initial_infrom((para*)&(pc->inf[0]));
		printf("������>\n");
	}
	else
	{
	 printf("����ȡ�����β���>\n");
	 return;
	}
}

void ADD_infrom(para*pc)
{
//���ȣ��ж��Ƿ����ˣ������ˣ����޷����
	if(pc->sz==NUM)
		{
		printf("ͨѶ¼�������޷���ӣ�\n");
		return;
	}
	//printf("%-5s\t%s-4\t%s-3\t%s-12\t%s-20\n","����","�Ա�","����","�绰","��ַ");
	//���ͨѶ¼��Ϣ
	else
	{
		printf("����������:> ");
		scanf("%s",pc->inf[pc->sz].name);
		printf("�������Ա�:> ");
		scanf("%s",pc->inf[pc->sz].sex);
		printf("����������:> ");
		scanf("%d",&(pc->inf[pc->sz].age));
		printf("������绰��:> ");
		scanf("%d",pc->inf[pc->sz].tel);
		printf("�������ַ:> ");
		scanf("%s",pc->inf[pc->sz].addr);
		pc->sz++;

	}
	
}
