
#include <stdio.h>
void TimUoc(int n){
		i = 1;
		max = 1; 
		printf("\nCac uoc so le cua so %d la: ",n); 
		while(i <= n) { 
			if((n % i == 0) && (i % 2 == 1)) { 
				if(i > max) { 
					max = i; 
				} 
			} i++; 
		} 
		printf("\nUoc so le lon nhat la %d", max); 

}
int main(){
	int n;
	printf("Hay nhap n: ");
	scanf("%d", &n);
	TimUoc(n);
	return 0;
}
