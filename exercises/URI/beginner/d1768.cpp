#include <bits/stdc++.h>

using namespace std;

int main () {

    int n;

    while (cin >> n) {

        for (int i = 1; i <= n; i += 2) {
            int spaces = n - i;

            for (int j = 0; j < spaces/2; j++) {
                cout << " ";
            }
            for (int j = 0; j < i; j++) {
                cout << "*";
            }

            cout << endl;
        }

        for (int j = 0; j < (n-1)/2; j++) {
            cout << " ";
        }
        cout << "*";
        cout << endl;

        for (int j = 0; j < (n-2)/2; j++) {
            cout << " ";
        }
        cout << "***";
        cout << endl;

        cout << endl;
    }

    return 0;
}
