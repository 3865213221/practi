#include"list.h"


//int main()
//{
//
//	SQl* head = circlelist();
//
//	////insertlistback(&head, 1);
//	//insertlistfront(&head, 1);
//	//insertlistfront(&head, 2);
//	//insertlistfront(&head, 3);
//	//insertlistfront(&head, 4);
//	//insertlistfront(&head, 5);
//	//SQl* find = listfind(head,1);
//	////deletlistback(&head);
//	////deletlistfront(&head);
//	////addlist(&head, head, 6);
//	//listadd(find, 8);
//	//listease(&head, &find);
//	//backlistease(find);
//	printlist(head);
//	freelist(&head);
//	return 0;
//}
//约瑟夫环形链表  n人 m数  返回最后一人的编号
int main()
{
	SQl* prev = circlelist();
	SQl* pcur = prev->next;
	int count = 1;
	while (pcur->next != pcur)
	{
		if (count == 2)
		{
			prev->next = pcur->next;
			free(pcur);
			pcur = prev->next;
			count = 1;
		}
		else
		{
			pcur = pcur->next;
			prev = prev->next;
			count++;
		}
		
	}
	printlist(pcur);
	return 0;
}