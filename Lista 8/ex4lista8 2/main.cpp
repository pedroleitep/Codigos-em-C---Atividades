#include <iostream>
#include <string>
using namespace std;

class Autor{
private:
    string nome;

public:
    Autor() : nome("Nenhum") {}

    Autor(string n) : nome(n) {}

    void setNome(string n){
        nome = n;
    }

    string getNome(){
        return nome;
    }

    void Exibe(){
        cout << "Autor: " << getNome() << endl;
    }
};

class Livro : public Autor
{
private:
    string titulo;
    int ano;

public:
    Livro()
    {
        setTitulo("Nenhum");
        setAno(0);
    }

    Livro(string t, int a, string n) : Autor(n)
        {
            setTitulo(t);
            setAno(a);
        }

    void setTitulo(string t){
        titulo = t;
    }

    void setAno(int a){
        ano = a;
    }

    string getTitulo(){
        return titulo;
    }

    int getAno(){
        return ano;
    }

    void Exibe(){
        cout << "Detalhes do Livro:" << endl;
        cout << "Titulo: " << getTitulo() << endl;
        cout << "Ano de Publicacao: " << getAno() << endl;
        Autor::Exibe();
    }
};

int main()
{
    string nomeAutor, tituloLivro;
    int anoPublicacao;

    cout << "Digite o nome do Autor: " << endl;
    getline(cin, nomeAutor);
    Autor autor(nomeAutor);

    cout << "Digite o titulo do livro: " << endl;
    getline(cin, tituloLivro);

    cout << "Digite o ano de publicacao: " << endl;
    cin >> anoPublicacao;
    Livro livro(tituloLivro, anoPublicacao, nomeAutor);

    livro.Exibe();

    return 0;
}
