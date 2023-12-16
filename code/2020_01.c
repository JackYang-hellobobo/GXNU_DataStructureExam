#include <stdio.h>
#include <stdlib.h>
typedef struct LNode
{
	int data;
	struct LNode *next;
} LNode, *LinkList;

// ɾ��������ֻҪ�ҵ�Ҫɾ����ǰһ�����Ӽ���
void del(LinkList head, int x)
{ // headΪͷ���
	// ��ͷ���ɾ����ͷ��������
	LinkList p = head;
	while (p->next)
	{
		if (p->next->data == x)
		{
			p->next = p->next->next;
			break;
		}
		p = p->next;
	}
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

	LinkList p = head->next;
	while (p)
		printf("%d ", p->data), p = p->next;
	//	del(head,1);
	//	del(head,3);
	//	del(head,9);
	printf("\n");
	p = head->next;
	while (p)
		printf("%d ", p->data), p = p->next;
	return 0;
}
