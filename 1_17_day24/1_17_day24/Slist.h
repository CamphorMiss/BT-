#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

typedef int SDataType; 

// 节点结构 
typedef struct SListNode 
{ 
	SDataType _data; 
	struct SListNode* _pNext; 
}Node; 


// 给一个链表结构 
typedef struct SList 
{ 
	Node* _pHead; 
}SList; 


// 链表的初始化 
void SListInit(SList* pl); 

// 在链表中尾插值为data的节点 
void SListPushBack(SList* pl, SDataType data); 

// 删除链表最后一个节点 
void SListPopBack(SList* pl); 

// 在链表第一个元素前插入值为data的节点 
void SListPushFront(SList* pl, SDataType data); 

// 删除链表中第一个节点 
void SListPopFront(SList* pl); 

// 在链表pos位置后插入置为data的节点 
void SListInsertAfter(SList* pl,Node* pos, SDataType data);

// 删除链表中值为data的节点 
void SListErase(SList* pl, Node* pos); 

// 在链表中查找值为data的节点，找到返回该节点的地址，否则返回空 
Node* SListFind(SList* pl, SDataType data); 

// 销毁链表 
void SListDestroy(SList* pl); 

// 获取链表中有效节点的个数 
int SListSize(SList* pl); 

// 检测链表是否为空 
int SListEmpty(SList* pl); 
// 获取链表的第一个节点 
Node* SListFront(SList* pl); 

// 获取链表的第二个节点 
Node* SListBack(SList* pl); 
Node* SetNode(SDataType data);
void PrintSlist(SList* pl);
void TEST1(SList* pl);
void SListRemove(SList* pl, SDataType data); 
void SListRemoveAll(SList* pl, SDataType data);
