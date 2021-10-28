//
//  01-16.c
//  HSE tasks
//
//  Created by Степан Кожевников on 10.10.2021.
//

#include <stdlib.h>
#include <stdio.h>
int main(void) {
    int n, count = 0;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n-2; i++){
        for (int j = i + 2; j < n; j++){
            if (a[(i + j) / 2] == (a[i] + a[j]) / 2 && (i + j) % 2 == 0 && (a[i] + a[j]) % 2 == 0){
                count++;
            }
        }
    }
    printf("%d", count);
}
