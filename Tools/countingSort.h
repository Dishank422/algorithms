/*
 * Created by dishank on 3/8/21.
 * This file is part of the package Tools.h
 * This file gives the definition of countingSort()
 */

#ifndef PROJECT2_COUNTINGSORT_H
#define PROJECT2_COUNTINGSORT_H

void countingSort(int * array, int array_length)
{
    int array_max = 0;
    int result[array_length];
    for (int i = 0; i < array_length; ++i) {
        if (array[i] > array_max)
            array_max = array[i];
    }
    int temp_array[array_max+1];
    for (int i = 0; i < array_max + 1; ++i) {
        temp_array[i] = 0;
    }
    for (int i = 0; i < array_length; ++i) {
        temp_array[array[i]]++;
    }
    for (int i = 1; i < array_max + 1; ++i) {
        temp_array[i] += temp_array[i-1];
    }
    for (int i = array_length - 1; i >= 0; --i) {
        result[temp_array[array[i]] - 1] = array[i];
        temp_array[array[i]]--;
    }
    for (int i = 0; i < array_length; ++i) {
        array[i] = result[i];
    }
}

#endif //PROJECT2_COUNTINGSORT_H
