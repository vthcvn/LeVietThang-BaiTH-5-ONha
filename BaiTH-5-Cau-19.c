#include <stdio.h>
void TimUoc(int n){ 
	if(n%2!=0) return n;
	else return (n/2);
}
int main(){
	int n;
	printf("Hay nhap n: ");
	scanf("%d", &n);
	printf("%d ", TimUoc(n));
	return 0;
}
