#include <iostream>
#include <vector>
using namespace std;

const int MOD = 1e9 + 7;

int main() {
    for (int _ = 0; _ < 1; ++_) {
        string t;
        cin >> t;
        int m = t.length();
        t = "#" + t;
        vector<long long> L(m + 1, 0);
        vector<long long> M(m + 1, 0);
        L[0] = 1;
        int z = 0;
        long long zz = 1;
        M[0] = 1;

        for (int i = 1; i <= m; ++i) {
            M[i] = (M[i - 1] * 2) % MOD;
            if (t[i] != 'a') {
                z = (z + zz) % MOD;
            } else {
                L[i] = z;
            }
            zz = (zz + L[i]) % MOD;
        }

        int c = 0;
        long long bec = 0;
        t += "#";

        for (int i = 1 + m; i > 0; --i) {
            if (t[i] == 'a') {
                c += 1;
            }
            bec = (bec + M[c] * L[i - 1]) % MOD;
        }

        bec = (bec - 1 + MOD) % MOD;
        cout << bec << endl;
    }

    return 0;
}
