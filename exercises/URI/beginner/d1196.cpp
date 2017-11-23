#include <bits/stdc++.h>

using namespace std;

int main () {

    string s;
    string r1 = "`1234567890-=";
    string r2 = "QWERTYUIOP[]\\";
    string r3 = "ASDFGHJKL;\'";
    string r4 = "ZXCVBNM,./";

    while (getline(cin, s)){
        for (int i = 0; i < (int) s.size(); i++) {
            if (r1.find(s[i]) != string::npos) {
                s[i] = r1[r1.find(s[i]) - 1];
            } else if (r2.find(s[i]) != string::npos) {
                s[i] = r2[r2.find(s[i]) - 1];
            } else if (r3.find(s[i]) != string::npos) {
                s[i] = r3[r3.find(s[i]) - 1];
            } else if (r4.find(s[i]) != string::npos) {
                s[i] = r4[r4.find(s[i]) - 1];
            } else {
            }
        }

        cout << s << endl;
    }

    return 0;
}
