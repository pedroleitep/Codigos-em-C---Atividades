#include <iostream>
#include <string>
#include <locale>
using namespace std;

// Classe Pessoa com encapsulamento
class Relogio {
private:
    int horas;
    int minutos;
    int segundos;

    void Inicializar(int h, int m, int s)
        {
            SetHora(h);
            SetMin(m);
            SetSeg(s);
        }
public:
    // Construtor padrão (sem parâmetros)
    Relogio() : horas(00), minutos(00), segundos(00) {}

    // Construtor para inicializar com valores
    Relogio(int h, int m, int s)
        {
            Inicializar(h,m,s);
        }

    void SetHora (int h)
        {
            if (h >= 0)
                horas = h;
            else
            {
                horas = 0;
                cout << "Erro: Hora invalida" << endl;
            }
        }

    void SetMin (int m)
        {
            if (m >= 0)
                minutos = m;
            else
            {
                minutos = 0;
                cout << "Erro: Minuto invalido" << endl;
            }
        }

    void SetSeg (int s)
        {
            if (s >= 0)
                segundos = s;
            else
            {
                segundos = 0;
                cout << "Erro: Segundo invalido" << endl;
            }
        }

    int GetHora()
        {
            return horas;
        }

    int GetMin()
        {
            return minutos;
        }

    int GetSeg()
        {
            return segundos;
        }

    void ExibeHorario() {
        cout << (horas < 10 ? "0" : "") << horas << ":"
             << (minutos < 10 ? "0" : "") << minutos << ":"
             << (segundos < 10 ? "0" : "") << segundos << endl;
    }

     // Avança o horário em um segundo
    void avancarSegundo() {
        segundos++;
        if (segundos == 60) {
            segundos = 0;
            minutos++;
        }
        if (minutos == 60) {
            minutos = 0;
            horas++;
        }
        if (horas == 24) {
            horas = 0;
        }
    }
};

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");

    setlocale(LC_ALL, "Portuguese");

    int N, H, M, S;
    //cout << "Digite a quantidade de operacoes que deseja fazer: " << endl;
    cin >> N;

    Relogio teste[N];

    if(N >= 1 && N <= 1000){


        for (int pos = 0; pos < N; pos++)
        {
            //cout << "Horas(00): ";
            cin >> H;
            if(H < 24 && H >= 0){
                teste[pos].SetHora(H);
            }else{cout << "Hora invalida" <<endl;}

            //cout << "Minutos(00): ";
            cin >> M;
            if(M < 60 && M >= 0){
                teste[pos].SetMin(M);
            }else{cout << "Minuto invalido" <<endl;}

            //cout << "Segundos(00): ";
            cin >> S;
            if(S < 60 && S >= 0){
                teste[pos].SetSeg(S);
            }else{cout << "Segundos invalido" <<endl;}
        }
    }else {
        cout << "Valor invalido" << endl;
    }

    for (int pos = 0; pos < N; pos++)
    {
        cout << "Horário inicial: ";
        teste[pos].ExibeHorario();

        teste[pos].avancarSegundo();

        cout << "Novo horário: ";
        teste[pos].ExibeHorario();
        cout << endl;
    }

    return 0;
}
