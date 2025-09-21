#include<stdio.h>
int main(){
    int i,j,k;
    for (i=1;i<=8;i++)
    {
        for(j=8;j>i;j--)
        {
            printf(" ");
        }
            for(k=1;k<=i;k++)
            {   
            printf("* ");
            }

        
        printf("\n");

    }



    


    int a,b;
    for(int a=1;a<=5;a++)
    {
        for(int b=1;b<=9;b++)
        {
            if(b<=6-a||b>=4+a)
            printf("* ");
            else
            printf("  ");

        }
            
        
            printf("\n");
        }
            return 0;

    }


    





