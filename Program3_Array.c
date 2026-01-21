//Enter and print array elements

#include <stdio.h>

int main() {
    int i, j, a[3][3];
   
    printf("enter array elements:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("array elements are:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}

Output:
enter array elements:
1 2 3
4 5 6
7 8 9
array elements are:
1	2	3	
4	5	6	
7	8	9	
