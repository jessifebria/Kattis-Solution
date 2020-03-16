#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char x[1001];
    char y[1001];
    int a,b;
    scanf("%s", &x);
    scanf("%s", &y);
    a = strlen(x);
    b = strlen(y);

    if (a>=b){
        printf("go");
    }
    else {
        printf("no");
    }



return 0;
}
