#include <stdio.h>
#include <stdlib.h>

#define N 5

int GM[N][N];

typedef struct GNode
{
	int v; // ������
	int w; // Ȩֵ
	struct GNode *next;
} * GNode;

GNode GT[N];

int main()
{
	// �����ڽӱ�
	int i;
	for (i = 0; i <= N; i++)
	{
		GT[i] = (GNode)malloc(sizeof(GNode));
		GT[i]->v = -1, GT[i]->w = -1, GT[i]->next = NULL;
	}

	while (1)
	{
		int x, y, w;
		scanf("%d%d%d", &x, &y, &w);
		if (x == -1 || y == -1 || w == -1)
			break;
		GNode p = GT[x - 1];
		while (p->next)
			p = p->next;
		GNode q = (GNode)malloc(sizeof(GNode));
		q->v = y, q->w = w, q->next = NULL;
		p->next = q;
	}
	// ��ӡ�ڽӱ�

	for (i = 0; i < N; i++)
	{
		GNode p = GT[i]->next;
		printf("\n| ���%d | -> ", i + 1);
		while (p)
		{
			printf("| %d | %d | -> ", p->v, p->w);
			p = p->next;
		}
		printf("NULL");
	}
	return 0;
}
