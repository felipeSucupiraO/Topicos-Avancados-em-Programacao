#include <bits/stdc++.h>
using namespace std;

int main() {
    int qtJogadores, nRodadas;

    int rodadaAtual, maiorPontuacao, vencedorAtual;
    while (cin >> qtJogadores >> nRodadas) {
        vector<int> vetJogadores(qtJogadores, 0);


        maiorPontuacao = 0;
        vencedorAtual = 0;
        for (int i = 0; i < nRodadas; i++) {
            for (int j = 0; j < qtJogadores; j++) {
                cin >> rodadaAtual;
                vetJogadores[j] += rodadaAtual;
                if ((vetJogadores[j] > maiorPontuacao) || (vetJogadores[j] == maiorPontuacao && j + 1 > vencedorAtual)) {
                    maiorPontuacao = vetJogadores[j];
                    vencedorAtual = j + 1;
                }
            }
        }

        cout << vencedorAtual << "\n";
    }
    
    return 0;
}