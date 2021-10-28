#include <stdio.h>
#include <stdlib.h>
int cmp(const void *a, const void *b) {
    return *(int*)a - *(int*)b;
}

int max_in_arr(int* arr, unsigned int size) {
    int min = arr[0];

    for (unsigned int i = 1; i < size; i++)
        if (arr[i] > min) min = arr[i];

    return min;
    }

int main(void) {
    int n = 8;
    int a[n];
    for(int i = 0 ; i < n; i++) {
        scanf("%d", &a[i]);
    }
    qsort(a, n, sizeof(int), cmp );
    int b[n];
    for(int i = 0 ; i < n; i++) {
        scanf("%d", &b[i]);
    }
    qsort(b, n, sizeof(int), cmp );
    int max1 = max_in_arr(a, 8), max2 = max_in_arr(b, 8);
    if (max1 == max2){
        int fl = 0, sum = 0;
        for (int i = 0; i < 8; i++){
            sum += a[i];
            for (int j = fl; i < 8; i++){
                if (a[i] == b[j]){
                    fl = j + 1;
                    sum -= a[i];
                    break;
                }
            }
            sum += b[i];
        }
        printf("%d", sum);
    }
    else{
        printf("%d", -1);
    }
    return 0;
}
