#include<stdio.h>

int main (){
	int x,y,t;
	printf("nhap x : ");
	scanf("%d",&x);
	printf("nhap y: ");
	scanf("%d",&y);
	do {
		t = x;
		x = y;
		y = t;
		printf("ket qua sau khi chuyen x = %d\n", x);
		printf("ket qua sau khi chuyen y = %d",y);
		break;
	}
	while(x!= 0 && y!= 0);
}

