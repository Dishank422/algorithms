#include <stdio.h>
#include "tools.h"

int main()
{
    float a[8] = {3,2,4,5,6,7,4,3};
    insertionSort(a, 8);
    for (int i = 0; i < 8; ++i) {
        printf("%f ", a[i]);
    }
    return 0;
}