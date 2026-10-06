#include <iostream>

using namespace std;

struct Time {
    string nome;
    int vitorias, derrotas, empates, pontos;
};

void tabela() {
    int times;

    cout << "Digite o numero de times: ";
    cin >> times;

    if (times <= 0) {
        cout << "Numero de times invalido." << endl;
        return;
    }

    Time t[100];

    for (int i = 0; i < times; i++) {
        cout << "Digite o nome do time " << i + 1 << ": ";
        cin >> t[i].nome;

        cout << "Digite o numero de vitorias: ";
        cin >> t[i].vitorias;

        cout << "Digite o numero de derrotas: ";
        cin >> t[i].derrotas;

        cout << "Digite o numero de empates: ";
        cin >> t[i].empates;

        t[i].pontos = (t[i].vitorias * 3) + t[i].empates;

        cout << "O time " << i + 1 << " tem " << t[i].vitorias << " vitorias, "
             << t[i].derrotas << " derrotas e " << t[i].empates << " empates." << endl;
        cout << "O time " << i + 1 << " tem " << t[i].pontos << " pontos." << endl;
    }

    int maior = 0;
    int menor = 0;

    for (int i = 1; i < times; i++) {
        if (t[i].pontos > t[maior].pontos) {
            maior = i;
        }
        if (t[i].pontos < t[menor].pontos) {
            menor = i;
        }
    }

    cout << "O time com mais pontos e: " << t[maior].nome << " com " << t[maior].pontos 
    << " pontos." << endl;
    cout << "O time com menos pontos e: " << t[menor].nome << " com " << t[menor].pontos 
    << " pontos." << endl;
}

int main() {
    tabela();
    return 0;
}