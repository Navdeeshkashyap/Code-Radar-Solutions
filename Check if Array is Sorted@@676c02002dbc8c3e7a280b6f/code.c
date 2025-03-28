#include<stdio.h>
int main(){
int n;
int arr[n];
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
for(int i=0;i<n;i++){
    if(arr[i+1]>arr[i]){
        printf("Sorted");
    }
    else{
        printf("Not Sorted");
    }
}


    return 0;
}