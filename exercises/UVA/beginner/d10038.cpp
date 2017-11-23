#include <bits/stdc++.h>

using namespace std;

int main () {

    int n;
    while (scanf("%d", &n) != EOF) {
        int a, b;
        map<int, int> diffs;

        scanf("%d", &a);
        for(int i = 0; i < n - 1; i++) {
            scanf("%d", &b);
            int diff = abs(a-b);
            if(diff < n) {
                diffs[diff] = diff;
            }

            a = b;
        }

        if((int) diffs.size() == n - 1) {
            cout << "Jolly" << endl;
        } else {
            cout << "Not jolly" << endl;
        }

        diffs.clear();
    }

    return 0;
}
