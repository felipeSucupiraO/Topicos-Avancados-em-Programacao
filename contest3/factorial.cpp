#include <bits/stdc++.h>
using namespace std;

int main() {
    int valorN;

    vector<long long> vetorFatoriais(10);
    vetorFatoriais[0] = 1;
    for (int i = 1; i <= 9; i++) {
        vetorFatoriais[i] = vetorFatoriais[i - 1] * (i + 1);
    }
    while (cin >> valorN) {
        int valorK = 0;

        for (int i = 9; i >= 0; i--) {
            if (vetorFatoriais[i] <= valorN) {
                valorN -= vetorFatoriais[i];
                i++;
                valorK++;
            }
            if (valorN <= 0) {
                break;
            }
        }

        cout << valorK << "\n";
    }

    return 0;
}