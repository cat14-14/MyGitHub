#include "sort.h"
#include <stdlib.h>

// -------------------------
// Bubble Sort
// -------------------------
static void bubble_sort(int *arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
}

// -------------------------
// Selection Sort
// -------------------------
static void selection_sort(int *arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[min_idx])
                min_idx = j;
        }
        int tmp = arr[i];
        arr[i] = arr[min_idx];
        arr[min_idx] = tmp;
    }
}

// -------------------------
// Insertion Sort
// -------------------------
static void insertion_sort(int *arr, int size) {
    for (int i = 1; i < size; i++) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

// -------------------------
// Quick Sort
// -------------------------
static int partition(int *arr, int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            int tmp = arr[i];
            arr[i] = arr[j];
            arr[j] = tmp;
        }
    }

    int tmp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = tmp;

    return i + 1;
}

static void quick_sort_impl(int *arr, int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quick_sort_impl(arr, low, pi - 1);
        quick_sort_impl(arr, pi + 1, high);
    }
}

static void quick_sort(int *arr, int size) {
    quick_sort_impl(arr, 0, size - 1);
}

// -------------------------
// Merge Sort
// -------------------------
static void merge(int *arr, int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int *L = (int*)malloc(n1 * sizeof(int));
    int *R = (int*)malloc(n2 * sizeof(int));

    for (int i = 0; i < n1; i++) L[i] = arr[left + i];
    for (int i = 0; i < n2; i++) R[i] = arr[mid + 1 + i];

    int i = 0, j = 0, k = left;

    while (i < n1 && j < n2)
        arr[k++] = (L[i] <= R[j]) ? L[i++] : R[j++];

    while (i < n1) arr[k++] = L[i++];
    while (j < n2) arr[k++] = R[j++];

    free(L);
    free(R);
}

static void merge_sort_impl(int *arr, int left, int right) {
    if (left < right) {
        int mid = (left + right) / 2;
        merge_sort_impl(arr, left, mid);
        merge_sort_impl(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}

static void merge_sort(int *arr, int size) {
    merge_sort_impl(arr, 0, size - 1);
}

// -------------------------
// Shell Sort
// -------------------------
static void shell_sort(int *arr, int size) {
    for (int gap = size / 2; gap > 0; gap /= 2) {
        for (int i = gap; i < size; i++) {
            int temp = arr[i];
            int j;
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap)
                arr[j] = arr[j - gap];
            arr[j] = temp;
        }
    }
}

// -------------------------
// External sort function
// -------------------------
void sort(int *arr, int size, SortType type) {
    switch (type) {
        case SORT_BUBBLE:    bubble_sort(arr, size);   break;
        case SORT_SELECTION: selection_sort(arr, size); break;
        case SORT_INSERTION: insertion_sort(arr, size); break;
        case SORT_QUICK:     quick_sort(arr, size); break;
        case SORT_MERGE:     merge_sort(arr, size); break;
        case SORT_SHELL:     shell_sort(arr, size); break;
    }
}
