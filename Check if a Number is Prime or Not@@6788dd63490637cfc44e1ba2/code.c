#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
for(int i=2;i*i<=n;i++){
    if(n%i==0){
        printf("Not prime");
    }
    else{
        printf("Prime");
    }
}
    return 0;
}