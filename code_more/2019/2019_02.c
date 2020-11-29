#include<stdio.h>
#include<stdlib.h>

#define N 6
#define INF 65535

int GM[N][N]; // �ڽӾ��� 

typedef struct GNode{
	int v; // ����
	int w; // Ȩ�� 
	struct GNode *next; 
}*GNode;

// ע��: ����ֻ�Ƕ������,û�з���ռ� 
GNode GT[N]; // �ڽӱ� 




int main(){
	int i,j;
	// ��ʼ���ڽӾ��� 
	for(i=1;i<N;i++){
		for(j=1;j<N;j++){
			if(i==j)GM[i][j]=0;
			else GM[i][j]=INF;
		}
	}
	
	// ��ʼ���ڽӱ�
	// ���Ǹ�ÿ������ĵ�һ�����mallocһ���ռ�,��Ϊͷ��� 
	for(i=1;i<N;i++){
		GT[i]=(GNode)malloc(sizeof(GNode));
		GT[i]->v=-1,GT[i]->w=-1,GT[i]->next=NULL; 
	} 
	
	while(1){
		int x,y,w;
		scanf("%d%d%d",&x,&y,&w);
		if(x==-1 || y==-1 || w==-1)break;
		GM[x][y]=w; // �ڽӾ�������� 
		
//		// �ڽӱ������ (������Ĳ���)
//		GNode p = GT[x];
//		while(p->next)p=p->next; // �ҵ�����λ�õ�ǰһ���ڵ�
//		GNode q = (GNode)malloc(sizeof(GNode));
//		q->v=y,q->w=w,q->next=NULL;
//		p->next=q;
	}
	
	for(i=1;i<N;i++){
		for(j=1;j<N;j++){
			printf("%6d ",GM[i][j]);
		}
		printf("\n");
	}
	


	// ���ڽӾ���ת��Ϊ�ڽӱ�
	for(i=1;i<N;i++){
		for(j=1;j<N;j++){
			if(GM[i][j]==0 || GM[i][j]==INF)continue;
			GNode p = GT[i];
			while(p->next)p=p->next;
			GNode q = (GNode)malloc(sizeof(GNode));
			q->v=j,q->w=GM[i][j],q->next=NULL;
			p->next=q;
		}
	} 
	
	printf("====================\n");
	for(i=1;i<N;i++){
		GNode p = GT[i]->next;
		printf("���%d  -> ",i);
		while(p){
			printf("|%2d|%2d| -> ",p->v,p->w);
			p=p->next;
		}
		printf("NULL\n");
	}
	return 0;
}

