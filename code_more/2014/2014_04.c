#include<stdio.h>


void insert(int q[],int x){
	//  �ҵ�xӦ�ò����λ��
	int i=0;
	while(i<10 && q[i] < x)i++; // iͣ������  (1)i==10 (2) q[i]>=x 
	if(i==10)q[10]=x;
	else{
		int j=10;
		while(j>i){
			int t=q[j];
			q[j]=q[j-1];
			q[j-1]=t;
			j--;
		}
		q[i]=x;
	}
} 
int main(){
	int x;
	scanf("%d",&x);
	int q[11]={1,4,6,9,13,16,19,28,40,45}; // ���һ����Ϊ0 
	insert(q,x);
	int i;
	for(i=0;i<11;i++)printf("%d ",q[i]); 
	
	return 0;
}
