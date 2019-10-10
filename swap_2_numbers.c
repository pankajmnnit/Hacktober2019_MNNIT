#include <stdio.h>
int main()
{
      int firstNumber, secondNumber;
      printf("Enter first number: ");
      scanf("%d", & firstNumber);
      printf("Enter second number: ");
      scanf("%d", & secondNumber);
      //without using third variable
      firstNumber = firstNumber + secondNumber;
      secondNumber = firstNumber - secondNumber;
      firstNumber = firstNumber - secondNumber;
      printf("\nAfter swapping, firstNumber = %d\n", firstNumber);
      printf("After swapping, secondNumber = %d", secondNumber);

      //without using third variable different logic
      firstNumber = firstNumber * secondNumber;
      secondNumber = firstNumber / secondNumber;
      firstNumber = firstNumber / secondNumber;
      printf("\nAfter swapping, firstNumber = %d\n", firstNumber);
      printf("After swapping, secondNumber = %d", secondNumber);
      return 0;
}
