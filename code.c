#include <stdio.h>

int main() {
    int t, n, sum, temp, par;
    scanf("%d", &t);

    while (t--) {
        scanf("%d", &n);

        sum = 0, par = 1;
        while (n--) {
            scanf("%d", &temp);

            sum += temp * par;
            par *= -1;
        }

        printf("%d\n", sum);
    }

    return 0;
}