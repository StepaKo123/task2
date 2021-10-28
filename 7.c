
//
//  01-16.c
//  HSE tasks
//
//  Created by Степан Кожевников on 10.10.2021.
//

#include <stdlib.h>
#include <stdio.h>
int main(void) {
    int n, flag = 1;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < i; j++){
            if (a[i] == a[j]){
                flag = 0;
                break;
            }
        }
        if (flag == 0 || a[i] > n || a[i] < 1){
            flag = 0;
            break;
        }
    }
    if (flag == 1){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }
    return 0;
}
