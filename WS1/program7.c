#include<stdio.h>
 int main() {
    char c1,c2;
    int d,c;
    printf("First num, Second num: ");
    scanf("%c %c",&c1,&c2);
    if(c1>c2){
        int t=c1;
        c1=c2;
        c2=t;
	}
   		d=c2-c1;
  		printf("D: %d\n\n",d);
   		for(c=c1;c<=c2;c++) {
    	printf("%c%d,%o,%d\n",c,c,c,c);
    	};
    	return(0);
}

