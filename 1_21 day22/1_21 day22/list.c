#define _CRT_SECURE_NO_WARNINGS 1


#include "List.h"

void ListInit(List* plist)
{
	assert(plist);
	plist->_head=(ListNode*)malloc(sizeof(ListNode));
	plist->_head->_data=0;
	plist->_head->_next=plist->_head;
	plist->_head->_prev=plist->_head;
}
ListNode* SetListNode(LTDataType x)
{
   ListNode* ret=NULL;
   ret=(ListNode*)malloc(sizeof(ListNode));
   ret->_data=x;
   ret->_next=NULL;
   ret->_prev=NULL;
   return ret;
}

void ListDestory(List* plist)
{  
	ListNode * ret=NULL;
	ListNode * cur=NULL;

	assert(plist);
	ret=plist->_head->_next;
	while(ret!=plist->_head)
	{
		cur=ret->_next;
		free(ret);
		ret=cur;
	}
	free(plist);
	plist=NULL;
	printf("销毁成功！\n");
}
void ListPushBack(List* plist, LTDataType x)//尾插
{
	ListNode* NewNode=NULL;
    assert(plist);
	NewNode=SetListNode(x);
	NewNode->_prev=plist->_head->_prev;
	NewNode->_next=plist->_head;
	plist->_head->_prev->_next=NewNode;
	plist->_head->_prev=NewNode;


}
void ListPopBack(List* plist)//尾删
{
   
   ListNode *ret=NULL;
   ListNode*dele=NULL;
   assert(plist);
   ret=plist->_head->_prev->_prev;
   dele=ret->_next;
   ret->_next=plist->_head;
   plist->_head->_prev=ret;
   free(dele);
   dele=NULL;
}
void ListPushFront(List* plist, LTDataType x)//头插
{
	ListNode*ret=NULL;
	assert(plist);
    ret=SetListNode(x);
	ret->_prev=plist->_head;
	ret->_next=plist->_head->_next;
    plist->_head->_next->_prev=ret;
	plist->_head->_next=ret;
}
void ListPopFront(List* plist)//头删
{
   ListNode* ret=NULL;
  assert(plist);
  if(plist->_head->_next==NULL)
  {
	  return;
  }
  else
  {
	  ret=plist->_head->_next;
	  plist->_head->_next=ret->_next;
	  ret->_next->_prev=plist->_head;
	  free(ret);
	  ret=NULL;
  }
}
ListNode* ListFind(List* plist, LTDataType x)
{
	ListNode*pcur=NULL;//查找值为X的节点
	assert(plist);
	pcur=plist->_head->_next;
	while (pcur!=plist->_head)
	{
		if(pcur->_data==x)
		{
			//printf("找到了！\n");
			return pcur;
		}
		else
		{
			pcur=pcur->_next;
		}

	}
	printf("找不到！\n");
	return NULL;
  
}
// 在pos的前面进行插入
void ListInsert(ListNode* pos, LTDataType x)
{
	ListNode*ret=NULL;
	ListNode*Newnode=NULL;
	assert(pos);

	Newnode=SetListNode(x);
	ret=pos->_prev;
	Newnode->_prev=ret;
	Newnode->_next=pos;
	ret->_next=Newnode;
	pos->_prev=Newnode;
}
// 删除pos位置的节点
void ListErase(ListNode* pos)
{
	ListNode* ret=NULL;
	ListNode* pcur=NULL;
    assert(pos);
    ret=pos->_prev;
	ret->_next=pos->_next;
	pos->_next->_prev=ret;
	free(pos);
	pos=NULL;

}
void ListRemove(List* plist, LTDataType x)//移除所有值为x的节点
{
	ListNode* ret=NULL;
	ListNode* retpre=NULL;

	assert(plist);
	ret=plist->_head->_next;
	retpre=ret;
	while (ret!=plist->_head)
	{
		if(ret->_data==x)
		{
			if(ret==plist->_head->_next)
			{
                   ListPopFront(plist);
			}
			else
				ListErase(ret);
			ret=retpre;
		}
		else
		{   retpre=ret;
			ret=ret->_next;
		}
	}

}
void PrintList(List* plist)
{
	ListNode*ret=NULL;
	assert(plist);
	ret=plist->_head->_next;
   while (ret!=plist->_head)
   {
	   printf("%d ",ret->_data);
	   ret=ret->_next;
   }
  printf("\n");	
}

void TEST()
{
	List head;
    ListInit(&head);
	ListPushBack(&head,1);//尾插
	ListPushBack(&head,3);//尾插

	ListPushBack(&head,2);//尾插
    ListPushBack(&head,3);//尾插
	ListPushBack(&head,4);//尾插
	ListPushBack(&head,5);//尾插
	ListPushBack(&head,3);//尾插

	PrintList(&head);
	ListPopBack(&head);
	PrintList(&head);
	ListPushFront(&head,8);
	ListPushFront(&head,9);
	PrintList(&head);
	ListPopFront(&head);
	PrintList(&head);
	
    printf("%d\n",ListFind(&head,2));
	ListInsert(ListFind(&head,2),7);
	PrintList(&head);
	ListErase(ListFind(&head,7));
	PrintList(&head);
	ListRemove(&head,3);
	PrintList(&head);


}


