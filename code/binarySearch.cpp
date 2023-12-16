#include<bits/stdc++.h>
using namespace std;

int bsearch1(int q[],int l,int r,int x){
	while(l<=r){ // С�ڵ��� <=
		int mid = l + r >> 1; 
//		int mid = (l+r)/2;
		if(q[mid]==x)return mid;
		else if(q[mid]>x)r=mid-1;
		else l=mid+1; 
	}
	return -1;
}

int bsearch2(int q[],int l,int r,int x){
	while(l<r){ // С�� <
		int mid = l+r>>1;
		if(q[mid]==x)return mid;
		else if(q[mid]>x)r=mid; // �����ǲ��
		else l = mid + 1; 
	}
	// ����ѭ�� l=r 
	if(q[l]!=x)return -1;
	else return l;
}


int main(){
	int q[] = {1,2,3,4,5,6,7};
	int x = 4;
	cout << bsearch1(q,0,7-1,x) << endl;
	cout << bsearch2(q,0,7-1,x) << endl;
	
	return 0;
}
