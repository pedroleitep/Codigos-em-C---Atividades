#include <iostream>
#include <string>
#include <limits>
using namespace std;

// Classe Elevador
class Elevador {
private:
    int andarAtual;       // O andar atual do elevador
    int totalAndares;     // Total de andares no pr�dio
    int capacidade;       // Capacidade m�xima de pessoas no elevador
    int pessoasPresentes; // N�mero atual de pessoas no elevador

public:
    // Construtor padr�o
    Elevador() : andarAtual(0), totalAndares(1), capacidade(1), pessoasPresentes(0) {}

    // Construtor parametrizado
    Elevador(int cap, int totAnd) : capacidade(cap), totalAndares(totAnd), andarAtual(0), pessoasPresentes(0) {}

    // M�todo para inicializar os atributos
    void inicializa(int cap, int totAnd) {
        capacidade = cap;
        totalAndares = totAnd;
        andarAtual = 0;
        pessoasPresentes = 0;
    }

    // M�todo para simular a entrada de pessoas
    void entra() {
        if (pessoasPresentes < capacidade) {
            pessoasPresentes++;
        } else {
            cout << "Elevador cheio! N�o � poss�vel entrar mais pessoas." << endl;
        }
    }

    // M�todo para simular a sa�da de pessoas
    void sai() {
        if (pessoasPresentes > 0) {
            pessoasPresentes--;
        } else {
            cout << "O elevador est� vazio! Ningu�m pode sair." << endl;
        }
    }

    // M�todo para simular subida
    void sobe() {
        if (andarAtual < totalAndares - 1) {
            andarAtual++;
        } else {
            cout << "O elevador j� est� no �ltimo andar!" << endl;
        }
    }

    // M�todo para simular descida
    void desce() {
        if (andarAtual > 0) {
            andarAtual--;
        } else {
            cout << "O elevador j� est� no t�rreo!" << endl;
        }
    }

    // M�todos de acesso (getters)
    int getAndarAtual() const { return andarAtual; }
    int getTotalAndares() const { return totalAndares; }
    int getCapacidade() const { return capacidade; }
    int getPessoasPresentes() const { return pessoasPresentes; }
};

int main() {
    int capacidade, totalAndares, numAcoes;

    // Solicitar capacidade e total de andares
    //cout << "Digite a capacidade do elevador e o total de andares do pr�dio: ";
    cin >> capacidade >> totalAndares;

    // Criar dois elevadores
    //Elevador elevador1(capacidade, totalAndares);
    //Elevador elevador2(capacidade, totalAndares);
    Elevador elevador(capacidade, totalAndares);

    // Solicitar n�mero de a��es
    //cout << "Digite a quantidade de a��es a serem simuladas: ";
    cin >> numAcoes;
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Limpar o buffer de entrada

    // Loop para executar as a��es
    for (int i = 0; i < numAcoes; i++) {
        string operacao;
        int elevadorEscolhido;

        // Solicitar o elevador e a opera��o
        //cout << "Escolha o elevador (1 ou 2): ";
        /*
        cin >> elevadorEscolhido;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        //cout << "Digite a opera��o (entrar, sair, subir, descer): ";
        getline(cin, operacao);

        // Selecionar o elevador
        Elevador* elevador = (elevadorEscolhido == 1) ? &elevador1 : &elevador2;

        */

        // Executar a opera��o
        if (operacao == "entrar") {
            elevador.entra();
        } else if (operacao == "sair") {
            elevador.sai();
        } else if (operacao == "subir") {
            elevador.sobe();
        } else if (operacao == "descer") {
            elevador.desce();
        } else {
            cout << "Opera��o inv�lida!" << endl;
        }

        // Exibir estado atual do elevador
        cout << "Andar atual: " << elevador.getAndarAtual() << endl;
        cout << "Pessoas presentes: " << elevador.getPessoasPresentes() << endl;
    }

    return 0;
}
