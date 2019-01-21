#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

typedef int SDataType; 

// �ڵ�ṹ 
typedef struct SListNode 
{ 
	SDataType _data; 
	struct SListNode* _pNext; 
}Node; 


// ��һ�������ṹ 
typedef struct SList 
{ 
	Node* _pHead; 
}SList; 


// �����ĳ�ʼ�� 
void SListInit(SList* pl); 

// ��������β��ֵΪdata�Ľڵ� 
void SListPushBack(SList* pl, SDataType data); 

// ɾ���������һ���ڵ� 
void SListPopBack(SList* pl); 

// ��������һ��Ԫ��ǰ����ֵΪdata�Ľڵ� 
void SListPushFront(SList* pl, SDataType data); 

// ɾ�������е�һ���ڵ� 
void SListPopFront(SList* pl); 

// ������posλ�ú������Ϊdata�Ľڵ� 
void SListInsertAfter(SList* pl,Node* pos, SDataType data);

// ɾ��������ֵΪdata�Ľڵ� 
void SListErase(SList* pl, Node* pos); 

// �������в���ֵΪdata�Ľڵ㣬�ҵ����ظýڵ�ĵ�ַ�����򷵻ؿ� 
Node* SListFind(SList* pl, SDataType data); 

// �������� 
void SListDestroy(SList* pl); 

// ��ȡ��������Ч�ڵ�ĸ��� 
int SListSize(SList* pl); 

// ��������Ƿ�Ϊ�� 
int SListEmpty(SList* pl); 
// ��ȡ�����ĵ�һ���ڵ� 
Node* SListFront(SList* pl); 

// ��ȡ�����ĵڶ����ڵ� 
Node* SListBack(SList* pl); 
Node* SetNode(SDataType data);
void PrintSlist(SList* pl);
void TEST1(SList* pl);
void SListRemove(SList* pl, SDataType data); 
void SListRemoveAll(SList* pl, SDataType data);