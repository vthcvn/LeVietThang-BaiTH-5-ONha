#include <stdio.h>
int Indayso(int n){
	if (n<1 && n>30)
		return Indayso(n-1);
}
int main(){
	int i, n=30;
	for(i=1; i<=30; i+-+-){
		printf("%d ", Indayso(i));
	}
	return 0;
}
