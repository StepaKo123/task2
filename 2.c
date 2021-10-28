#include <stdlib.h>
#include <stdio.h>
int main(void) {
    int n, count = 0;
    int a[10000];
    for (int i = 0; i < 10000; i++){
        scanf("%d", &n);
        if (n == 0){
            break;
        }
        else{
            a[i] = n;
        }
        count++;
    }
    for (int j = 0; j < ((count + 1) / 2); j++){
        printf("%d ", a[j * 2]);
    }
    for (int h = count - 1 - (count % 2); h > 0; h -= 2){
        printf("%d ", a[h]);
    }
    return 0;
}
