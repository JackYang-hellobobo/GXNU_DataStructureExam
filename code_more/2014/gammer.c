#include<stdio.h>

int main(){
//	char c='\n',d='\t',e='\\'; // \n �س�  \t TAB  ת���ַ� 
//	int x,y;
//	scanf("%d%d",&x,&y); // scanf����˿ո�  %d %d  | %d%d | %d,%d 
//	printf("x: %d\ny: %d\n",x,y);
//	char c;
//	scanf("%c",&c);
//	if(c>='a' && c<='z')printf("yes");
//	else printf("no");
	// ָ��(��ַ����)  ���������ǵ�ַ 
//	char strc[]=" ABCDEFG"; // ����9 ��Ч�ַ�Ϊ8
//	printf("%c==\n",*strc); 
//	printf("%c\n",*(strc+4));
//	printf("%p\n",strc);
//	printf("%p\n",strc+1);
//	// %s ��ָ��Ŀ�ͷ \0
//	printf("%s\n",strc);
//	printf("%s\n",strc+1);
//	printf("%s\n",strc+2); 

//	int a[10]={1,2,3,4,5,6,7,8,9,10}; // int 4���ֽ� 
//	int *p=a;
//	// %p ��ʽ�����ָ�� 
//	printf("%p\n",p);
//	printf("%p\n",p+1);
//	printf("%p   %p\n",p+5,a+5); 
//	printf("%d   %d\n",*(p+5),a[5]);  // p+5=a+5  *(p+5)=a[5]
	int q[11]={1,4,6,9,13,16,19,28,40,45}; // ���һ����Ϊ0 
	int len = sizeof(q)/sizeof(int);
	printf("%d\n",len);
	int i;
	for(i=0;i<11;i++)printf("%d ",q[i]);
	return 0;
} 
