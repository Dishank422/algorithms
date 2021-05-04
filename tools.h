/*
 * Created by dishank on 31/12/20.
 * This header file contains some useful functions
 * that may be used in the project to avoid writing
 * the same code again and again.
 * Currently this file contains the following functions:
 *    1). void insertionSort(float * ptr, int array_length)
 *    2). void mergeSort(float *ptr, int array_length)
 *    3). int linearSearch(float *ptr, int array_length, float Element_to_be_found)
 *    4). int binarySearch(float *ptr, int array_length, float Element_to_be_found)
 *    5). float maxSubarray(float * ptr, int array_length)
 *    6). heap tools:
 *                   a) void maxHeapify(float * array, int index_of_root_element)
 *                   b) void buildMaxHeap(float * array, int heap_size)
 *                   c) void heapSort(float * array, int heap_size)
 *                   d) float heapMaximum(float * array)
 *                   e) void heapExtractMax(float * array, int heap_size)
 *                   f) void increaseValue(float * array, int index, float newValue)
 *    7). void quickSort(float * array, int array_length)
 *    8). void countingSort(int * array, int array_length)
 *    9).
 */

#ifndef PROJECT2_TOOLS_H
#define PROJECT2_TOOLS_H

/*
 * The below header file contains the function:
 * void insertionSort(float * ptr, int array_length)
 * It has O(n^2) time complexity
 * It takes the pointer to the first array element and array length as input.
 * The function does not return any value and replaces the original array
 * with the sorted version of the original array in the same memory location.
 * Note that the original array will get lost.
 * The array is sorted in ascending order.
 * The function definition can be found in Tools/insertionSort.h
 */
#include "Tools/insertionSort.h"

/*
 * The below header file contains the function:
 * void mergeSort(float *ptr, int array_length)
 * It has theta(nlg(n)) time complexity
 * It takes the pointer to the first array element and array length as input.
 * The function does not return any value and replaces the original array
 * with the sorted version of the original array in the same memory location.
 * Note that the original array will get lost.
 * The array is sorted in ascending order.
 * The function definition can be found in Tools/mergeSort.h
 */
#include "Tools/mergeSort.h"

/*
 * The below header file contains the function:
 * int linearSearch(float array[], int array_length, float Element_to_be_found)
 * It has theta(n) time complexity.
 * It takes an array, array length and Element to be found as input.
 * The function returns the index of the first occurrence of the Element to be found.
 * If the element does not occur even once, the function returns -1.
 * The function definition can be found in Tools/linearSearch.h.
 */
#include "Tools/linearSearch.h"

/*
 * Important: The array should be pre-sorted.
 * The below header file contains the function:
 * int binarySearch(float array[], int array_length, float Element_to_be_found)
 * It has O(lg(n)) time complexity.
 * It takes an array, array length and Element to be found as input.
 * The function returns the index of the element to be found.
 * If the element does not occur even once, the function returns -1.
 * The function definition can be found in Tools/binarySearch.h.
 */
#include "Tools/binarySearch.h"

/*
 * The below header file contains the function:
 * float maxSubarray(float *ptr, int array_length)
 * It has theta(n) time complexity.
 * It takes an array and array length as input and returns the
 * maximum subarray for the given array.
 * The function definition can be found in Tools/maxSubarray.h
 */
#include "Tools/maxSubarray.h"

/*
 * The below header file contains some tools for dealing with heaps.
 * List of available functions is given in description of the
 * header file at the top of the file.
 * Description of each function is given right before
 * function definition  in the same file.
 * Do note that in a heap, the index 0 of array shall be unused and
 * heap size is the  number of elements in the heap starting from 1.
 * Array length will be (heap size) + 1.
 * Root node will be array[1].
 */
#include "Tools/heap_tools.h"

/*
 * The below header file contains the following function:
 * void quickSort(float * array, int array_length)
 * Worst case running time is theta(n^2)
 * Average case running time is O(nlog(n))
 * It takes an array and array length as input
 * and sorts the array
 */
#include "Tools/quickSort.h"

/*
 * The below header file contains the following function:
 * void countingSort(int * array, int array_length)
 * It runs in linear time.
 * It takes an array and array length as input
 * and sorts the array.
 * The array must be integer valued with non-negative numbers.
 */
#include "Tools/countingSort.h"

#endif //PROJECT2_TOOLS_H
