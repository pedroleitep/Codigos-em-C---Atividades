#include <iostream>
using namespace std;

class Elevador {
private:
    int andarAtual;
    int totalAndares;
    int capacidade;
    int pessoasPresentes;

public:
    Elevador() {
        andarAtual = 0;
        totalAndares = 10;
        capacidade = 5;
        pessoasPresentes = 0;
    }

    void inicializa(int cap, int total) {
        capacidade = cap;
        totalAndares = total;
        andarAtual = 0;
        pessoasPresentes = 0;
    }

    void entra() {
        if (pessoasPresentes < capacidade) {
            pessoasPresentes++;
        }
    }

    void sai() {
        if (pessoasPresentes > 0) {
            pessoasPresentes--;
        }
    }

    void sobe() {
        if (andarAtual < totalAndares - 1) {
            andarAtual++;
        }
    }

    void desce() {
        if (andarAtual > 0) {
            andarAtual--;
        }
    }

    int getAndarAtual() {
        return andarAtual;
    }

    int getPessoasPresentes() {
        return pessoasPresentes;
    }
};

int main() {
    int capacidade, totalAndares;
    int numAcoes;
    string acao;

    cin >> capacidade >> totalAndares;
    Elevador elevador;
    elevador.inicializa(capacidade, totalAndares);

    cin >> numAcoes;

    for (int i = 0; i < numAcoes; i++) {
        cin >> acao;

        if (acao == "entrar") {
            elevador.entra();
        } else if (acao == "sair") {
            elevador.sai();
        } else if (acao == "subir") {
            elevador.sobe();
        } else if (acao == "descer") {
            elevador.desce();
        }

        cout << "Andar atual: " << elevador.getAndarAtual() << endl;
        cout << "Pessoas presentes: " << elevador.getPessoasPresentes() << endl;
    }

    return 0;
}
