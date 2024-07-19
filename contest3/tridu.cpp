#include <bits/stdc++.h>
using namespace std;

int main() {
    int valueA, valueB;
    while (cin >> valueA >> valueB) {

        if (valueA == valueB || valueA > valueB) {
            cout << valueA << "\n";
        } else {
            cout << valueB << "\n";
        }

    }
    
    return 0;
}