#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<iostream>
//int main()
//{
//
//	printf("\"");
//	return 0;
////}
//int main()
//{
//	int x, y, z;
//	printf("66");
//	scanf_s("%f%d", &x, &y);
//	z = x + y;
//	printf("he%d\n", z);
//
//	return 0;
//}
//int main()
//{
//	int line = 0;
//	printf("加入比特\n");
//
//	while (line < 200)
//	{
//		printf("写代码%d\n", line);
//		line++;
//	}
//	if (line >= 200)
//	{
//		printf("好\n");
//
//	}
//	return 0;
//}
//int main()
//{
//	int M, N;
//	int chiken, rabbit;
//	printf("请输入头与脚的个数");
//		scanf_s("%d%d", &M, &N);
//		chiken = 0;
//		while (chiken <= M)
//		{
//			rabbit = M - chiken;
//			if (2 * chiken + 4 * rabbit == N) break;
//			chiken++;
//		}
//		if (chiken <= M)
//			printf("鸡有%d兔有%d\n", chiken, rabbit);
//		else
//			printf("输入数据 不合理无解\n");
//
//	return 0;
//}
//int main()
//{
//	int x = 0, z = 0;
//	int M, N;
//	printf("请输入长与宽");
//	scanf_s("%d%d", &M, &N);
//	z = 2 * (M + N);
//	x = M * N;
//	printf("c=%d,s=%d\n", z, x);
//	
//	return 0;
//}
//int main()
//{
//	printf("%%");
//	return 0;
//}
//int main()
//{
//	int c;
//	while ((c = getchar()) != EOF);
//	putchar(c);
//	return 0;
//}
//int main()
//{
//	printf("hehe\a");
//	return 0;
//}
//int main()
//{
//	int c;
//	c = getchar();
//	while (c != EOF)
//	{
//		putchar(c);
//		c = getchar();
//	}
//	return 0;
//}
//int main()
//{
//	char a;
//	scanf_s("%c", &a);
//	a = getchar();
//	scanf_s("%c", &a);
//	return 0;
//}
//int main()
//{
//	int a;
//	scanf_s("%d", &a);
//	char grade;
//	grade = (a >= 90) ? 'A' : ((70 <= a < 89) ? 'B' : ((60 <= a < 70) ? 'C' : 'D'));
//	printf("%c", grade);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	double p = 0 , s = 0;
//	scanf_s("%lf", &p);
//
//	if (p < 15)
//		a = 1;
//	else if (p >= 15 && p < 25)
//		a = 2;
//	else if (p >= 25 && p < 40)
//		a = 3;
//	switch (a)
//	{
//	case 1: s = p;break;
//	case 2: s = 15 + (p - 15) * 0.9;break;
//	case 3: s = 24 + (p - 25) * 0.8;break;
//	default:
//		break;
//
//	}
//
//
//	printf("%lf", s);
//
//
//	return 0;
//}
//int main()
//{
//
//
//
//
//
//
//	return 0;
//}
//int main()
//{
//	int x, a, b, c, d,e;
//	scanf_s("%d", &x);
//	a = x / 100;
//	printf("%d\n", a);
//	b = x / 10 - a*10;
	//printf("%d\n", b);
