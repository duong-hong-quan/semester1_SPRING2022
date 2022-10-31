#include <stdio.h>
int main ()
{
	int x;
	int s = 0;

	do{	
		printf("Nhap x: ");
		scanf("%d",&x);
		s = s +x;
	}
	while (x!=0);
	printf("sum = %d",s);
	
}
