#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    while (n--) {
        int s, d;
        scanf("%d %d", &s, &d);
        int score1 = (s + d) / 2;
        int score2 = (s - d) / 2;

        if (score1 >= 0 && score2 >= 0 && (score1 + score2) == s && (score1 - score2) == d) {
            printf("%d %d\n", score1, score2);
        } else {
            printf("impossible\n");
        }
    }

    return 0;
}

