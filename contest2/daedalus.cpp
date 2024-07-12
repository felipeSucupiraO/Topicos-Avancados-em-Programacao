#include <bits/stdc++.h>
using namespace std;

void info(int vc, int d) {
    cout << "valor comparado daedalus " << vc  << " " << d << "\n";
}

int main() {
    int qtJogadores, rodadas;

    while (cin >> qtJogadores >> rodadas) {
        int bonus = 0, daedalus, jogadorAtual, valorComparado;
        bool diminuiu;
        for (int i = 0; i < rodadas; i++) {
            diminuiu = false;

            cin >> valorComparado >> daedalus;
            for (int j = 0; j < qtJogadores-1; j++) {
                cin >> jogadorAtual;
                valorComparado -= jogadorAtual;
            }
            info(valorComparado, daedalus);
            if (valorComparado <= 0) {
                continue;
            }
            while (daedalus >= valorComparado && daedalus/10 >= 1) {
                daedalus /= 10;
                diminuiu = true;
                cout << "diminuiu\n";
                info(valorComparado, daedalus);
            }
            if (daedalus <= valorComparado) {
                if (diminuiu) {
                    bonus += daedalus;
                } else {
                    while (10*daedalus <= valorComparado && 10*daedalus <= 10000) {
                        bonus += 9*daedalus;
                        daedalus *= 10;
                        cout << "aumentou\n";
                        info(valorComparado, daedalus);
                    }
                }
            }
            cout << "bonus da rodada:" << bonus << "\n";
        }

        cout << bonus << "\n";

    }

    
    return 0;
}