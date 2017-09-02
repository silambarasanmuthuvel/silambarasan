#include <stdio.h>


int main(void) 
{

int number1,number3,number2;

scanf("%d %d %d",number1,number2,number3);
if((number1>number2)&&(number1>number3))
printf("number1 is larger");
else if(number2>number3)
printf("number2 is larger");
else
printf("number3 is larger");
return 0;
}