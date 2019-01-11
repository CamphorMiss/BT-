#ifndef __CONTACT_H__
#define __CONTACT_H__
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define NAME_MAX 20
#define ADD_NUM  30
#define NUM 1000
typedef struct peoinfro
{
	char name[NAME_MAX];
	char sex[4];
	int age;
	char tel[12];
	char addr[ADD_NUM];
}peoin;
//¾²Ì¬ÄÚ´æ
//typedef struct para
//{
//	peoin inf[NUM];
//	int sz;
//}para;
//¶¯Ì¬ÄÚ´æ
typedef struct para
{
      peoin *inf;
      int sz;
	  int capacity;
}para;
void initial_infrom(para* pc);
void ADD_infrom(para*pc);
void show_infrom(para*pc);
void DELETE_infrom(para*pc);
void search_infrom(para*pc);
void modify_infrom(para *pc);
void empty_infrom(para*pc);
void sort_infrom(para*pc);
int check_capacity(para*pc);
void save_infrom(para *pc);
void copy_infrom(para*pc);
#endif//__CONTACT_H__




