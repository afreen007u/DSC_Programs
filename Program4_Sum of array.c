//Program to perform addition of array elements

#include <stdio.h>

int main() {
    int i, j, a[3][3], b[3][3], c[3][3];
   
    printf("enter first array elements:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
     printf("enter second array elements:\n");
     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("Sum of matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    } 
     "\n");
    }
    return 0;
}


Output:
enter first array elements:
1 1 1
1 1 1
1 1 1
enter second array elements:
1 1 1
1 1 1
1 1 1
Sum of matrix:
2	2	2	
2	2	2	
2	2	2	

