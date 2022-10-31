#include <stdio.h>
#include <math.h>
int prime (int n){
	 int flag = 1;

    if (n <2) 
	return flag = 0; /*Số nhỏ hơn 2 không phải số nguyên tố => trả về 0*/
    
    /*Sử dụng vòng lặp while để kiểm tra có tồn tại ước số nào khác không*/
    int i = 2;
    while(i <n){
        if( n%i==0 ) {
            flag = 0;
            break; /*Chỉ cần tìm thấy 1 ước số là đủ và thoát vòng lặp*/
        }
        i++;
    }

    return flag;
}
void printMinMaxDigits(int n){
	int min = n % 10, max = n % 10;
	int remain = n;
	do{
	if(remain % 10 > max) max = remain % 10;
	else if(remain % 10 < min) min = remain % 10;
	remain = remain / 10; 
	} while(remain > 1);
	 printf("The biggest digit is %d\n", max);
	 printf("The smallest digit is %d\n", min);
}


int main (){
	int n, choice;
	do {
		printf("1.process primes \n");
		printf("2.Print min, max digit in an integer  \n");
		printf("3.quit\n");
		printf("select an operation:  ");
		scanf("%d",&choice);
		
	
	switch(choice){
	//	getchoice();
		case 1: 
		do {
			printf("enter n : ");
			scanf("%d",&n);
		}
		while (n <0);
		if(prime(n)==1)
		printf("it is prime\n");
		else
		printf("it is not a prime\n");
		break;		
	
		case 2:
		do {
			printf("enter n: ");
			scanf("%d",&n);
		
		}
		while (n <0);
	printMinMaxDigits(n);
		break;
	}
	
}
while (choice >0 && choice <3);
}
