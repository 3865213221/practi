#include"list.h"


//SQl* intlist()
//{
//	SQl* node1 = (SQl*)malloc(sizeof(SQl));
//	node1->data = 1;
//	SQl* node2 = (SQl*)malloc(sizeof(SQl));
//	node2->data = 2;
//	SQl* node3 = (SQl*)malloc(sizeof(SQl));
//	node3->data = 3;
//	SQl* node4 = (SQl*)malloc(sizeof(SQl));
//	node4->data = 4;
//	node1->next = node2;
//	node2->next = node3;
//	node3->next = node4;
//	node4->next = NULL;
//	return node1;
//}

SQl* Newnode()
{
	SQl* newnode = (SQl*)malloc(sizeof(SQl));
	newnode->data = 0;
	newnode->next = NULL;
	return newnode;
}
void printlist(SQl* head)
{
	if (head == NULL)
	{
		printf("nothing");
	}
	else
	{
		while (head)
		{
			printf("%d->", head->data);
			head = head->next;
		}
		printf("NULL\n");
	}

}

void freelist(SQl** pphead)
{
	while (*pphead)
	{
		SQl* temp = *pphead;
	
		*pphead = (*pphead)->next;
		free(temp);

	}
	printf("链表销毁完成");
}
void insertlistback (SQl** pphead, SLtype x)
{
	assert(pphead);
	SQl* newnode = Newnode();
	newnode->data = x;

	if ((*pphead) == NULL)
	{
		*pphead = newnode;
	}
	else
	{
		SQl* current = *pphead;
		while (current->next)
		{
			current = current->next;
		}

		current->next = newnode;

	}
}
//void insertlistback(SQl** pphead, SLtype x)
//{
//	assert(pphead);
//	SQl* newnode = (SQl*)malloc(sizeof(SQl));
//	newnode->data = x;
//	newnode->next = NULL;
//
//	if (*pphead == NULL) {
//		*pphead = newnode;  // 空链表直接插入
//	}
//	else {
//		SQl* current = *pphead;  // 使用临时指针遍历链表
//		while (current->next != NULL) {
//			current = current->next;  // 移动临时指针而非修改头指针
//		}
//		current->next = newnode;  // 在尾部插入新节点
//	}
//}

void insertlistfront(SQl** pphead, SLtype x)
{
	assert(pphead);
	SQl* newnode = Newnode();
	newnode->data = x;
	newnode->next = *pphead;
	*pphead = newnode;
}

void deletlistback(SQl** pphead)
{
	assert(pphead && *pphead);
	if ((*pphead)->next == NULL)
	{
		free(*pphead);
		*pphead = NULL;
	}
	else
	{
		SQl* pre = *pphead;
		SQl* del = *pphead;
		while (pre->next)
		{
			del = pre;
			pre = pre->next;
		}
		free(pre);
		pre = NULL;
		del->next = NULL;

	}
}
void deletlistfront(SQl** pphead)
{
	assert(pphead && *pphead);
	SQl* temp = *pphead;
	*pphead = temp->next;
	free(temp);
}

void addlist(SQl** pphead, SQl* pos, SLtype x)
{
	assert(*pphead && pphead);
	assert(pos);
	if (*pphead == pos)
	{
		insertlistfront(pphead, x);
	}
	else
	{
		SQl* newnode = Newnode();
		SQl* temp = *pphead;
		while (temp->next != pos)
		{
			temp = temp->next;
		}

		newnode->data = x;
		newnode->next = pos;
		temp->next = newnode;
	}

}
SQl* listfind(SQl* phead, SLtype x)
{
	assert(phead);
	while (phead->data != x )
	{

		phead = phead->next;
		if (phead->data != x && phead->next == NULL)
		{
			printf("未找到\n");
			break;
		}
	}
	return phead;
}

void listadd(SQl* pos, SLtype x)
{
	assert(pos);
	SQl* newnode = Newnode();
	newnode->data = x;
	newnode->next = pos->next;
	pos->next = newnode;

}

void listease(SQl**pphead, SQl** pos)
{
	assert(pos && *pphead);
	if (*pphead == *pos)
	{
		*pphead = (*pos)->next;
		free(*pos);
		
	}
	else
	{
		SQl* temp = *pphead;
		while (temp->next != *pos)
		{
			temp = temp->next;
		}
		temp->next = temp->next->next;
		free(*pos);
		*pos = NULL;
	}
}

void backlistease(SQl* pos)
{
	assert(pos);
	if (pos->next == NULL)
	{
		printf("下一个节点不存在\n");
		return;
	}
	else
	{
		SQl* temp = pos->next;
		pos->next = pos->next->next;
		free(temp);
	}
}

//构造循环链表
SQl* circlelist()
{
	SQl* head = Newnode();
	head->data = 1;
	SQl* tail = head;
	for (int n = 2; n <= 7; n++)
	{
		tail->next = Newnode();
		tail->next->data = n;
		tail = tail->next;
	}
	tail->next = head;
	return tail;

}


