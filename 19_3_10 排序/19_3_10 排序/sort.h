#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void InsertSort(int *arr,int size);//插入函数,取一个插入到合适位置
void swap(int *x,int* y);
void PrintfSort(int * arr,int size);
void ShellSort(int * arr,int size);//希尔排序，插入排序的优化算法
void SelecSort(int *arr,int size);//选择排序
void SelecSortOP(int *arr,int size);//选择排序优化算法
void BubbleSort(int *arr,int size);//冒泡排序
void BubbleSortOP(int *arr,int size);//冒泡排序优化算法
void QuickSort(int * arr,int left,int right);//快速排序
int FindKeyPos(int * arr,int left,int right);//找到基准值key合适的位置，并返回这个位置
void MargeSort(int *arr,int left,int right);//归并排序，外部排序，划分，合并
void DivideSort(int *arr,int left,int right,int mid,int *temp);//划分，合并，从辅助空间拷贝到arr中去
