#include <iostream>
#include <string>
using namespace std;

class Elevador{
private:
    int andarAtual; //o andar atual do elevador
    int totalAndares; //o total de andares no prédio da PUC Minas Praça da Liberdade.
    int capacidade; //a capacidade máxima de pessoas no elevador.
    int pessoasPresentes; //o número atual de pessoas no elevador.

    void Inicializa(int C, int TA)
        {
            setCapacidade(C);
            setTotalAndares(TA);
            setAndarAtual(0);
            setPessoasPresentes(0);
        }
public:
    Elevador() : capacidade(8), totalAndares(15), andarAtual(0), pessoasPresentes(0) {}

    Elevador(int cap, int totAnd)
    {
        Inicializa(cap, totAnd);
    }

    void setCapacidade(int C){
        capacidade = C;
    }

    void setTotalAndares(int TA){
        totalAndares = TA;
    }

    void setAndarAtual(int AA){
        andarAtual = AA;
    }

    void setPessoasPresentes(int PP){
        pessoasPresentes = PP;
    }

    int getCapacidade(){
        return capacidade;
    }

    int getTotalAndares(){
        return totalAndares;
    }

    int getAndarAtual(){
        return andarAtual;
    }

    int getPessoasPresentes(){
        return pessoasPresentes;
    }

    void entra() {
        if (pessoasPresentes < capacidade) {
            pessoasPresentes++;
        } else {
            cout << "Elevador cheio! Não é possível entrar mais pessoas." << endl;
        }
    }

    // Método para simular saída de pessoas
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
};

int main() {
    int capacidade, totalAndares, numAcoes;

    // Solicitar capacidade e total de andares
    //cout << "Digite a capacidade do elevador e o total de andares: ";
    cin >> capacidade >> totalAndares;

    // Criar dois elevadores
    Elevador elevador(capacidade, totalAndares);
    //Elevador elevador1(capacidade, totalAndares);
    //Elevador elevador2(capacidade, totalAndares);

    // Solicitar quantidade de ações
    //cout << "Digite a quantidade de ações a serem simuladas: ";
    cin >> numAcoes;
    //cin.ignore(); // Limpar o buffer de entrada
    fflush(stdin);

    // Loop para executar as ações
    for (int i = 0; i < numAcoes; i++) {
        string operacao;
        int elevadorEscolhido;

        /*
        cout << "Escolha o elevador (1 ou 2): ";
        cin >> elevadorEscolhido;
        cin.ignore(); // Limpar o buffer de entrada
        */
        fflush(stdin);
        //cout << "Digite a operação (entrar, sair, subir, descer): ";
        getline(cin, operacao);

        //Elevador* elevador = (elevadorEscolhido == 1) ? &elevador1 : &elevador2;

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
        /*
        cout << "Andar atual: " << elevador->getAndarAtual() << endl;
        cout << "Pessoas presentes: " << elevador->getPessoasPresentes() << endl;
        */
        cout << "Andar atual: " << elevador.getAndarAtual() << endl;
        cout << "Pessoas presentes: " << elevador.getPessoasPresentes() << endl;
    }

    return 0;
}
