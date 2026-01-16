#include <stdio.h>
int main() {
    int i,j,T;
    scanf("%d", &T);
    for (i = 1; i <= T; i++) {
        int a, b, sum = 0;
        scanf("%d %d", &a, &b);
        for (j = a; j <= b; j++) {
            if (j % 2 != 0) {
                sum += j;
            }
        }
        printf("Case %d: %d\n", i, sum);
    }
    return 0;
}

