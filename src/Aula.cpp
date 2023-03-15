#include "Aula.hpp"

void Aula::algoritmo()
{
    int *referencia, i, j, tam;
    string referencia_valor;
    fstream txtFile;
    txtFile.open("src/input.data");

    if (!txtFile)
    {
        throw "../main.cpp::lerTxt ---> Não foi possível abrir o arquivo de entrada";
    }
    cout << "\n\n";

    txtFile >> referencia_valor;
    txtFile >> referencia_valor;
    tam = stoi(referencia_valor);
    referencia = &tam;

    string aux;
    int soma_total=0;

    while (!txtFile.eof())
    {

        vector<vector<int>> vet2(*referencia, vector<int>(*referencia));
        for (i = 0; i < *referencia; i++)
        {

            for (j = 0; j < *referencia; j++)
            {
                txtFile >> aux;
                vet2[i][j] = stoi(aux);
            }
        }

        Matriz m(vet2, *referencia);
        m.guloso();
        m.imprimir();
        soma_total += m.getSoma();
    }

   
    cout << "\n\nA soma total dos caminhos das matrizes e: " << soma_total << endl;

    txtFile.close();
}
