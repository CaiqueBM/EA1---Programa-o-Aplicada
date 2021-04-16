#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {

    int n;

    //Recebendo a quantidade de letras
    cout << "Quantidade de teclas: ";
    cin >> n;

    string recep[n];
    char tecla[n];
    char letra[n];


    //Recebendo as letras
    for(int i = 0; i < n; i++)
    {
        cout << "Digite a letra: ";
        cin >> recep[i];
    }

    //Separando as variaveis
    for(int i = 0; i < 4; i++)
    {
        string manip = recep[i];
        char valor[manip.length()];
        for (int i = 0; i < sizeof(valor); i++) {
        valor[i] = manip[i];
        //cout << p[i] << endl;


        if(valor[i-1] == '#')
        {
            tecla[i] = valor[i];
            cout << "Valor: " << tecla[i] << endl;
        }
        if(valor[i-1] == '=')
        {
            letra[i] = valor[i];
            cout <<  "Letra: " << letra[i] << endl;
        }

    }

    }









}
