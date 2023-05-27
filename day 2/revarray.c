#include<stdio.h>
int main(){
	int n,i,temp;
	printf("enter size of array:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int n1=n/2;
	for(i=0;i<n1;i++){
		temp=a[i];
		a[i]=a[n-1-i];
		a[n-1-i]=temp;
		
	}
	for(i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
}
