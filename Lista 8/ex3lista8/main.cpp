#include <iostream>

using namespace std;
/*
Voc� est� desenvolvendo um sistema de controle de combust�vel para uma frota de carros. Cada
carro � representado por um objeto da classe Carro, que possui caracter�sticas como capacidade
do tanque, consumo de combust�vel, quantidade atual de combust�vel e dist�ncia percorrida.
A classe Carro tamb�m possui m�todos para abastecer e mover o carro, atualizando a quantidade de combust�vel e a dist�ncia percorrida, respectivamente.
Sua tarefa � receber informa��es sobre dois carros e simular o movimento de cada um deles.
Para cada carro, voc� deve ler o combust�vel inicial e a dist�ncia que ser� percorrida. Ap�s a
simula��o, voc� deve imprimir a dist�ncia total percorrida e a quantidade de combust�vel restante
para cada carro.
Entrada:
A entrada cont�m as seguintes informa��es:
Um n�mero inteiro representando o combust�vel inicial do Carro 1.
Um n�mero inteiro representando o combust�vel inicial do Carro 2.
Um n�mero inteiro representando a dist�ncia que o Carro 1 ir� percorrer.
Um n�mero inteiro representando a dist�ncia que o Carro 2 ir� percorrer.
Considere que as capacidades dos tanques dos carros s�o 50 litros e que o consumo de combust�vel � o mesmo para ambos, 15 km/l.
Exemplo Entrada
20
30
200
400
2
Sa�da Esperada:
Carro 1:
Dist�ncia percorrida: 200
Combust�vel restante: 7
Carro 2:
Dist�ncia percorrida: 400
Combust�vel restante: 4
*/

class Carro{
private:
    int capTanque = 50;
    int consumo = 15;
    int combustivel;
    int distancia;

public:
    void SetCombustivel (int comb)
        {
            if (comb >= 0 && comb <=50)
                combustivel = comb;
            else
            {
                combustivel = 0;
                cout << "Quantidade de Combustivel invalida" << endl;
            }
        }

    void SetDistancia (int dist)
        {
            if (dist >= 0)
                distancia = dist;
            else
            {
                distancia = 0;
                cout << "Distancia invalida" << endl;
            }
        }

    int GetCombustivel()
        {
            return combustivel;
        }

    int GetDistancia()
        {
            return distancia;
        }

    int GetRestante()
    {
        int restante;
        restante = combustivel - (distancia/consumo);
        return restante;
    }

    void Exibe()
    {
        cout << "Dist�ncia percorrida: " << GetDistancia() << endl;
        cout << "Combust�vel restante: " << GetRestante() << endl;
    }
};

int main()
{
    setlocale(LC_ALL, "pt_BR.UTF-8");

    setlocale(LC_ALL, "Portuguese");

    Carro carros[2];
    int c, d;
    for(int i = 0; i < 2; i++){
        //cout << "Combustivel inicial carro" << i+1 << ":" << endl;
        cin >> c;
        carros[i].SetCombustivel(c);
    }

    for(int i = 0; i < 2; i++){
        //cout << "Distancia que o carro" << i+1 << " ira percorrer: "<< endl;
        cin >> d;
        carros[i].SetDistancia(d);
    }

    for(int i = 0; i < 2; i++){
        cout << "Carro " << i+1 << ":" << endl;
        carros[i].Exibe();
        cout << endl;
    }

    return 0;
}
