#include<bits/stdc++.h>
using namespace std;
int res;
void p(int q[],int l,int r){ // ��ӡ���� 
    for(int i=l;i<=r;i++)cout << q[i] << " ";
    cout << endl;
    
}

void bubble_sort(int q[],int l,int r){
    if(l>=r)return;
    for(int i=0;i<r;i++){
        for(int j=0;j<r-i;j++){
            if(q[j]>q[j+1])swap(q[j],q[j+1]);
        }
        p(q,l,r);
    }
}

void insert_sort(int q[],int l,int r){
    if(l>=r)return;
    for(int i=1;i<=r;i++){
        int j=i;
        while(j>0 && q[j]<q[j-1])swap(q[j],q[j-1]),j--;
        p(q,l,r);
    }
}

void select_sort(int q[],int l,int r){
	if(l>=r)return;
	for(int i=0;i<r;i++){
		int min=i;
		for(int j=i+1;j<=r;j++){
			if(q[min]>q[j])min=j;
		}
		swap(q[i],q[min]);
		p(q,l,r);
	}
} 


void quick_sort(int q[],int l,int r){
	if(l>=r)return;
	int i=l,j=r,x=q[l];
	while(i<j){
		while(i<j && q[j]>=x)j--;
		if(i<j)q[i++]=q[j];
		while(i<j && q[i]<x)i++;
		if(i<j)q[j--]=q[i];
	} 
	q[i]=x;
	printf("x:%d\n",x);
	p(q,l,r);
	quick_sort(q,l,j-1),quick_sort(q,j+1,r);
}


void merge_sort(int q[],int l,int r){
	if(l>=r)return;
	int mid=l+r>>1;
	merge_sort(q,l,mid),merge_sort(q,mid+1,r);
	int i=l,j=mid+1,k=0,tmp[100];
	while(i<=mid && j<=r){
		if(q[i]<q[j])tmp[k++]=q[i++];
		else tmp[k++]=q[j++];
	}
	while(i<=mid)tmp[k++]=q[i++];
	while(j<=r)tmp[k++]=q[j++];
	for(i=l,j=0;i<=r;i++,j++)q[i]=tmp[j];
	p(q,0,8);
}

int main(){
    int q[] = {11,10,11,6,7,12,2,16,30};
	merge_sort(q,0,9-1); 
	cout << res << endl;
    return 0;
}
