#include <stdio.h>
int main() {

    char operator;
    double num1, num2,result;
    int validInput = 1;

printf("Enter an Operator : ");
scanf("%c",&operator);

if (operator == '+'||operator == '-' || operator == '*'||operator == '/')
{
    printf("Enter Two numbers : ");
    scanf("%lf %lf",&num1,&num2);
}else{
    validInput = 0;
    printf("Invalid operator");
}

switch (operator)
{
case '+':
    result = num1 + num2;
    break;

case '-':
    result = num1 - num2;
    break;

case '*':
    result = num1 * num2;
    break;

case '/':
    if (num2 !=0)
    {
        result=num1 / num2;
    }else{
        validInput = 0;
        printf("Wanna Devide By Zero?");
    }

    break;

default:
    break;
}

if (validInput)
{
    printf("Results : %.2lf",result );
}

return 0;
}