#include <stdio.h>

using namespace std;

int main(int argc, const char *argv[])
{
    int a, b;
    int n;

    for(a =0; a < 5; puts(""), ++a)
    {
        n = 0;
        for(b = 5; b > a; n +=2 * (b--))
        {
            if(b > a + 1) {
                printf("%d + ",2 * b);
            }
            else {
                printf("%d ",2 * b);
            }
        }
        for (int c = 0; c <= a; c++) printf("");
        printf("= %d",n);
    }
    printf("----------\n");
    printf("110\n");

return(0);

}