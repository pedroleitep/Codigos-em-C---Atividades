#include <iostream>

using namespace std;
/*
Você está desenvolvendo um sistema de controle de combustível para uma frota de carros. Cada
carro é representado por um objeto da classe Carro, que possui características como capacidade
do tanque, consumo de combustível, quantidade atual de combustível e distância percorrida.
A classe Carro também possui métodos para abastecer e mover o carro, atualizando a quantidade de combustível e a distância percorrida, respectivamente.
Sua tarefa é receber informações sobre dois carros e simular o movimento de cada um deles.
Para cada carro, você deve ler o combustível inicial e a distância que será percorrida. Após a
simulação, você deve imprimir a distância total percorrida e a quantidade de combustível restante
para cada carro.
Entrada:
A entrada contém as seguintes informações:
Um número inteiro representando o combustível inicial do Carro 1.
Um número inteiro representando o combustível inicial do Carro 2.
Um número inteiro representando a distância que o Carro 1 irá percorrer.
Um número inteiro representando a distância que o Carro 2 irá percorrer.
Considere que as capacidades dos tanques dos carros são 50 litros e que o consumo de combustível é o mesmo para ambos, 15 km/l.
Exemplo Entrada
20
30
200
400
2
Saída Esperada:
Carro 1:
Distância percorrida: 200
Combustível restante: 7
Carro 2:
Distância percorrida: 400
Combustível restante: 4
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
        cout << "Distância percorrida: " << GetDistancia() << endl;
        cout << "Combustível restante: " << GetRestante() << endl;
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
