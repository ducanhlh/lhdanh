#include <stdio.h>
int main(){
	int a;
	printf("nhap a =");
	scanf("%d",&a);
	
	int b;
	printf("nhap b =");
	scanf("%d",&b);
	
	int c;
	c= a-b;
	if(c>0){
		printf("a lon hon b");
	}else
	printf("b lon hon a");
	
}
