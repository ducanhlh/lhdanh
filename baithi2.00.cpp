#include <stdio.h>
int main(){
	int n;
	printf("enter array size:");
	scanf("%d",&n);
	
	int arr[n];
	for(int i=0;i<n;i++){
		printf("enter a value for element %d :",i+1);
		scanf("%d",&arr[i]);
	}
	for(int i=n-1;i>=0;i--){
		printf("%d\n",arr[i]);
	}
	    



}

