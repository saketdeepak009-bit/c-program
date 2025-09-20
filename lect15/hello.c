//#include<stdio.h>
//int main(){


    //int arr[5]= {1,4,5,65,3};

    //for (int i=0;i<n-1;i++){
       // for(int j=0;j<n-i-1;j++ ){
        //    if(arr[j]>arr[j+1]){
         //       int temp=arr[j];
         //       arr[j]=arr[j+1];
          //      arr[j+1]=temp;
           //     printf("%d");

            //}
       // }
   // }
   #include <stdio.h>
#include<limits.h>
    
   int    BSearch(){
      int arr[6]={1,2,3,4,5,6};
    int target=11;
    int s=0;
    int end=5;
    while(s<=end)
    {
        int mid=(s+end)/2;
        if(arr[mid]==target){
            return mid;
            // printf("%d",mid);
        }
        else if(arr[mid]<target){
            s=mid+1;

        }else
        {   end=mid-1;
           
        }
        

    }
    return -1;
    


}
  









