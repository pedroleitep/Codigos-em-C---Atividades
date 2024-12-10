#include <iostream>
#include <string>
using namespace std;

class Autor {
private:
    string nome;

public:
    // Construtor padr�o
    Autor() : nome("") {}

    // Construtor parametrizado
    Autor(string n) : nome(n) {}

    // Setter para o nome
    void setNome(string n) {
        nome = n;
    }

    // Getter para o nome
    string getNome() const {
        return nome;
    }
};

class Livro {
private:
    string titulo;
    int anoPublicacao;
    Autor* autor;

    void Inicializar(string t, int ano, Autor* a) {
        setTitulo(t);
        setAnoPublicacao(ano);
        setAutor(a);
    }

public:
    /*
    // Construtor padr�o
    Livro() : titulo(""), anoPublicacao(0), autor(nullptr) {}

    // Construtor parametrizado
    Livro(string t, int ano, Autor* a) : titulo(t), anoPublicacao(ano), autor(a) {}
    */

    // Construtor padr�o
    Livro() {
        Inicializar("Nenhum", 0, nullptr);
    }

    // Construtor parametrizado
    Livro(string t, int ano, Autor* a) {
        Inicializar(t, ano, a);
    }

    // Setter para o t�tulo
    void setTitulo(string t) {
        titulo = t;
    }

    // Setter para o ano de publica��o
    void setAnoPublicacao(int ano) {
        anoPublicacao = ano;
    }

    // Setter para o autor
    void setAutor(Autor* a) {
        autor = a;
    }

    // Getter para o t�tulo
    string getTitulo() const {
        return titulo;
    }

    // Getter para o ano de publica��o
    int getAnoPublicacao() const {
        return anoPublicacao;
    }

    // Getter para o autor
    Autor* getAutor() const {
        return autor;
    }

    // M�todo para exibir os detalhes do livro
    void exibirDetalhes() const {
        cout << "Detalhes do Livro:" << endl;
        cout << "Titulo: " << getTitulo() << endl;
        cout << "Ano de Publicacao: " << getAnoPublicacao() << endl;
        if (autor != nullptr) {
            cout << "Autor: " << autor->getNome() << endl;
        } else {
            cout << "Autor: N�o especificado" << endl;
        }
    }
};

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");

    setlocale(LC_ALL, "Portuguese");

    // Solicitar informa��es do autor
    string nomeAutor;
    //cout << "Digite o nome do autor: ";
    getline(cin, nomeAutor);

    Autor autor(nomeAutor);

    // Solicitar informa��es do livro
    string tituloLivro;
    int anoPublicacao;
    //cout << "Digite o t�tulo do livro: ";
    getline(cin, tituloLivro);
    //cout << "Digite o ano de publica��o: ";
    cin >> anoPublicacao;

    // Criar o objeto Livro e associ�-lo ao autor
    Livro livro(tituloLivro, anoPublicacao, &autor);

    // Exibir os detalhes do livro
    livro.exibirDetalhes();

    return 0;
}
