
//
//  01-16.c
//  HSE tasks
//
//  Created by Степан Кожевников on 10.10.2021.
//

#include <stdlib.h>
#include <stdio.h>
int main(void) {
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    int m;
    scanf("%d", &m);
    int b[m];
    for (int i = 0; i < m; i++){
        scanf("%d", &b[i]);
    }
    if (m < n){
        for (int i = 0; i < m; i++){
            printf("%d ", a[i]);
            printf("%d ", b[i]);
        }
        for (int i = m; i < n; i++){
            printf("%d ", a[i]);
        }
    }
    else{
        for (int i = 0; i < n; i++){
            printf("%d ", a[i]);
            printf("%d ", b[i]);
        }
        for (int i = n; i < m; i++){
            printf("%d ", b[i]);
        }
    }
}
