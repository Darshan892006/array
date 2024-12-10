//min value of the array
#include"stdio.h"
void main(){
      int arr[5];
      for(int i=0;i<=4;i++){
      printf("Enter the elements: ")
      scanf("%d",&arr[i]);
      }
      int min=arr[0];
      for(int i=1;i<=5;i++){
        if (min>arr[i])
        {
          min=arr[i];
        }
      }
      printf("%d",min);
}