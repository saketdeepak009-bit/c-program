#include<stdio.h>
int main(){
    
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    for(int i=0;i<3;i++){
        
        for(int j=0;j<3;j++)

        {
            printf("%d ",arr[i][j]);
          
        
        
        
        }
        printf("\n");
        

    }
       //int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};

       for(int i=0;i<3;i++){
        int sum = 0;
        for(int j=0;j<3;j++)
        {
          
           sum=sum+arr[j][i];
        
           printf("%d ",sum);
        }
        printf("\n");
        

    }
       
       int arr1[9];
       int k=0;
       for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            arr1[k]=arr[i][j];
            k++;


        
        printf("%d ",arr[i][j]);
        }
        
       }
    
    return 0;
           
}

        
