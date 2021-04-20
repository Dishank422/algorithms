/*
 * Created by dishank on 02/01/21.
 * This file is part of the package Tools.h
 * This file gives the definition of the function linearSearch().
 */

#ifndef PROJECT2_LINEARSEARCH_H
#define PROJECT2_LINEARSEARCH_H
int linearSearch(const float array[], int array_length, float Element_to_be_found)
{
    for (int i = 0; i < array_length; ++i)
    {
        if (Element_to_be_found == array[i])
        {
            return i;
        }
    }
    return -1;
}
#endif //PROJECT2_LINEARSEARCH_H
