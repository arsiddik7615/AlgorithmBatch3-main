#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        // Keep dividing N by 2 while it's divisible by 2
        while (N > 1 && N % 2 == 0) {
            N /= 2;
        }

        // If N becomes 1, it's reachable; otherwise, it's not
        if (N == 1) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
