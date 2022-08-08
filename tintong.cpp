#include <stdio.h>
int main(){
	int n;
	printf("nhap n =");
	scanf("%d",&n);
	int s = 0;
	int i = 1;
	 while(i<=n){
	 	s=s+i;
	 	i++;
	 }
	printf("tong la %d",s);
	
}
