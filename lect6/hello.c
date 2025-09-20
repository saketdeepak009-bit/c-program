#include<stdio.h>
int main(){
//     int i,j,k;
//     for(i=1;i<=8;i++)
//     {
//         for(j=1;j<=8;j++)
//         {
//             printf(" ");

//         }
//         for(k=1;k<=i;k++)

//         {
//             printf("* ");

//         }
//         printf("\n");

//     }
//      return 0;
// }
// int i,j,k;
int i,j,k;
    for(i=1;i<=8;i++)
    {
        for(j=1;j<i;j++)
        {
            printf(" ");

        }
        for(k=i;k<=8;k++)

        {
            printf("*");

        }
        printf("\n");

    }
     return 0;
}
