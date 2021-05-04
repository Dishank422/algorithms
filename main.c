#include <stdio.h>
#include "tools.h"

int main()
{
    int a[8] = {3,2,4,5,6,7,4,3};
    countingSort(a, 8);
    for (int i = 0; i < 8; ++i) {
        printf("%d ", a[i]);
    }
    return 0;
}