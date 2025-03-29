#include<stdio.h>

int linsearch(int *arr,int n,int t){
    for(int i=0;i<n;i++){
        if(t==arr[i]){
            return i;
        }
    }
    return -1;
}
int main(){

int n,t;
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}

scanf("%d",t);
printf("%d",linsearch(arr,n,t));

    return 0;
}