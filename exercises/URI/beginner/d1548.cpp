#include <bits/stdc++.h>

using namespace std;

bool sorting (int i, int j) {
    return i > j;
}

int main () {

    int n; scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int x; scanf("%d", &x);
        int notas[x];
        int ordenadas[x];
        for (int j = 0; j < x; j++) {
            scanf("%d", &notas[j]);
        }
        copy(notas, notas+x, ordenadas);
        sort(ordenadas, ordenadas + x, sorting);
        int y = 0;
        for(int j = 0; j < x; j++) {
            if(notas[j] == ordenadas[j]) {
                y++;
            }
        }
        cout << y << endl;
    }

    return 0;
}
