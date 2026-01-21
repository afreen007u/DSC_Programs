// factorial of a number
#include <stdio.h>

int fact(int n) {
   if (n == 0 || n == 1) {
       return 1; 
   }
   return n * fact(n - 1);
}
int main() {
   int num;
   printf("Enter a number: ");
   scanf("%d", &num);
  
  printf("Factorial of %d = %d\n", num,fact(num));
  
   return 0;
}

Output:
Enter a number: 5
Factorial of 5 = 120
