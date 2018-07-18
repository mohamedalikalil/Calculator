#include<stdio.h>
main()
{
int num1, num2;
char Char;
printf("1:(+)\n2:(-)\n3:(/)\n4:(*)\nEnter a choice: ");
scanf("%c", &Char);
printf("Enter the first number: ");
scanf ("%d", &num1);
printf("Enter the second number: ");
scanf("%d", &num2);
if(Char == '+' || Char == '1')
printf("%d + %d = %d\n", num1, num2, num1+num2);
else if(Char == '-' || Char == '2')
printf("%d - %d = %d\n", num1, num2, num1-num2);
else if(Char == '/' || Char == '3')
printf("%d / %d = %d\n", num1, num2, num1/num2);
else if(Char == '*' || Char == '4')
printf("%d * %d = %d\n", num1, num2, num1*num2);
else
printf("Error in choice!\nExiting...\n");
}
