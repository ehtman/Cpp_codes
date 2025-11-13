#include<stdio.h>

int main()
{

double num1, num2;
char op;

 printf("first number, operator, second number");

 scanf("%1f %c %1f",&num1,&op,&num2);

switch(op){
case '+':printf("Answer  = %1f",num1+num2);
break;

case '-':printf("Answer = %1f",num1-num2);
break;

case '*':printf("Answer = %1f",num1*num2);
break;


}

return 0;
}



