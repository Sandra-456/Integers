#include <stdio.h>
#include <stdlib.h>

int main()
{int n,i;
    int sum = 0;
    printf("Enter the number:");
    scanf("%d",&n);
    sum = (n*(n+1))/2;
    printf("sum of the series:");
    for(i=1;i<= n;i++){
        if (i!=n)
            printf("%d +",i);else
            printf("%d=%d",i ,sum);
    }


    return 0;
    return 0;
}
