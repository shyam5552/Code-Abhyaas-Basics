#include<stdio.h>
int main(){
	int n,i;
	printf("enter number of elements in array");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int large=a[0];
	for(i=1;i<n;i++){
		if(a[i]>large){
			large=a[i];
		}
	}
	printf("%d",large);
}
//sample input 20,16,36,14,30
//output 36
