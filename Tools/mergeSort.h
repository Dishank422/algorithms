/*
 * Created by dishank on 31/12/20.
 * This file is part of the package Tools.h
 * This file gives the definition of the function mergeSort().
 */

#ifndef PROJECT2_MERGESORT_H
#define PROJECT2_MERGESORT_H
#include <float.h>
void mergeSort(float *ptr, int array_length)
{
    if(array_length > 1)
    {
        int sub_array_length1 = array_length / 2;
        float arr1[sub_array_length1 + 1];
        int sub_array_length2 = array_length - sub_array_length1;
        float arr2[sub_array_length2 + 1];
        for (int i = 0; i < sub_array_length1; ++i) {
            arr1[i] = *ptr;
            ptr++;
        }
        for (int i = 0; i < sub_array_length2; ++i) {
            arr2[i] = *ptr;
            ptr++;
        }
        ptr = ptr - array_length;
        arr1[sub_array_length1] = FLT_MAX;
        arr2[sub_array_length2] = FLT_MAX;
        mergeSort(&arr1[0], sub_array_length1);
        mergeSort(&arr2[0], sub_array_length2);
        int h = 0, k = 0;
        for (int i = 0; i < array_length; ++i)
        {
            if (arr1[h] < arr2[k])
            {
                *ptr = arr1[h];
                h = h + 1;
            }
            else
            {
                *ptr = arr2[k];
                k = k + 1;
            }
            ptr++;
        }
    }
}
#endif //PROJECT2_MERGESORT_H
