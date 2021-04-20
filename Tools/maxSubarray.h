/*
 * Created by dishank on 2/22/21.
 * This file is a part of the package tools.h
 * This file gives the definition of the function maxSubarray()
 */

#ifndef PROJECT2_MAXSUBARRAY_H
#define PROJECT2_MAXSUBARRAY_H

float maxSubarray(float * array, int array_length)
{
    float maxSum = array[0];
    float currentSum = array[0];
    for (int i = 1; i < array_length; ++i) {
        currentSum += array[i];
        if (currentSum < 0) currentSum = 0;
        if (currentSum > maxSum) maxSum = currentSum;
    }
    return maxSum;
}

#endif //PROJECT2_MAXSUBARRAY_H
