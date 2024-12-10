//count the number of elements in array is greater than the value of n
#include"stdio.h"
void main(){
      int arr[5];
      for(int i=0;i<=4;i++){
      printf("Enter the elements: ");
      scanf("%d",&arr[i]);
      }
      int n,count=0;
      printf("enter the value of n: ");
      scanf("%d",&n);
      for(int i=0;i<=4;i++){
        if (n<arr[i])
        {
            count++;
        }
      }
      printf("%d",count);
}