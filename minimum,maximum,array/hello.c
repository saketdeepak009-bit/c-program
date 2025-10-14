#include<stdio.h>
int main()
{

   // maximum value 



    // int a[100],size,i,max;
    // printf("enter size of array: ");
    // scanf("%d",&size);
    // printf("enter value in array: ");
    // for(i=0;i<size;i++)
    // {
    //     scanf("%d",&a[i]);
    // }
    // max=a[0];
    // for(i=0;i<size;i++)
    // {
    //     if(a[i]>max)
    //     {
    //         max=a[i];

    //     }
    // }
    // printf("maximum value of array: %d",max);

    

     // minimum value

    int a[100],size,i,min;
    printf("enter size of array: ");
    scanf("%d",&size);
    printf("enter value in array: ");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    min=a[0];
    for(i=0;i<size;i++)
    {
        if(a[i]<min)
        {
        min=a[i];

        }
    }
    printf("minimum value of array: %d",min);
    return 0;

}