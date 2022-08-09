#include <stdio.h>
#include <math.h>
int main(){
	int a;
	printf("nhap a =");
	scanf("%d",&a);
	for(int i = 0; i <= a; i++){
		if(i % 2 == 1){
			printf("%d\n",i);
		}
	}
	
}
