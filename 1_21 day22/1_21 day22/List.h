#define _CRT_SECURE_NO_WARNINGS 1

#pragma once 
#include<stdio.h>
#include<assert.h>
#include <malloc.h>
#include <string.h>
#include<stdlib.h>
typedef int LTDataType;
typedef struct ListNode
{
	LTDataType _data;
	struct ListNode* _next;
	struct ListNode* _prev;
}ListNode;
typedef struct List
{
	ListNode* _head;
}List;
void ListInit(List* plist);
void ListDestory(List* plist);
ListNode* SetListNode(LTDataType x);
void ListPushBack(List* plist, LTDataType x);
void ListPopBack(List* plist);
void ListPushFront(List* plist, LTDataType x);
void ListPopFront(List* plist);
ListNode* ListFind(List* plist, LTDataType x);// ��pos��ǰ����в���

void ListInsert(ListNode* pos, LTDataType x);// ɾ��posλ�õĽڵ�

void ListErase(ListNode* pos);
void ListRemove(List* plist, LTDataType x);
void PrintList(List* plist);
void TEST();
