#include<stdio.h>

double makeDouble(int  ipart, int fraction){
	double dF=fraction;
	while (dF>=1){
		dF=dF/100;
		if(ipart<0){
			return ipart-dF;
		}else{
				return ipart+dF;  
		}
	}
}
;
int main(){
	int fraction,ipart;
		printf("insert ipart: ");
		scanf("%d",&ipart);
	do{
		printf("insert fraction:");
		scanf("%d",&fraction);
	}
	    while(fraction<0);
		double value=makeDouble(ipart, fraction);
		printf("Value %lf",value);
}