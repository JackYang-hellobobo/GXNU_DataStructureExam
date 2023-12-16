#include <stdio.h>
#include <stdlib.h>

typedef struct LNode
{
	int data;
	struct LNode *next;
} * LinkList;

double get_avg(LinkList head)
{
	// ����һ��,���   �󳤶�
	LinkList p = head->next;
	int n = 0, s = 0;
	while (p)
	{
		n++;
		s += p->data;
		p = p->next;
	}
	return (double)s / n;
}

int main()
{
	LinkList head = (LinkList)malloc(sizeof(LinkList));
	LinkList l1 = (LinkList)malloc(sizeof(LinkList));
	LinkList l2 = (LinkList)malloc(sizeof(LinkList));
	LinkList l3 = (LinkList)malloc(sizeof(LinkList));
	LinkList l4 = (LinkList)malloc(sizeof(LinkList));
	head->data = -1, l1->data = 1, l2->data = 3, l3->data = 9, l4->data = 2;
	head->next = l1, l1->next = l2, l2->next = l3, l3->next = l4, l4->next = NULL;
	printf("%lf", get_avg(head));
	return 0;
}
