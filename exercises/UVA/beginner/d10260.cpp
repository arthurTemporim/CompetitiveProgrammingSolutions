#include <bits/stdc++.h>

using namespace std;

int soundex (char c) {
    if(c == 'B' || c == 'F' || c == 'P' || c == 'V') {
        return 1;
    } else if(c == 'C' || c == 'G' || c == 'J' || c == 'K' || c == 'Q' || c == 'S' || c == 'X' || c == 'Z') {
        return 2;
    } else if(c == 'D' || c == 'T') {
        return 3;
    } else if(c == 'L') {
        return 4;
    } else if(c == 'M' || c == 'N') {
        return 5;
    } else if(c == 'R') {
        return 6;
    }

    return -1;
}

int main () {

    string s;

    while(cin >> s) {
      int r = -1;
      for(int i = 0; i < (int) s.length(); i++) {
        int x = soundex(s[i]);
        if (x != -1 && x != r) {
          cout << x;
        }
        r = x;
      }

      cout << endl;
    }

    return 0;
}
