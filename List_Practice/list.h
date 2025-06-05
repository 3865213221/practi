#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef int SLtype;
//链表的定义
typedef struct SQlist
{
	SLtype data;
	struct SQlist* next;
}SQl;
//创建新链表
SQl* Newnode();
//初始化链表
//SQl* intlist();
//打印链表
void printlist(SQl* head);
//释放链表
void freelist(SQl** pphead);
//尾插法
void insertlistback(SQl** pphead, SLtype x);
//头插法
void insertlistfront(SQl** pphead, SLtype x);
//尾删
void deletlistback(SQl** pphead);
//头删
void deletlistfront(SQl** pphead);
//查找
SQl* listfind(SQl*phead, SLtype x);
//指定位置之前插入数据
void addlist(SQl** pphead, SQl* pos, SLtype x);
//指定位置之后插入数据
void listadd(SQl* pos, SLtype x);
//删除pos节点
void listease(SQl** pphead, SQl** pos);
//删除pos之后节点
void backlistease(SQl* pos);
//构造循环链表
SQl* circlelist();

