#include<stdio.h>
void Fibonaccisequence(){
	int i;
	int n;
   int t1 = 0, t2 = 1;
   int f = t1 + t2;
  printf("Enter the number of terms: ");
  scanf("%d", &n);  
  printf("Fibonacci Series: %d, %d ", t1, t2);
  for (i = 3; i <= n; ++i) {
    printf("%d, ", f);
    t1 = t2;
    t2 = f;
    f = t1 + t2;
}
};

void checkadate(){

     int d, m, y;
    printf("Enter date (DD.MM.YYYY format): ");
    scanf("%d.%d.%d",&d,&m,&y);
     
    //check year
    if(y>=1900 && y<=9999)
    {
        //check moth
        if(m>=1 && m<=12)
        {
            //check days
            if((d>=1 && d<=31) && (m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12))
                printf("Date is valid.\n");
            else if((d>=1 && d<=30) && (m==4 || m==6 || m==9 || m==11))
                printf("Date is valid.\n");
            else if((d>=1 && d<=28) && (m==2))
                printf("Date is valid.\n");
            else if(d==29 && m==2 && (y%400==0 ||(y%4==0 && y%100!=0)))
                printf("Date is valid.\n");
            else
                printf("Day is invalid.\n");
        }
        else
        {
            printf("Month is not valid.\n");
        }
    }
    else
    {
        printf("Year is not valid.\n");
    }
 
//    return 0;    
};

int main (){
	int n,choice;
	do {
		printf("\n1.Fibonacci sequence\n");
		printf("2.Check a date\n");
		printf("3.Quit\n");
		printf("select an operation : ");
		scanf("%d",&choice);
		switch(choice){
			case 1:				
				Fibonaccisequence();		
				break;
			case 2 :
			checkadate();
			break;
	}
}
	while (choice > 0 && choice < 3);

//return 0 ;
}
