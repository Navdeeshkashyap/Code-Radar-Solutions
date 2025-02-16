#include<stdio.h>
int main(){
int a ,b;
char op;
scanf("%d %d %c",&a,&b,&op);
int result;
switch(op){
    case'+':
    result=a+b;
    printf("%d",result);
    break;
case'-':
     result=a-b;
    printf("%d",result);
break;
case'*':
     result=a*b;
    printf("%d",result);
break;
case'/':
     result=a/b;
    printf("%d",result);
break;
}
    return 0;
}