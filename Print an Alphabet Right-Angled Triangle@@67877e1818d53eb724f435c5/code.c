#include<stdio.h>
int main(){

int n;
char ch='A';
scanf("%d",&n);
for(int i=1;i<=n;i++){
    for(int j=1;j<=1;j++){
        printf("%c",ch);
        ch++;
    }
    printf(" ");
}


    return 0;
}