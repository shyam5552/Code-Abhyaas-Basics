#include<stdio.h>
int main(){
	int n,i;
	printf("enter size of array:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		
	}
	int large=a[0],temp;
	for(i=1;i<n;i++){
		if(a[i]>large){
			temp=large;
			large=a[i];
		}
		
	}
	printf("%d",temp);
}
