#include <stdio.h>
int main(){
	int n;
	printf("nhap n =");
	scanf("%d",&n);
	for(int i = 0; i <= n; i +=6){
		int s = n - i;
		if(s <= 5){
			printf("%d",i);
		}
	}
	
	
	
}
