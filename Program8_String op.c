//Performing various string operations

#include <stdio.h>
#include<string.h>

int main(){
char str1[20]="Hello";
char str2[20]="World";
char str3[40];
int length;

//Finding string length
length=strlen(str1);
printf("Length of str1:%d\n",length);

//Copying a string
strcpy(str3,str1);
printf("str3 after strcpy:%s\n",str3);

//Concatenation
strcat(str3," ");
strcat(str3,str2);
printf("str3 after strcat:%s\n",str3);

//Comparing two strings
if(strcmp(str1,str2)==0)
{
    printf("Strings are equal\n");
}
else{
    printf("Strings are different\n");
}

//Reverse of string
printf("Original:%s | Reversed:",str1);
for(int i=strlen(str1)-1;i>=0;i--)
{
    printf("%c",str1[i]);
}
printf("\n");

    return 0;
}
