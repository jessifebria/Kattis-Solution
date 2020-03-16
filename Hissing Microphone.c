#include <stdio.h>
#include <stdlib.h>
int main()
{
    char x[30];
    scanf("%s", &x);

    if (strstr(x, "ss") != 0) {
        printf("hiss");
    }
    else {
        printf("no hiss");
    }

return 0;
}
