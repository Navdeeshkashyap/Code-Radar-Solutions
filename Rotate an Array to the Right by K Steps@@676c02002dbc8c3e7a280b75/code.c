#include<stdio>
void revarr(int *arr,int str,int end){
    while(str<end){
    int temp=arr[str];
    arr[str]=arr[end];
    arr[end]=temp;
    str++,end--;
    }

}
int main(){

int n,k;
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
scanf("%d",&k);
revarr(arr,0,n-1);
revarr(arr,k,k-1);
revarr(arr,k,n-1);
for(int i=0;i<n;i++){
    printf("%d\n",arr[i]);
}
    return 0;
}