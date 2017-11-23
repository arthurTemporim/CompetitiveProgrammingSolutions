#include <bits/stdc++.h>

using namespace std;

int main () {

    int n; scanf("%d", &n);
    int v[n];
    priority_queue<int> impares;
    priority_queue<int, vector<int>, greater<int> > pares;

    for(int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }

    for(int i = 0; i < n; i++) {
        if (v[i] % 2 == 0) {
            pares.push(v[i]);
        } else {
            impares.push(v[i]);
        }
    }


    while(!pares.empty()) {
        printf("%d\n", pares.top());
        pares.pop();
    }

    while(!impares.empty()) {
        printf("%d\n", impares.top());
        impares.pop();
    }

    return 0;
}
