#include<stdio.h>
#include<stdlib.h>
/*
1. typedef struct 
2. ͷ����/ɾ��
3. ͷ�ڵ� 
*/

typedef struct node{
	int data;
	struct node *next;
}Bnode;

// head: ͷ�ڵ�ĵ�ַ 
// x: Ҫ�����ֵ
// i: Ҫ�����λ�� 
void insert(Bnode* head,int x,int i){
	Bnode *p = head; // ���ܶ�head,������Ҳ�����
	int j=1;
	// �ҵ�Ҫ����λ�õ�ǰһ����� 
	while(j<i){ // ͣ������ʱ��,j==i ==> i-1 
		p=p->next;
		j++;
	} 
	// ��x����һ���½��
	Bnode *q = (Bnode*)malloc(sizeof(Bnode)); // malloc ��ϵͳҪһ���ռ� 
	q->data=x;q->next=NULL;
	// �����˳�����Ҫ! 
	q->next=p->next;
	p->next=q;
}
 

int main(){ // ���Բ���дmain 
	Bnode* head = (Bnode*)malloc(sizeof(Bnode));
	Bnode* l1 = (Bnode*)malloc(sizeof(Bnode));
	Bnode* l2 = (Bnode*)malloc(sizeof(Bnode));
	Bnode* l3 = (Bnode*)malloc(sizeof(Bnode));
	Bnode* l4 = (Bnode*)malloc(sizeof(Bnode));
	Bnode* l5 = (Bnode*)malloc(sizeof(Bnode));
	
	// ��ʼ��ֵ
	head->data=-1,l1->data=1,l2->data=3,l3->data=9,l4->data=8,l5->data=20; 
	head->next=l1,l1->next=l2,l2->next=l3,l3->next=l4,l4->next=l5,l5->next=NULL; 
	insert(head,100,2);
	
	Bnode *p = head;
	while(p->next!=NULL){
		printf("%d ",p->next->data);
		p=p->next;
	}
	
	return 0;
} 







