#include<stdio.h>
int main(){

int n;
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
int freq[n];
for(int i=0;i<n;i++){
    freq[i]=-1;
for(int i=0;i<n;i++){
    int count=1;
    for(int j=i+1;i<n;i++){
        if(arr[i]==arr[j]){
            count++;
            freq[j]=0;
        }
        if(freq!=0){
    freq[i]=count;}
    }
}
for(int i=0;i<n;i++){
    printf("%d %d\n", arr[i], freq[i]);
}

    return 0;
}