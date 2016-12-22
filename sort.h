//
// Created by ahmad on 12/22/16.
//

#ifndef SORTALGORITHM_SORT_H
#define SORTALGORITHM_SORT_H
template<class T>
void insertion_sort(T arr[], int size);

template<class T>
void bubble_sort(T arr[], int size);

template<class T>
void merge_sort(T arr[], int size);

template<class T>
void quick_sort(T arr[], int size);

template<class T>
void selection_sort(T arr[], int size);

template<class T>
void heap_sort(T arr[], int size);

#include "sort.cpp"
#endif //SORTALGORITHM_SORT_H
