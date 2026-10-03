#include <iostream>

using namespace std;
 
 void tabela() {
   int times;
   cout << "Digite o numero de times: ";
   cin >> times;

   for (int i = 0; i < times; i++) {
      int vitorias, derrotas, empates;
        cout << "Digite o numero de vitorias: ";
        cin >> vitorias;
        cout << "Digite o numero de derrotas: ";
        cin >> derrotas;
        cout << "Digite o numero de empates: ";
        cin >> empates;
      int pontos = (vitorias * 3) + empates;
        cout << "O time " << i + 1 << " tem " << pontos << " pontos." << endl;
    }
    
 }
 int main() {
   tabela();
    return 0;
 }
 