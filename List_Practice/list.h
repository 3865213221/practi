#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef int SLtype;
//����Ķ���
typedef struct SQlist
{
	SLtype data;
	struct SQlist* next;
}SQl;
//����������
SQl* Newnode();
//��ʼ������
//SQl* intlist();
//��ӡ����
void printlist(SQl* head);
//�ͷ�����
void freelist(SQl** pphead);
//β�巨
void insertlistback(SQl** pphead, SLtype x);
//ͷ�巨
void insertlistfront(SQl** pphead, SLtype x);
//βɾ
void deletlistback(SQl** pphead);
//ͷɾ
void deletlistfront(SQl** pphead);
//����
SQl* listfind(SQl*phead, SLtype x);
//ָ��λ��֮ǰ��������
void addlist(SQl** pphead, SQl* pos, SLtype x);
//ָ��λ��֮���������
void listadd(SQl* pos, SLtype x);
//ɾ��pos�ڵ�
void listease(SQl** pphead, SQl** pos);
//ɾ��pos֮��ڵ�
void backlistease(SQl* pos);
//����ѭ������
SQl* circlelist();

