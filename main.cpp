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
    char palavra[n];
    int contt=0;
    int contl=0;

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
        for (int i = 0; i < sizeof(valor); i++)
        {
            valor[i] = manip[i];

            if(i == 1)
            {
                tecla[contt] = valor[i];
                contt++;
            }
            if(i == 3)
            {
                letra[contl] = valor[i];
                contl++;
            }
        }

        //Buscar a palavra com a tecla e as letras
        for(int i = 0; i < n; i++)
        {
            switch(tecla[i])
            {
                case '2':
                    switch(letra[i])
                    {
                        case '1': palavra[i] = 'A'; break;
                        case '2': palavra[i] = 'B'; break;
                        case '3': palavra[i] = 'C'; break;
                    } break;
                case '3':
                    switch(letra[i])
                    {
                        case '1': palavra[i] = 'D'; break;
                        case '2': palavra[i] = 'E'; break;
                        case '3': palavra[i] = 'F'; break;
                    } break;
                case '4':
                    switch(letra[i])
                    {
                        case '1': palavra[i] = 'G'; break;
                        case '2': palavra[i] = 'H'; break;
                        case '3': palavra[i] = 'I'; break;
                    } break;
                case '5':
                    switch(letra[i])
                    {
                        case '1': palavra[i] = 'J'; break;
                        case '2': palavra[i] = 'K'; break;
                        case '3': palavra[i] = 'L'; break;
                    } break;
                case '6':
                    switch(letra[i])
                    {
                        case '1': palavra[i] = 'M'; break;
                        case '2': palavra[i] = 'N'; break;
                        case '3': palavra[i] = 'O'; break;
                    } break;
                case '7':
                    switch(letra[i])
                    {
                        case '1': palavra[i] = 'P'; break;
                        case '2': palavra[i] = 'Q'; break;
                        case '3': palavra[i] = 'R'; break;
                        case '4': palavra[i] = 'S'; break;
                    } break;
                case '8':
                    switch(letra[i])
                    {
                        case '1': palavra[i] = 'T'; break;
                        case '2': palavra[i] = 'U'; break;
                        case '3': palavra[i] = 'V'; break;
                    } break;
                case '9':
                        switch(letra[i])
                    {
                        case '1': palavra[i] = 'W'; break;
                        case '2': palavra[i] = 'X'; break;
                        case '3': palavra[i] = 'Y'; break;
                        case '4': palavra[i] = 'Z'; break;
                    } break;
            }
        }
    }
cout << endl;

//Mostrando a palavra
for(int i = 0; i < n; i++)
        {
            cout << palavra[i];
        }

}
