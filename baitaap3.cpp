#include <stdio.h>
int main(){
	int n;
	printf("nhap n =");
	scanf("%d",&n);
	for(int i = 1; i <= n; i++){
		if(n % i == 0){
			printf("%d\n",i);
		}
	}
	
	
	
}