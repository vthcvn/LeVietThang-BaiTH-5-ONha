#include <stdio.h>
long NhiPhan(int n){
	long t;
	if(n==0)
		return 0;
	else 
		t=n%2;
	return NhiPhan(n/2)*10 + t;
}

int main(){
	int n;
	printf("Hay nhap n: ");
	scanf("%d", &n);
	printf("Ket qua khi chuyen %d sang nhi phan la: %ld", n, NhiPhan(n));
	return 0;
}
