//Reverse of the array
#include"stdio.h"
void main(){
    int arr[5];
    int brr[5];
    for(int i=0;i<=4;i++){
        printf("Enter the element: ");
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<=4;i++){
        brr[i]=arr[4-i];
    }
     for(int i=0;i<=4;i++){
        printf("%d ",brr[i]);
    }
}