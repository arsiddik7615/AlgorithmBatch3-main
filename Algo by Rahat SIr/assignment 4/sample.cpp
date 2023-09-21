#include <iostream>
#include <vector>
using namespace std;

const int MAX_N = 1e5 + 5;
bool canReach[MAX_N];

void preprocess() {
    canReach[1] = true;

    for (int i = 1; i < MAX_N; ++i) {
        if (canReach[i]) {
            if (i + 3 < MAX_N) {
                canReach[i + 3] = true;
            }
            if (i * 2 < MAX_N) {
                canReach[i * 2] = true;
            }
        }
    }
}

int main() {
    int T;
    cin >> T;

   

    while (T--) {
        int N;
        cin >> N;

        if (canReach[N]) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
 preprocess();
    return 0;
}