//	c = x - a * 100 - b * 10;
//	printf("%d\n", c);
//	d = a + b + c;
//	e = d / 3;
//	printf("%d,%d", d, e);
//
//	
//	return 0;
//}
//int main()
//{
//	int x, y, z;
//	printf("two integer\n");
//	scanf_s("%d  %d", &x, &y);
//	if (x > y)
//		z = x - y;
//	else
//		z = y - x;
//	printf("%d", z);
//	return 0;
//
//}
//
//int main()
//{
//	int i,  max;
//	double z;
//	int arr[] = { 1,2,3,6,7,8,9,5,2 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	max = arr[0];
//	z = 0;
//	for (i = 0;i < sz; i++)
//	{
//		if (max < arr[i])
//			max = arr[i];
//
//		z = z + arr[i];
//
//	};
//	z = z / sz;
//	printf("max=%d\n", max);
//	printf("平均值=%f", z);
//
//
//
//	return 0;
//}
//int main()
//{
//	int x = 0;
//	int y = 0;
//	for (x = 1;x <= 9;x++)
//	{
//		for (y = 1;y <= 9;y++)
//		{
//			printf("%d * %d = %d  ", x,y, x * y);
//
//		}
//		printf("\n");
//	}
//	printf("3\n4");
//	return 0;
//}
//char arr[] = "what's up";
//int fun(int x)
//{
//	
//	if (x >= 0)
//	{
//		printf("%c", arr[x]);
//		fun(x - 1);
//		
//	}
//	else return 0;
//}
//int main()
//{
//	
//	int i = 0;
//	int sz = 0;
//	sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%d\n", sz);
//	for (i = sz-1; i >-1; i--)
//	{
//		printf("%c", arr[i]);
//
//	}
//	printf("\n");
//	fun(sz-2);
//
//		return 0;
//}
////int main()
////{
////	
////	int a = 10;
////	const int* p = &a;
////	a = 100;
////	
////
////
////	printf("%d", a);
////	printf("%d", *p);
////	return 0;
////	
////}
//int main()
//{
//	int a = 0;
//	scanf_s("%d", &a);
//	printf("%d", a);
//	return 0;
//}
//冒泡函数
//
//void change(int arr[], int x)
//{
//	int i = 0;
//	for (i = 0;i < x - 1;i++)
//	{
//		int flag = 1;
//		int j = 0;
//		for (j = 0;j < x - 1 ;j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = temp;
//				flag = 0;
//			}
//
//		}
//		if (flag == 1)
//			break;
//	}
//}
//
//
//int main()
//{
//	int i = 0;
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	change(arr, sz);
//	printf("%d\n", arr[0]);
//	for (i = 0;i < sz;i++)
//	{
//		printf("%d", arr[i]);
//	}
//
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//		printf("%d", i);
//
//	return 0;
//}
//两数组比较
//int main()
//{
//	int i, j, n;
//	int arr1[] = { 0 }, arr2[] = { 0 };
//	scanf_s("%d", &n);
//	for (i = 0;i < n;i++)
//	{
//		scanf_s("%d", &arr1[i]);
//	}
//	scanf_s("%d", &n);
//	
//	scanf_s("%d", &n);
//	for (j = 0;j < n;j++)
//	{
//		scanf_s("%d", &arr2[j]);
//	}
//	return 0;
//}
//
//#define M 1000010
//#include<iostream>
//int a[M], b[M];
//int main()
//{
//	printf("%d\n", M);
//	int i, n, j;
//
//	std::cin >> n;
//	for (i = 0;i < n;i++)
//		scanf_s("%d",&a[i]);
//	for (i = 0;i < n;i++)
//		std::cout<< a[i];
//	return 0;
//}
//指针数组
//int main()
//{
//	int arr1[5] = { 1,2,3,4,5 };
//	int arr2[5] = { 1,2,3,4,5 };
//	int arr3[5] = { 1,2,3,4,5 };
//	int* p [3] = {arr1,arr2,arr3};
//	int i = 0, j = 0;
//	for (i = 0;i < 3;i++)
//	{
//		for (j = 0;j < 5;j++)
//		{
//			printf("%d", p[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	char ch = 'w';
//	char* pch = &ch;
//	printf("%c\n", *pch);
//	printf("%p\n", pch);
//
//	char arr[] = "abcdef";
//	char* p = arr;
//	printf("%s\n", p);
//	printf("%p\n", p);
//	printf("%p", &arr);
//
//	return 0;
//}
//int main()
//{
//	int a[] = { 9,8,7,6,5,4,3,2,1,0};
//	int i = 0;
//	int(*p)[10] = &a;
//	for (i = 0;i < 10;i++)
//	{
//		printf("%d\n", (*p)[i]);
//
//	}
//
//	return 0;
//}
//int add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int a = 2;
//	int b = 3;
//	int k = add(a, b);
//	printf("%d\n", k);
//	int(*p)(int, int) = add;
//	int(*c)(int, int) = &add;
//	printf("%p\n", *p);
//	printf("%p\n", *c);
//	int o = (*p)(a, b);
//	printf("%d\n", o);
//
//	return 0;
//}
// 通用排序函数，回调函数//////////////////////////////////////////
//#include<string.h>
//void swap(char* a1, char* a2, int width)
//{
//	int i = 0;
//	for (i = 0;i < width;i++)
//	{
//		char temp = *a1;
//		*a1 = *a2;
//		*a2 = temp;
//		a1++;
//		a2++;
//	}
//
//}
//void change(void*base, int x,int width,int(*compare)(const void*e1,const void*e2))
//{
//	int i = 0;
//	for (i = 0;i < x - 1;i++)
//	{
//		int flag = 1;
//		int j = 0;
//		for (j = 0;j < x - 1;j++)
//		{
//			if (compare((char*)base+j*width,(char*)base+(j+1)*width)>0)
//			{
//				swap((char*)base + j * width, (char*)base + (j + 1) * width,width);
//				flag = 0;
//			}
//
//		}
//		if (flag == 1)
//			break;
//	}
//}
//
//int compare(const void* e1, const void* e2)
//{
//	return strcmp((char*)e1, (char*)e2);
//}
//
//
//int main()
//{
//	int i = 0;
//	char arr[10] = { 'f','e','d','c','b','a'};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	change(arr, sz,sizeof(arr[0]),compare);
//	printf("%d\n", arr[0]);
//	for (i = 0;i < sz;i++)
//	{
//		printf("%c ", arr[i]);
//	}
//
//	return 0;
//}////////////////////////////////////////////////////////////
//qsort函数的实现，使用了回调函数
//#include<stdlib.h>
//int cmp(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//int main()
//{
//	int arr[10] = { 1,2,4,2,7,8,5,6,7,3 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	qsort(arr, sz, sizeof(arr[0]), cmp);
//	for (i = 0;i < sz;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//直接插入排序
//void InserSort(int* arr, int n)
//{
//	for (int i = 0; i < n - 1; i++)
//	{
//		int end = i;
//		int tmp = arr[end + 1];
//		while (end >= 0)
//		{
//			if (arr[end] > tmp)
//			{
//				arr[end + 1] = arr[end];
//				end--;
//			}
//			else
//			{
//				break;
//			}
//		}
//		arr[end + 1] = tmp;
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,4,2,7,8,5,6,7,3 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	InserSort(arr, sz);
//	for (i = 0;i < sz;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
// 选择排序/////////////////////////////////////////////////////
//void swap(int *x, int *y)
//{
//	int temp = *x;
//	*x = *y;
//	*y = temp;
//}
//void choose(int* arr, int sz)
//{
//	int begin = 0, end = sz - 1;
//	while (begin < end)
//	{
//		int mini = begin, maxi = begin;
//		int i = begin;
//		for (i = begin;i <= end;i++)
//		{
//			if (arr[i] < arr[mini])
//			{
//				mini = i;
//			}
//			if (arr[i] > arr[maxi])
//			{
//				maxi = i;
//			}
//		}
//		if (maxi == begin)
//		{
//			maxi = mini;
//		}
//		swap(&arr[begin], &arr[mini]);
//		swap(&arr[maxi], &arr[end]);
//		begin++;
//		end--;
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,4,2,7,8,5,6,7,3 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	choose(arr, sz);
//
//	for (i = 0;i < sz;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}/////////////////////////////////////////////////////
//插入排序
//void insert(int* arr, int sz)
//{
//	int i = 0;
//	for (i = 0;i < sz - 1;i++)
//	{
//		int end = i, temp;
//		temp = arr[end + 1];
//		while ( end >= 0)
//		{
//			if (arr[end] > temp)
//			{
//				arr[end + 1] = arr[end];
//				end--;
//
//			}
//			else
//				break;
//		}
//		arr[end+1] = temp;
//	}
//}
//
//int main()
//{
//	int arr[10] = { 1,2,4,2,7,8,5,6,7,3 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	insert(arr, sz);
//
//	for (i = 0;i < sz;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//#include<string.h>
//int main()
//{
//	char a[30] = { "abcdef" };
//	char b[] = "bcd";
//	strcat_s(a, b);
//	printf("%s\n", a);
//	return 0;
//}
//#include<stdlib.h>
//#include<time.h>
//int divce()
//{
//	srand((unsigned int)time(NULL));
//	int a = rand()%6+1;
//
//	return a;
//}
//int main()
//{
//	int a = 0;
//	printf("按q退出");
//	while (scanf_s("%d", &a) != 0)
//	{
//		int b = divce();
//		printf("%d\n", b);
//	}
//	return 0;
//}
//#define SPACE ' '
//int main()
//{
//	char ch = getchar();
//	while (ch != '\n')
//	{
//		if (ch == SPACE)
//			putchar(ch);
//		else
//			putchar(ch + 1);
//		ch = getchar();
//	}
//	putchar(ch);
//	return 0;
//}
//void insert_sort(int* arr, int sz)
//{
//	int i = 0;
//	for (i = 0;i < sz - 1;i++)
//	{
//		int n = i;
//		int temp = arr[i + 1];
//		while (n >= 0)
//		{
//			if (arr[n] >= temp)
//			{
//				arr[n + 1] = arr[n];
//				n--;
//			}
//			else
//				break;
//		}
//		arr[n+1] = temp;
//	}
//}
//int main()
//{
//	int a[] = { 1,5,3,6,8,3,4,2,9,0 };
//	int sz = sizeof(a) / sizeof(a[0]);
//	insert_sort(a, sz);
//	int i = 0;
//	for(i = 0;i < sz;i++)
//	{
//		printf("%d ", a[i]);
//	}
//	return 0;
//}
//char c[10] = "";
//char* conclude(const char* a,const char* b, int a1, int b1)
//{
//	int k1 = 0;
//	int k2 = 0;
//	int i = 0;
//	int n = a1 + b1;
//
//	for (i = 0;i < n;i++)
//	{
//		if (i % 2 == 0)
//		{
//			c[i] = a[k1];
//			k1++;
//		}
//		else
//		{
//			c[i] = b[k2];
//			k2++;
//		}
//	}
//	return c;
//}
//int main()
//{
//	char a[] = "abus";
//	char b[] = "isfa";
//
//	int a1 = sizeof(a) / sizeof(a[0]);
//	int b1 = sizeof(b) / sizeof(b[0]);
//	char* c = conclude(a, b, a1, b1);
//	printf("%s ", c);
//	return 0;
//}
//int main()
//{
//	const char* p = "abcde";
//	printf("%s ", p);
//}
//#include<string.h>
//void meaning(char** p)
//{
//	strcpy_s(*p,10,"abcdef");
//	printf(*p);
//}
//int main()
//{
//	char* str  ;
//	meaning(&str);
//	printf(str);
//	return 0;
//}
//#include<stdlib.h>
//int main()
//{
//	char* p=(char*)malloc(10*sizeof(char));
//	if (p == NULL)
//	{
//		return 11;
//	}
//	strcpy_s(p, 10, "adasdssss");
//	printf(p);
//
//	return 0;
//}
//int main()
//{
//	FILE* pf;
//	int error_s;
//	error_s = fopen_s(&pf, "test.txt", "r");
//	if (pf == NULL||error_s != 0)
//	{
//		perror("fopen");
//		return 1;
//	}
//
//	return 0;
//}
//int main()
//{
//	srand(time(NULL));
//	int c = rand()%6;
//	while (c != 3)
//	{
//		c = rand() % 6;
//		printf("%d\n", c);
//	}
//	return 0;
//}
//int main()
//{
//	char arr[10] = { 0 };
//	scanf_s("%s", arr, 10);
//	FILE* pf = NULL;
//	fopen_s(&pf, "data.txt", "w+");
//	if (pf == NULL)
//	{
//		perror("fopen_s");
//		return 1;
//	}
//	fputs(arr, pf);
//	rewind(pf);
//	int ch;
//	int x = 0;
//	while ((ch = fgetc(pf)) != EOF)
//	{
//		if (ch == 'c')
//			x++;
//
//	}
//	printf("%d\n", x);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//#include <stddef.h>
//int main()
//{
//	typedef struct Node
//	{
//		int data;
//		struct node* next;
//	}node;
//	NODE.data = 9;
//	int c = sizeof(node);
//	printf("%zu", offsetof(node, data));
//	printf("%zu", offsetof(node, next));
//	printf("%d", c);
//	printf("%d", NODE.data );
//	return 0;
//}
//#include<stdlib.h>
//
//typedef struct Node
//{
//	int data;
//	struct Node* next;
//} node;
//
//node* newnode(int data)
//{
//	node* newnode = (node*)malloc(sizeof(node));
//	if (newnode == NULL)
//	{
//		perror("malloc");
//	}
//	newnode->data = data;
//	newnode->next = NULL;
//	return newnode;
//}
//node* linklist()
//{
//	node* head = newnode(1);
//	head->next  = newnode(2);
//	head->next ->next  = newnode(3);
//	return head;
//}
//void printfnode(node* head)
//{
//	node* current = head;
//	while (current != NULL)
//	{
//		printf("%d", current->data);
//		current = current->next;
//	}
//}
//void freenode(node* head)
//{
//	node* temp;
//	while (head != NULL)
//	{
//		temp = head;
//		head = head->next;
//		free(temp);
//
//	}
//}
//int main()
//{
//	node* add = linklist();
//	printfnode(add);
//	freenode(add);
//	return 0;
//}
//求100以内的质数
//int main()
//{
//	int n = 100;
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		int x = 0;
//		for (j = 1; j <= i; j++)
//		{
//			if (i % j == 0)
//			{
//				x++;
//			}
//		}
//		if (x == 2)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//#define PRINTF(n, format) printf("the value is "format, n)
//int main()
//{
//	int a = 4;
//	PRINTF(a, "%d");
//	return 0;
//}
//#define DEBUG
//int main()
//{
//#ifdef DEBUG
//	printf("abc");
//#endif
//	return 0;
//}
//char* Hello()
//{
//	static char buf[] = "Hello world";
//	return buf;
//}
//
//int main()
//{
//	char* a = Hello();
//	printf("%s", a);
//	return 0;
//}
//
//int main()
//{
//	int a;
//	scanf_s("%d", &a);
//	switch (a)
//	{
//	case 1:printf("1 ");
//		break;
//	case 2:printf("2 ");
//		break;
//	case 3:printf("3 ");
//		break;
//	defult:printf("4 ");	
//
//	}
//	return 0;
//}
//int main()
//{
//	int a = printf("'v'");
//	printf("%d ", a);
//	return 0;
//
//}
//int* getConcatenation(int* nums, int numsSize)
//{
//    int* newarr = (int*)malloc(2 * numsSize * sizeof(int));
//    if (newarr == NULL)
//    {
//        return NULL;
//    }
//    int i = 0;
//    for (i = 0; i < numsSize; i++)
//    {
//        newarr[i] = nums[i];
//    }
//    for (i = 0; i < numsSize; i++)
//    {
//        newarr[i + numsSize] = nums[i];
//    }
//
//    return newarr;
//}
//int main()
//{
//    int arr[] = { 1,2,1 };
//    int* p = getConcatenation(arr, 3);
//    int i;
//    for (i = 0; i < 6; i++)
//    {
//        printf("%d ", p[i]);
//    }
//    free(p);
//    p = NULL;
//	return 0;
//}
//void newknow(int *c)
//{
//	*c = 2;
//}
//int main()
//{
//	int num = 0;
//	int* a = &num;
//	newknow(a);
//	printf("%d ", num);
//	return 0;
//}//使用地址来改变其他数的值
//
//int main()
//{
//	int i;
//	printf("%zd ", sizeof(int*));
//	int** a = (int**)malloc(sizeof(int*) * 2);
//	if (a == NULL)
//	{
//		perror("a");
//		return 1;
//	}
//	for (i = 0; i < 2; i++)
//	{
//		a[i] = (int*)malloc(sizeof(int) * 3);
//		if (a[i] == NULL)
//		{
//			perror("a[i]");
//			return 1;
//		}
//	}
//	int j;
//	for (i = 1;i < 3; i++)
//	{
//		for (j = 1;j < 4; j++)
//		{
//			a[i-1][j-1] = i * j;
//		}
//	}
//	for (i = 0;i < 2; i++)
//	{
//		for (j = 0;j < 3; j++)
//		{
//			printf("%d ", a[i][j]);
//		}
//		printf("\n");;
//	}
//	for (i = 0; i < 2; i++)
//	{
//		free(a[i]);
//		a[i] = NULL;
//	}
//
//	free(a);
//	a = NULL;
//	
//	return 0;
//}
//int main()
//{
//	int arr = 10;
//	printf("%d ", arr);
//	return 0;
//}
#include<string.h>
int main()
{
	char str[50];
	char str1[50];
	scanf("%s", str);
	scanf("%s", str1);
	
	printf("%s ", str);
	printf("%s ", str1);
	strcat(str, str1);
	printf("%s ", str);
	return 0;
}