/*
 * Created by dishank on 3/7/21.
 * This file is part of the package Tools.h
 * This file gives the definition of the function insertionSort().
 */

#ifndef PROJECT2_INSERTIONSORT_H
#define PROJECT2_INSERTIONSORT_H

void insertionSort(float * array, int array_length)
{
    for (int i = 0; i < array_length; ++i) {
        for (int j = i + 1; j < array_length; ++j) {
            if (array[i] > array[j])
            {
                float temp = array[j];
                array[j] = array[i];
                array[i] = temp;
            }
        }
    }
}

#endif //PROJECT2_INSERTIONSORT_H
