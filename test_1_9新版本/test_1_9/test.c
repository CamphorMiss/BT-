#define _CRT_SECURE_NO_WARNINGS 1
#include"CONTACT.H"
 
//ͨѶ¼���������洢1000���˵���Ϣ��ÿ���˵���Ϣ������ 
//�������Ա����䡢�绰��סַ 
//
//�ṩ������ 
//1.	�����ϵ����Ϣ 
//2.	ɾ��ָ����ϵ����Ϣ 
//3.	����ָ����ϵ����Ϣ 
//4.	�޸�ָ����ϵ����Ϣ 
//5.	��ʾ������ϵ����Ϣ 
//6.	���������ϵ�� 
//7.	����������������ϵ��

void menu()
{

	printf("**************************************\n");
	printf("*******1. add         2.delete *******\n");
	printf("*******3.search       4.modify *******\n");
	printf("*******5.show         6.empty  *******\n");
	printf("*******7.sort         0.eixt   *******\n");
	printf("**************************************\n");

}
enum{
	 EIXT,
     ADD,
	 DELETE,
	 SEARCH,
	 MODIFY,
	 SHOW,
	 EMPTY,
	 SORT
};
void test()
{
	int input=0;
	para xinxi;
	initial_infrom(&xinxi);
    do 
    {
       menu();
	   printf("��ѡ��>\n");
	   scanf("%d",&input);
	   switch (input)
	   {
	   case ADD:
		   ADD_infrom(&xinxi);
		   break;
	   case DELETE:
		   DELETE_infrom(&xinxi);
		   break;
	   case SEARCH:
		   search_infrom(&xinxi);
		   break;
	   case MODIFY:
		   modify_infrom(&xinxi);
		   break;
	   case SHOW:
		   show_infrom(&xinxi);
		   break;
	   case EMPTY:
		   empty_infrom(&xinxi);
		   break;
	   case SORT:
		   sort_infrom(&xinxi);
		   break;
	   case EIXT:
		   save_infrom(&xinxi);
		   printf("�˳��ɹ���\n");
		   break;
	   default:
		   printf("ѡ�����\n");
		   break;
	   }
   } while (input);
	
}
int main()
{
	system("color F0");
	test();
	
	system("pause");
	return 0;
}