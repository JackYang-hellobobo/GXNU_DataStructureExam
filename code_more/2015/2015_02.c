#include<stdio.h>


/*
1. ��ͳ˼·,����һ������ 
2. ����ʵ��(ģ��һ��) 
*/

// ��ͳ˼· 
void f1(int q[],int l,int r){ //[0...len-1]
	int tmp[100],k=0,i=0;
	// ��һ�η���������tmp 
	for(i=0;i<=r;i++){
		if(q[i]%2!=0){
			tmp[k]=q[i];
			k++;
		}
	}
	printf("k: %d\n",k);
	// �ڶ��η�ż������tmp
	for(i=0;i<=r;i++){
		if(q[i]%2==0){
			tmp[k]=q[i];
			k++;
		}
	}
	printf("k: %d\n",k);
	for(i=0;i<=r;i++)printf("%d ",q[i]);
	printf("\n");
	for(i=0;i<k;i++)printf("%d ",tmp[i]);
}

// ����˼�� 
void f2(int q[],int l,int r){
	int i=l,j=r;
	while(i<j){
		while(i<j && q[i]%2!=0)i++;
		while(i<j && q[j]%2==0)j--;
		if(i<j){
			int t=q[i];
			q[i]=q[j],q[j]=t;
		}
	} 
	for(i=0;i<=r;i++)printf("%d ",q[i]);
}

int main(){

	int q[] = {1,9,6,4,3,2,1,34,12,5,31};
	int len = sizeof(q)/sizeof(int); 
//	f1(q,0,len-1);
	f2(q,0,len-1);
	return 0;
} 
