#define _CRT_SECURE_NO_WARNINGS 1

#pragma once
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>
typedef int HpDataType;
typedef struct heap
{
	HpDataType * arr;
	int capacity;//��ǰ������Ԫ�ظ���
	int size;//��ǰ��������ЧԪ�ظ���

}heap;

void HeapCreate(heap *hp,HpDataType * arr,int size);//�ѵĴ���
void Adjust(heap *hp,int size);//�ѵĵ���
void Heapdestry(heap *hp);//�ѵ�����
void Heapinsert(HpDataType arr,heap *hp);//�ѵĲ�������
void AddData(HpDataType ret,heap *hp);//
void Addcatacity(heap *hp);
void Heapafterdelete(heap * hp);//�ѵ����һ��Ԫ�ص�ɾ��
void Heapfrontdelete(heap * hp);//�Ѷ�Ԫ�ص�ɾ��
HpDataType HeapTop(heap *hp);//�Ѷ�Ԫ�صĻ�ȡ
int HeapEmpty(heap *hp);//�����Ƿ�Ϊ��
int HeapSize(heap *hp);//��ȡ������ЧԪ�صĸ���
void HeapPrint(heap *hp);//��ӡ����
void TEST();


