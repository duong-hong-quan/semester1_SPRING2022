#include<stdio.h>
int sumDigits(int n){
	int sum = 0;
	do{
		int remainder = n%10;
		n = n/10;
		sum += remainder;
	}
	while (n >0);
	return sum;
}
int main(){
	int S;
	int n;
	do{
		printf("enter n :");
		scanf("%d",&n);
	
	if (n > 0){
			S= sumDigits(n);
			printf("S la : %d\n",S);
			
	}
}
while (n >=0);

}