//diffrence b/w even indices element and odd indices elements
    for(int i=0;i<=6;i++){
        if (i%2==0)
        {
            sumEven=sumEven+arr[i];
        }else{
            sumOdd=sumOdd+arr[i];
        }
    }
    printf("\nThe differnce is  %d",sumEven-sumOdd);
}