#define _CRT_SECURE_NO_WARNINGS 1
#include"CONTACT.H"
 
//通讯录可以用来存储1000个人的信息，每个人的信息包括： 
//姓名、性别、年龄、电话、住址 
//
//提供方法： 
//1.	添加联系人信息 
//2.	删除指定联系人信息 
//3.	查找指定联系人信息 
//4.	修改指定联系人信息 
//5.	显示所有联系人信息 
//6.	清空所有联系人 
//7.	以名字排序所有联系人

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
	   printf("请选择：>\n");
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
		   printf("退出成功！\n");
		   break;
	   default:
		   printf("选择错误！\n");
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