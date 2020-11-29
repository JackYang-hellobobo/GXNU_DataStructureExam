#include<stdio.h>
#include<stdlib.h>
typedef struct LNode{
	int data;
	struct LNode *next; 
}*LinkList;

// ���LA�� LA��LB�ĺϲ���ȥ�ص��������� 
void merge_link(LinkList LA,LinkList LB){ //LA��LB���Ǵ���ͷ�ڵ� 
	// 1. ��LB�ͺϲ�LA���� 
	LinkList p=LA,q;
	while(p->next)p=p->next; // �ҵ�LA���һ�����
	p->next=LB->next; 
	// 2. ����
	p=LA->next;
	while(p){
		q = p->next;
		while(q){
			if(p->data<q->data){
				int t=p->data;
				p->data=q->data;
				q->data=t;
			}
			q = q->next;
		}
		p=p->next;
	} 
	// 3. ȥ��
	p=LA->next;
	while(p){
		q=p;
		while(q){
			if(q->next && q->next->data==p->data){
				q->next = q->next->next;
				// Ҫע��,������q������ 
				continue; 
			}
			q=q->next;
		}
		p=p->next;
	} 
	
}


// ����ͷ���,���������� 
LinkList create(LinkList L){// L: ͷ�ڵ� 
	L->data=-1,L->next=NULL;
	LinkList p = L;
	while(1){
		int t;
		scanf("%d",&t);
		if(t==-1)break; 
		LinkList q = (LinkList)malloc(sizeof(LinkList));
		q->data=t;
		q->next=NULL;
		p->next=q;
		p=p->next;
	}
	return L;
}

// �������� 
void link_sort(LinkList L){
	LinkList p,q;
	p=L->next;
	while(p){
		q = p->next;
		while(q){
			if(p->data<q->data){
				int t=p->data;
				p->data=q->data;
				q->data=t;
			}
			q = q->next;
		}
		p=p->next;
	}
} 


void del(LinkList L){
	LinkList p=L->next,q;
	while(p){
		q=p;
		while(q){
			if(q->next && q->next->data==p->data){
				q->next = q->next->next;
				// Ҫע��,������q������ 
				continue; 
			}
			q=q->next;
		}
		p=p->next;
	}
	
}


int main(){
	LinkList LA = (LinkList)malloc(sizeof(LinkList));
	LinkList LB = (LinkList)malloc(sizeof(LinkList));
	create(LA);
	create(LB);
	merge_link(LA,LB);
	// ��ӡ 
	LinkList pa = LA->next;
	while(pa){
		printf("%d ",pa->data);
		pa=pa->next;
	}
	return 0;
}
