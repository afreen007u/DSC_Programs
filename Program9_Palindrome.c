//Program to find Palindrome of a string

#include <stdio.h>
#include <string.h>

int main() {
  char a[50], b[50];
  printf("Enter a string:");
  scanf("%s",&a);
  strcpy(b,a);
  strrev(b);
  if(strcmp(a,b)==0)
  {
      printf("It is a Palindrome");
  }
  else
  {
      printf("It is not a Palindrome");
  }
    return 0;
}
