#include <bits/stdc++.h>
using namespace std;

int main() {
    int corrTea, awnser;

    while (cin >> corrTea) {
        int amountCorrect = 0;
        for (int i = 0; i < 5; i++) {
            cin >> awnser;
            if (awnser == corrTea) {
                amountCorrect++;
            }
        }

        cout << amountCorrect << "\n";
    }

    
    return 0;
}