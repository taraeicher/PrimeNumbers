/*Program description: Prints all primes less than or equal to a given integer entered by the user. Handles negative numbers and zeros.
*	 Does not handle other characters. For decimal entries, uses the integer value only.
* Programmer Name: Tara Eicher
* WSU ID: z847x563
* Date Completed: 22 October 2012
*/

#include<stdio.h>

//This function will get the input value from the user which is to be used in the program.

int get_user_input(void);

//The input candidate is tested for divisor values from 2 up through its value.

int is_prime(int number);

//Main function

int main(void)
{
   //Prompt for and store input.

   int input=get_user_input();

   //Handle exceptional cases.

   if(input<0)
      printf("\n\nThe number %d is an invalid entry because a negative number can never be prime.\n",input);
   else if(input==0||input==1)
      printf("\n\nThere are no prime numbers leading up to %d.\n",input);
   else
   {
      printf("\n\nThe following prime numbers are less than or equal to %d:\n",input); 
      //Test each number below the number entered.

      int j;
      for(j=2;j<=input;++j)
      {
         if(is_prime(j)==1)
            printf("%d\n",j);
      }
   }

   //Exit the program.

   return(0);
}

//This function will get the input value from the user which is to be used in the program.

int get_user_input(void)
{
   int entry;
   printf("Please enter an integer: ");
   scanf("%d",&entry);
   return(entry); 
}

//The input candidate is tested for divisor values from 2 up through its value.

int is_prime(int number)
{
   //Take the square root of the number.
   //See if the input is divisible by any number up to its integer square root.
   //If it is, return that it is not prime. Else, it is prime.

   int isPrime=1;
   int i;
   for(i=2;i<number;++i)
   {
      if(number%i==0)
         isPrime=0;
   }
   return(isPrime);
}
