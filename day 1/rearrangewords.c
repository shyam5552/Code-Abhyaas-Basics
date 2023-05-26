#include<stdio.h>
int main(){
	int i;
	printf("enter input string:");
	char word[100];
	scanf("%s",word);
	char temp[100];
	
	int a[5]={1,0,2,4,3};
	for(i=0;i<5;i++){
		
		temp[i]=word[a[i]];
		
	}
	for(i=0;i<5;i++){
		printf("%c",temp[i]);
	}
	
	
}
