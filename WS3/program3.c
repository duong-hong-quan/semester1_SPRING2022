#include <stdio.h>
int getRelPos ( double x, double y, double r){
	double d = x*x +y*y;
	double t = r*r;
	if (d<t) return 1;
	else if (d==t) return 0;
	else return -1;
}

int main (){
	double x,y,r; 
	printf("Enter a point(x,y): ");
	scanf("%lf,%lf",&x,&y); 
	printf("Enter radius: "); 
	scanf("%lf",&r);
	while (r<0){
		scanf("%f",&r);
	}
	if (getRelPos (x,y,r)==1) 
	printf("The point is in the circle.");
	else if (getRelPos (x,y,r)==0) 
	printf("The point is on the circle.");
	else printf("The point is out of the circle.");
	getchar();
	return 0;
}