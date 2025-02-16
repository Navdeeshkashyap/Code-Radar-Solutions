#include<stdio.h>
int main(){
int a ,b;
char op;
scanf("%d %d %c",&a,&b,&op);
switch(op){
    case'+':
     int result=a+b;
    printf("%d",result);
    break;
case'-':
     int result=a-b;
    printf("%d",result);
break;
case'*':
     int result=a*b;
    printf("%d",result);
break;
case'/':
     int result=a/b;
    printf("%d",result);
break;
}
    return 0;
}