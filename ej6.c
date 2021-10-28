#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int const n= 3;
    double v1[n];
    double v2[n];
    int prev= 0;
    for (size_t i = 0; i < n; i++)
    {
        if (prev != 0) {
            v1[i]= prev + 2;
            v2[i]= prev + 2;
        } else {
            v1[i]= 2;
            v2[i]= 2;
            prev= i + 2;
        }
    }
    double r= 0;
    for (size_t i = 0; i < 3; i++)
    {
        r+= v1[i] * v2[i];
    }
    printf("%lf\n", r);
    return 0;
}
