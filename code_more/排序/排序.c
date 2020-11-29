#include<stdio.h>

int q[] ={10,3,9,2,8,9,1};
int len = sizeof(q)/sizeof(int);

void bubble_sort(int q[],int l,int r){
	if(l>=r)return;
	int i,j;
	for(i=0;i<7;i++){// ÿ�δ�������ѡ������������ 
		for(j=0;j+1<7-i;j++){
			if(q[j]>q[j+1]){
				int t=q[j];
				q[j]=q[j+1],q[j+1]=t;
			}
		}	
	}

	for(i=0;i<len;i++)printf("%d ",q[i]); 
}

void select_sort(int q[],int l,int r){
	if(l>=r)return;
	int min,i=0,j; // min ��С�����±�
	for(i=0;i<7;i++){
		min=i; // ����ÿ��������ĵ�һ������С 
		for(j=i;j<7;j++){
			if(q[min]>q[j])min=j;
		}
		// �ѵ�ǰ��������С�����ŵ�i���λ���� 
		int t=q[min];
		q[min]=q[i];
		q[i]=t;
	} 

	for(i=0;i<len;i++)printf("%d ",q[i]); 
}

void insert_sort(int q[],int l,int r){
	if(l>=r)return;
	int i,j;
	for(i=1;i<7;i++){// ö�ٵ�������ĵ�i��λ�� 
		j=i;
		while(j-1>=0 && q[j]<q[j-1]){
			// ���� 
			int t=q[j-1];
			q[j-1]=q[j],q[j]=t; 
			j--;
		}
	}
	for(i=0;i<len;i++)printf("%d ",q[i]); 
} 

// �����кܶ�߽������ 
void quick_sort(int q[],int l,int r){
	if(l>=r)return; 
	// ������ x �ֽ����л���      
	//   <x    x   >x 
	int i=l-1,j=r+1,x=q[l];
	while(i<j){
		while(q[++i]<x);
		while(q[--j]>x);
		if(i<j){
			int t=q[i];
			q[i]=q[j],q[j]=t;
		}
	}
	quick_sort(q,l,j);// ����������߽��д���
	quick_sort(q,j+1,r); // ������������д��� 
} 

void merge_sort(int q[],int l,int r){
	if(l>=r)return;
	int mid=(l+r)/2;
	merge_sort(q,l,mid); // ������ߵĻ���
	merge_sort(q,mid+1,r); // �����ұߵĻ���
	
	// ������������ϲ���һ����������
	int i=l,j=mid+1,k=0,tmp[100];
	while(i<=mid && j<=r){ // ������������һ��ָ���Ѿ��������� 
		if(q[i]<=q[j]){
			tmp[k++]=q[i++];
		}else{
			tmp[k++]=q[j++];
		}
	} 
	// ��β
	while(i<=mid)tmp[k++]=q[i++]; 
	while(j<=r)tmp[k++]=q[j++];
	// tmp�Ǻϲ��õĴ�����   
	// tmp => q 
	for(i=l,j=0;i<=r;i++,j++)q[i]=tmp[j];
	 
} 


int main(){

	int i;
	for(i=0;i<len;i++)printf("%d ",q[i]);
	printf("\n========\n");
//	bubble_sort(q,0,len-1);
//	select_sort(q,0,len-1);
//	insert_sort(q,0,len-1);
//	quick_sort(q,0,len-1);
	merge_sort(q,0,len-1); 
	for(i=0;i<len;i++)printf("%d ",q[i]); 
	return 0;
} 
