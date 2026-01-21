//Program to perform addition and multiplication of array elements

#include <stdio.h>

int main() {
    int i, j,k, a[3][3], b[3][3], c[3][3];
   
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
      printf("matrix multiplication:\n");
    for(i=0;i<3;i++) 
    {
      for(j=0;j<3;j++) 
      {
        c[i][j]=0;
        for(k=0;k<3;k++) 
        {
            c[i][j]+=a[i][k]*b[k][j];
        }
        printf("%d\t",c[i][j]);
    }
    printf("\n");
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
matrix multiplication:
3	3	3	
3	3	3	
3	3	3
