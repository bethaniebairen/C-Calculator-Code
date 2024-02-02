#include <stdio.h>
/* CSE 130-50-4242-Intro to C & C++ Spring 2024 February 2, 2024: Lab programming assignment 3 featuring a program to create a calculator program
 using programming language C using loops, by Bethanie Bairen
*/
int main()
{
 // This section of code will be the input   
   int operator = 0;
   int num1, num2, num3 = 0;
   float amount;
   int activeQuery = 1;
  
  
  
  while(activeQuery==1) {
   // This section of code will the menu of the calculator
   printf("\nChoose from the following on the Calculator Menu: \n");
   printf("\t1) Addition +\n");
   printf("\t2) Subtraction -\n");
   printf("\t3) Multiplication *\n");
   printf("\t4) Division /\n");
   printf("\t5) Modulus (Integers Only)\n");
   printf("\t6) Test if prime number (Integers Only)\n");
   printf("\t7) Exit\n\n");
   scanf("%d", &operator);
   
// This section of code will the switch case of the calculator
   switch (operator) {
    case 1:
    printf("\nYou selected 'Addition'\n");
    printf("Input your first number: ");
    scanf("%d", &num1);
    printf("Input your second number: ");
    scanf("%d", &num2); 
    amount = num1 + num2;
    printf (" The sum is: %.f", amount, "\n");
    break;
 
    case 2:
    printf("\nYou selected 'Subtraction'\n");
    printf("Input your first number: ");
    scanf("%d", &num1);
    printf("Input your second number: ");
    scanf("%d", &num2); 
    amount = num1 - num2; 
    printf (" The difference is: %.f", amount, "\n");
    break;

    case 3:
    printf("\nYou selected 'Multiplication'\n");
    printf("Input your first number: ");
    scanf("%d", &num1);
    printf("Input your second number: ");
    scanf("%d", &num2); 
    amount = num1 * num2; 
    printf (" The product is: %.f", amount, "\n");
    break;

    case 4:
    printf("\nYou selected 'Division'\n");
    printf("Input your first number: ");
    scanf("%d", &num1);
    printf("Input your second number: ");
    scanf("%d", &num2); 
    amount = num1 / num2; 
    printf (" The quotient is: %.f", amount, "\n");
    break;

    case 5:
    printf("\nYou selected 'Modulus'\n");
    printf("Input your first number: ");
    scanf("%d", &num1);
    printf("Input your second number: ");
    scanf("%d", &num2);
    amount = num1 % num2; 
    printf (" The remainder is: %.f", amount, "\n");
    break;

    case 6:
    printf("\nYou selected 'Test if prime number'\n");
    printf("Input your test number: ");
    scanf("%d", &num3);
    int i, remCheck = 0;
    for(i=2; i<=num3/2; ++i) {
        if(num3%i==0){
            remCheck = 1;
            break;
        }
    }
    // This section of code will be the if else statement of the code
    if(remCheck==0){
        printf("%d is prime.",num3, "\n");
    }
    else{
        printf("%d is not prime.",num3, "\n");
    }
    break;
    

    case 7:
    printf("\nGoodbye!\n");
    activeQuery = 0;
    break;
   }
  printf("\n");

} 
}   

