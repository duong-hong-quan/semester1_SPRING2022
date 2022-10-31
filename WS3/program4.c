#include <stdio.h>
double factorial(int n){
	double p = 1;
	int i;
	for ( i = 2; i < n; i++){
		p = p *i;
		
	}
	return p;
}
int main(){
	int n;
	printf("enter a positive interger: ");
	scanf("%d",&n);
	while ( n < 0){
		printf ("please enter a positive interger ( n >0) : )");
		scanf("%d",&n);
	}
	printf("%d!= %f",n,factorial(n));	
	getchar();
	return 0;
}
