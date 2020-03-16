#include <stdio.h>
#include <stdlib.h>

int main()
{
    float b,c,e;
    int a,i;
    scanf("%d", &a);
    e=0 ;
    for (i=1; i<=a;i++){
        scanf("%f",  &b);
        scanf("%f",  &c);
        e = e+ (b*c) ;
    }
    printf("%.3f \n", e);

    return 0;
}
