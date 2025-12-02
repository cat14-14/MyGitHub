#ifndef SORT_H
#define SORT_H

typedef enum {
    SORT_BUBBLE,
    SORT_SELECTION,
    SORT_INSERTION,
    SORT_QUICK,
    SORT_MERGE,
    SORT_SHELL
} SortType;

// arr: 정렬할 배열, size: 길이, type: 어떤 정렬 쓸지
void sort(int *arr, int size, SortType type);

#endif
