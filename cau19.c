#include <stdio.h>
void TimUoc(int n, int k){
	int t=n/k;
	int a[100];
	if(t<k)
		return;
	if(t*k==n){
		int i=1;
		for (i; i<=n; i++){
			a[i]=k;
		}
	}
		printf("%d ",a[3]);
 	TimUoc(n,k+1);
	if(t*k==n && t!=k)
  		printf("%d ",t);
}
int ULLN(int n){
}
int main(){
	int k=1,n;
	printf("Hay nhap n: ");
	scanf("%d", &n);
	TimUoc(n,1);
	return 0;
}
