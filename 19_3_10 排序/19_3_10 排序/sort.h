#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void InsertSort(int *arr,int size);//���뺯��,ȡһ�����뵽����λ��
void swap(int *x,int* y);
void PrintfSort(int * arr,int size);
void ShellSort(int * arr,int size);//ϣ�����򣬲���������Ż��㷨
void SelecSort(int *arr,int size);//ѡ������
void SelecSortOP(int *arr,int size);//ѡ�������Ż��㷨
void BubbleSort(int *arr,int size);//ð������
void BubbleSortOP(int *arr,int size);//ð�������Ż��㷨
void QuickSort(int * arr,int left,int right);//��������
int FindKeyPos(int * arr,int left,int right);//�ҵ���׼ֵkey���ʵ�λ�ã����������λ��
void MargeSort(int *arr,int left,int right);//�鲢�����ⲿ���򣬻��֣��ϲ�
void DivideSort(int *arr,int left,int right,int mid,int *temp);//���֣��ϲ����Ӹ����ռ俽����arr��ȥ
