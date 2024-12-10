#include <iostream>
#include <string>
using namespace std;

// Classe Pessoa com encapsulamento
class Pessoa {
private:
    string nome;   // Atributo privado: nome
    int idade;     // Atributo privado: idade
    float altura;  // Atributo privado: altura

public:
    // Construtor padrão (sem parâmetros)
    Pessoa() : nome(""), idade(0), altura(0.0) {}

    // Construtor para inicializar com valores
    Pessoa(string n, int i, float a) : nome(n), idade(i), altura(a) {}

    // Getter para o nome
    string getNome() { return nome; }

    // Setter para o nome
    void setNome(string n) { nome = n; }

    // Getter para a idade
    int getIdade() { return idade; }

    // Setter para a idade
    void setIdade(int i) { idade = i; }

    // Getter para a altura
    float getAltura() { return altura; }

    // Setter para a altura
    void setAltura(float a) { altura = a; }

    // Método para exibir os dados
    void exibirDados() {
        cout << "Dados da pessoa:" << endl;
        cout << "Nome: " << nome << endl;
        cout << "Idade: " << idade << " anos" << endl;
        cout << "Altura: " << altura << " metros" << endl;
        cout << endl;
    }
};

int main() {
    int N; // Número de pessoas
    //cout << "Digite o numero de pessoas: ";
    cin >> N;

    Pessoa pessoas[N]; // Array de objetos da classe Pessoa

    // Loop para preencher os dados de cada pessoa
    for (int i = 0; i < N; i++) {
        string nome;
        int idade;
        float altura;

        //cout << "Digite os dados da pessoa " << i + 1 << " (Nome Idade Altura): ";
        cin >> nome >> idade >> altura;

        // Usando o construtor parametrizado
        pessoas[i] = Pessoa(nome, idade, altura);
    }

    // Loop para exibir os dados de cada pessoa
    for (int i = 0; i < N; i++) {
        pessoas[i].exibirDados(); // Chama o método para exibir os dados
    }

    return 0;
}
