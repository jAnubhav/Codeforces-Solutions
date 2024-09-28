#include <stdio.h>
#include <stdlib.h>

int main() {
    int t, n,* arr;
    scanf("%d", &t);

    while (t--) {
        char ch; scanf("%d", &n);
        arr = (int*)malloc(sizeof(int) * n);

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < 4; j++) {
                scanf(" %c", &ch);

                if (ch == '#') {
                    arr[i] = j + 1;
                }
            }
        }

        for (int i = n - 1; i >= 0; i--) {
            printf("%d ", arr[i]);
        }

        printf("\n"); free(arr);
    }

    return 0;
}