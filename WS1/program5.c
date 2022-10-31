#include <stdio.h>
int main (){
	char ch;
	int V =0;
	int C = 0;
	int O =0;
	
	do {
		printf(" \nPLEASE INPUT TEXT : ");
		ch = getchar();
		ch = toupper(ch);
		if (ch>='A' && ch <='Z') {
     switch (ch){
         case 'A' :
         case 'E' :
         case 'I' :
         case 'O' :
         case 'U' : 
		 V ++; 
		 break;
         default:  
		 C++;
     }
}
	else O++;
    }
    while( ch != '\n');
    printf("\nnvowels :%d",V);
    printf("\nconsonants :%d",C);
    printf("\nnothers :%d",O);
 
	}

