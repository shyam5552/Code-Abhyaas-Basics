#include<stdio.h>
int main(){
	int i,j,n;
	printf("enter size of array:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		
	}
	j=0;
	for(i=0;i<n;i++){
		if(a[i]%2 !=0){
			a[j]=a[i];
			j=j+1;
		}
	}
	for(i=0;i<j;i++){
		printf("%d\t",a[i]);
	}
}
