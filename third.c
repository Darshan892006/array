//odd indexed elements are multiple of 2 & even indexed elements are increment by 10
#include"stdio.h"
void main(){
      int arr[8];
      for(int i=0;i<=7;i++){
      printf("Enter the elements: ");
      scanf("%d",&arr[i]);
      }
      for(int i=0;i<=7;i++){
        if (i%2==0)
        {
            arr[i]=arr[i]+10;
        }
        else if (i%2!=0)       {
            arr[i]=arr[i]*2;
        }
      }
      for (int i = 0; i <=7; i++)
      {
        printf("\n%d",arr[i]);
      }  
}