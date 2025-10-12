#include <stdio.h>
void quick(int a[], int left, int right) {
    if (left >= right) return;

    int pivot = a[left];
    int i = left;
    int j = right;

    while (i < j) {
        while (i < j && a[j] >= pivot) j--;
        while (i < j && a[i] <= pivot) i++;

        if (i < j) {
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }
    a[left] = a[i];
    a[i] = pivot;

    quick(a, left, i - 1);
    quick(a, i + 1, right);
}
int main(void)
{
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    quick(a, 0, n-1);
    for(int i=n-1; i>=0; i--){
        printf("%d ", a[i]);
    }
}