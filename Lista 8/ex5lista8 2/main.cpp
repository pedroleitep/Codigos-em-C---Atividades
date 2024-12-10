#include <iostream>
#include <string>
#include <limits>
using namespace std;

// Classe Elevador
class Elevador {
private:
    int andarAtual;       // O andar atual do elevador
    int totalAndares;     // Total de andares no prédio
    int capacidade;       // Capacidade máxima de pessoas no elevador
    int pessoasPresentes; // Número atual de pessoas no elevador

public:
    // Construtor padrão
    Elevador() : andarAtual(0), totalAndares(1), capacidade(1), pessoasPresentes(0) {}

    // Construtor parametrizado
    Elevador(int cap, int totAnd) : capacidade(cap), totalAndares(totAnd), andarAtual(0), pessoasPresentes(0) {}

    // Método para inicializar os atributos
    void inicializa(int cap, int totAnd) {
        capacidade = cap;
        totalAndares = totAnd;
        andarAtual = 0;
        pessoasPresentes = 0;
    }

    // Método para simular a entrada de pessoas
    void entra() {
        if (pessoasPresentes < capacidade) {
            pessoasPresentes++;
        } else {
            cout << "Elevador cheio! Não é possível entrar mais pessoas." << endl;
        }
    }

    // Método para simular a saída de pessoas
    void sai() {
        if (pessoasPresentes > 0) {
            pessoasPresentes--;
        } else {
            cout << "O elevador está vazio! Ninguém pode sair." << endl;
        }
    }

    // Método para simular subida
    void sobe() {
        if (andarAtual < totalAndares - 1) {
            andarAtual++;
        } else {
            cout << "O elevador já está no último andar!" << endl;
        }
    }

    // Método para simular descida
    void desce() {
        if (andarAtual > 0) {
            andarAtual--;
        } else {
            cout << "O elevador já está no térreo!" << endl;
        }
    }

    // Métodos de acesso (getters)
    int getAndarAtual() const { return andarAtual; }
    int getTotalAndares() const { return totalAndares; }
    int getCapacidade() const { return capacidade; }
    int getPessoasPresentes() const { return pessoasPresentes; }
};

int main() {
    int capacidade, totalAndares, numAcoes;

    // Solicitar capacidade e total de andares
    //cout << "Digite a capacidade do elevador e o total de andares do prédio: ";
    cin >> capacidade >> totalAndares;

    // Criar dois elevadores
    //Elevador elevador1(capacidade, totalAndares);
    //Elevador elevador2(capacidade, totalAndares);
    Elevador elevador(capacidade, totalAndares);

    // Solicitar número de ações
    //cout << "Digite a quantidade de ações a serem simuladas: ";
    cin >> numAcoes;
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Limpar o buffer de entrada

    // Loop para executar as ações
    for (int i = 0; i < numAcoes; i++) {
        string operacao;
        int elevadorEscolhido;

        // Solicitar o elevador e a operação
        //cout << "Escolha o elevador (1 ou 2): ";
        /*
        cin >> elevadorEscolhido;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        //cout << "Digite a operação (entrar, sair, subir, descer): ";
        getline(cin, operacao);

        // Selecionar o elevador
        Elevador* elevador = (elevadorEscolhido == 1) ? &elevador1 : &elevador2;

        */

        // Executar a operação
        if (operacao == "entrar") {
            elevador.entra();
        } else if (operacao == "sair") {
            elevador.sai();
        } else if (operacao == "subir") {
            elevador.sobe();
        } else if (operacao == "descer") {
            elevador.desce();
        } else {
            cout << "Operação inválida!" << endl;
        }

        // Exibir estado atual do elevador
        cout << "Andar atual: " << elevador.getAndarAtual() << endl;
        cout << "Pessoas presentes: " << elevador.getPessoasPresentes() << endl;
    }

    return 0;
}
