/*
 * Created by dishank on 03/01/21.
 * This file is part of the package Tools.h
 * This file gives the definition of the function binarySearch().
 */

#ifndef PROJECT2_BINARYSEARCH_H
#define PROJECT2_BINARYSEARCH_H
int binarySearch(const float array[], int array_length, float Element_to_be_found)
{
    int min = 0;
    int max = array_length - 1;
    int mid = (min + max)/2;
    while (min <= max)
    {
        if (Element_to_be_found == array[mid])
        {
            return mid;
        }
        else if (Element_to_be_found > array[mid])
        {
            min = mid + 1;
            mid = (min + max)/2;
        }
        else if (Element_to_be_found < array[mid])
        {
            max = mid - 1;
            mid = (min + max)/2;
        }
    }
    return -1;
}
#endif //PROJECT2_BINARYSEARCH_H
