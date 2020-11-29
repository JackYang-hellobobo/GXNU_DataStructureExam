#include<stdio.h>
#include<stdlib.h>

typedef struct TNode{
	char data;
	struct TNode * lchild;
	struct TNode * rchild;
}*TNode;


// C��û��bool���͵�, int


int  is_same(TNode a,TNode b){ // 1:���  0: ����� 
	if(a==NULL && b==NULL)return 1;
	if(a==NULL && b!=NULL)return 0;
	if(a!=NULL && b==NULL)return 0;
	if(a!=NULL && b!=NULL){ // ʹ����������ж� 
		if(a->data == b->data){
			return is_same(a->lchild,b->lchild) && is_same(a->rchild,b->rchild);
		} else{
			return 0;
		}
	}
} 

// �������������� 
TNode create(){
	TNode T;
	char ch;
	scanf("%c",&ch);
	if(ch=='#')T=NULL;
	else{
		T = (TNode)malloc(sizeof(TNode)); // ����һ���ռ�
		T->data = ch;
		T->lchild = create();
		T->rchild = create(); 
	}
	return T;
}

// ��������������
void root_first(TNode T){
	if(T==NULL)return;
	printf("%c ",T->data);
	root_first(T->lchild);
	root_first(T->rchild);
	
} 

int main(){
	TNode a = create();  
	root_first(a); 
	printf("\n");
	getchar(); //�Ե��س�
	TNode b = create();   
	root_first(b);
	printf("\n");
	int res = is_same(a,b);
	printf("%d\n",res);
	
	return 0;
}


