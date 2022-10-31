#include <stdio.h>

int main(){
	int n;

	do{
	printf("enter n: ");
	scanf("%d",&n);
}
	while(n < 1);
	if(isFibonacci(n)==1){
		printf("It is a Fibonacci element");		
	}
	else {
		printf("It isn't a Fibonacci element");
	}
}

int isFibonacci(int n){
	int t1 = 1, t2 = 1, f = 1;
	if (n==1){
		return 1;
	}
	while (f < n){
		f = t1 + t2;
		t1 = t2;
		t2 = f;
	}
	return n == f;
}