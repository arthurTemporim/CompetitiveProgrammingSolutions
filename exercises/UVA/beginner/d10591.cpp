#include <bits/stdc++.h>

using namespace std;

int main () {

    int n; scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        int x; scanf(" %d", &x);

        int y = x, sum = 0, d;

        while (x != 1) {
            sum = 0;

            while (x != 0) {
                d = x % 10;
                x = x / 10;
                sum += (d * d);
            }
            x = sum;

            if (x <= 9) {
                break;
            }
        }

        if (x == 1) {
            printf("Case #%d: %d is a Happy number.\n", i, y);
        } else {
            printf("Case #%d: %d is an Unhappy number.\n", i, y);
        }
    }

    return 0;
}
