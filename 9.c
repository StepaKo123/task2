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
    int step, summ;
    for (int i = m-1; i > -1; i--){
        step = 1;
        summ = 0;
        for (int j = 0; j < n; j++){
            summ += step * a[j];
            step *= b[i];
        }
        printf("%d ", summ);
    }
}
