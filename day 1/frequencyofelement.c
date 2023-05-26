#include<stdio.h>
int main(){
	int i,n;
	printf("enter size of array:");
	scanf("%d",&n);
	int a[n];
	printf("enter the elements:");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int element,count=0;
	printf("enter the element fo find frequency of it :");
	scanf("%d",&element);
	for(i=0;i<n;i++){
		if(a[i]==element){
			count++;
		}
	}
	printf("%d",count);
}
//sample input: 6 
//              12,4,8,4,6,8,4
//            : 4
//output: 3 
