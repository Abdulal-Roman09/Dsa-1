#include<stdio.h>

int main(){


    int size,i,j,temp;
    printf("plz enter the size of arr:");
    scanf("%d",&size);
    int arr[size];
    printf("plz enter the elelment of arr:");


    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-1-i;j++){
            if(arr[j]>arr[j+i]){
                int temp=arr[j];
                arr[j]=arr[j+i];
                arr[j+i]=temp;
            }
        }
    }
    printf("the sorted array is :");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }


    return 0;
}