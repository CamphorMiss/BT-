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
	int tel[12];
	char addr[ADD_NUM];
}peoin;

typedef struct para
{
	peoin inf[NUM];
	int sz;
}para;
void initial_infrom(para* pc);
void ADD_infrom(para*pc);
void show_infrom(para*pc);
void DELETE_infrom(para*pc);
void search_infrom(para*pc);
void modify_infrom(para *pc);
void empty_infrom(para*pc);
#endif//__CONTACT_H__




