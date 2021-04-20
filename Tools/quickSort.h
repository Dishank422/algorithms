/*
 * Created by dishank on 3/5/21.
 * This file is part of the package Tools.h
 * This file gives the definition of the function quickSort().
 */

#ifndef PROJECT2_QUICKSORT_H
#define PROJECT2_QUICKSORT_H

void quickSort(float * array, int array_length)
{
    if (array_length > 1)
    {
        int i = -1;
        for (int j = 0; j < array_length - 1; ++j) {
            if (array[j] < array[array_length - 1])
            {
                i++;
                float temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
        float temp = array[i+1];
        array[i+1] = array[array_length - 1];
        array[array_length - 1] = temp;
        quickSort(array, i+1);
        quickSort(array + i + 2, array_length - i - 2);
    }
}

#endif //PROJECT2_QUICKSORT_H
