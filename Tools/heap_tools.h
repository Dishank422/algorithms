/*
 * Created by dishank on 3/2/21.
 * This file is part of the package Tools.h
 * This file gives definitions of following functions:
 *     1.) maxHeapify()
 *     2.) buildMaxHeap()
 *     3.) heapSort()
 *     4.) heapMaximum()
 *     5.) heapExtractMax()
 *     6.) increaseValue()
 */

#ifndef PROJECT2_HEAP_TOOLS_H
#define PROJECT2_HEAP_TOOLS_H

/*
 * The below function assumes that heap property is maintained
 * for left subtree and right subtree of given root node and may or may
 * not be maintained for root node. From such a heap,
 * it makes a maximum heap.
 * It takes the heap, root index and heap size as input.
 * It has O(lg(n)) time complexity.
 */
void maxHeapify(float * array, int root_index, int heap_size)
{
    int temp = root_index;
    int left = 2*root_index;
    int right = left + 1;
    if((left <= heap_size) && (array[left] > array[temp]))
        temp = left;
    if ((right <= heap_size) && (array[right] > array[temp]))
        temp = right;
    if (temp != root_index)
    {
        array[temp] = array[temp] + array[root_index];
        array[root_index] = array[temp] - array[root_index];
        array[temp] = array[temp] - array[root_index];
        maxHeapify(array, temp, heap_size);
    }
}

/*
 * The below function takes a heap and heap size as input.
 * It builds a maximum heap from given heap.
 * The given heap will be no more after this function is
 * called. It will be replaced by the corresponding maximum heap.
 * It has O(n) time complexity.
 */
void buildMaxHeap(float * array, int heap_size)
{
    for (int i = heap_size / 2; i > 0 ; --i) {
        maxHeapify(array, i, heap_size);
    }
}

/*
 * The below function sorts a heap.
 * The function takes a heap and heap size as input.
 * The given heap will be no more after this function is
 * called. It will be replaced by the corresponding sorted heap.
 * It has O(nlg(n)) time complexity.
 */
void heapSort(float * array, int heap_size)
{
    buildMaxHeap(array, heap_size);
    for (int i = heap_size; i > 1; --i) {
        array[1] = array[i] + array[1];
        array[i] = array[1] - array[i];
        array[1] = array[1] - array[i];
        maxHeapify(array, 1, i-1);
    }
}

/*
 * The below function returns the maximum element of a heap.
 * It takes a heap as input and return a float value.
 */
float heapMaximum(float * array)
{
    return *array;
}

/*
 * The below function removes the maximum element of a
 * maximum heap and makes a max heap from remaining heap.
 * Heap size will decrease by 1.
 */
void heapExtractMax(float * array, int heap_size)
{
    array[1] = array[heap_size];
    maxHeapify(array, 1, heap_size - 1);
}

/*
 * The below function increases the value of a given element
 * in a heap and remakes the new heap into a max heap.
 */
void increaseValue(float * array, int index, float newValue)
{
    array[index] = newValue;
    while ((array[index] > array[index/2]) && (index > 1))
    {
        float temp = array[index];
        array[index] = array[index/2];
        array[index/2] = temp;
    }
}

#endif //PROJECT2_HEAP_TOOLS_H
