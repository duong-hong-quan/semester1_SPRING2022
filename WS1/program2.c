#include<conio.h>
#include<stdio.h>
#define pa 9000000
#define pd 3600000
 int main ()
 {
    long long tf,n,ti, income, it=0;
    printf("Your income of this year: ");
	scanf("%ld", &income);
    printf("Number of dependent: ");
	scanf( "%d", &n);
    tf = 12*(pa + n*pd);
    ti=income-tf;
    printf("Tax-free income: %ld\n", tf);
    if(ti<=0){
         printf("Taxable income: 0\n");
         printf("Income tax: 0");
    }
        else{
            	if(ti-5000000>=0){
           			 it=it+(50000000.05);
            		}else{
					  	 it=it+(ti*0.05);
					}
            			if(ti-10000000>=0){
							it=it+((10000000-5000000)*0.1);
						}
                			else { 
							it=it+((ti-5000000)*0.1);
							}	
           						 if(ti-18000000>=0) { 
									it=it+((18000000-10000000)*0.15);
								}
			
               						else { 
			  							 it = it+((ti-10000000)*0.15);
			 						}
            							if(ti>18000000) { 
											it=it+((ti-18000000)*0.2);
										}
               								else { 
			   									it=it+((ti-18000000)*0.2);
			   								}		
       		printf("Taxable income: %ld\n", ti);
       		printf("Income tax: %ld", it);
    		return 0;
 			}
}
