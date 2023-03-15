#include "Matriz.hpp"

Matriz::Matriz(vector<vector<int>> m, int tam)
{
    this->setVetor(m);
    this->tam = tam;
}
void Matriz::setVetor(vector<vector<int>> m)
{
    this->m = m;
}
void Matriz::setSoma(int soma)
{
    this->soma = soma;
}

int Matriz::getSoma()
{
    return this->soma;
}

void Matriz::imprimir()
{
    for (int i = 0; i < tam; i++)
    {
        for (int j = 0; j < tam; j++)
        {
            cout << m[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "\nsoma: " << soma << "\n\n";
}
void Matriz::guloso()
{
    int i = 0, j = 0;

    this->soma = 0;

    i = 0;
    j = 0;

    soma += m[i][j];

    while (i < tam - 1 || j < tam - 1)
    {

        if (j == 0 && i >= 0 && i <= tam - 1)
        { // confere os numeros da primeira coluna

            if (i == tam - 1)
            { // confere se está na última linha
                m[i][j] = -1;
                j++;
            }
            else if (m[i][j + 1] > m[i + 1][j] && m[i][j + 1] > m[i + 1][j + 1])
            { // confere o número da direita
                m[i][j] = -1;
                j++;
            }
            else if (m[i + 1][j + 1] > m[i][j + 1] && m[i + 1][j + 1] > m[i + 1][j])
            { // confere a diagonal da direita
                m[i][j] = -1;
                i++;
                j++;
            }
            else
            { // confere o numero de baixo

                m[i][j] = -1;
                i++;
            }
        }
        else if (i == tam - 1 && j >= 0 && j <= tam - 1)
        { // confere os numeros da ultima linha

            m[i][j] = -1;
            j++;
        }
        else if (i == 0 && j > 0 && j < tam - 1)
        {

            if (i == tam - 1 && i >= 0 && i <= tam - 1)
            {

                m[i][j] = -1;
                j++;
            }
            else if (m[i][j - 1] > m[i + 1][j] && m[i][j - 1] > m[i + 1][j + 1] && m[i][j - 1] > m[i + 1][j - 1] && m[i][j - 1] > m[i+1][j]) //confere os numeros da esquerda
            {

                m[i][j] = -1;
                j--;
            }
            else if (m[i + 1][j + 1] > m[i][j - 1] && m[i + 1][j + 1] > m[i + 1][j] && m[i + 1][j + 1] > m[i + 1][j - 1] &&  m[i + 1][j + 1] > m[i][j+1]) // confere a diagonal da direita
            {
                m[i][j] = -1;
                i++;
                j++;
            }
            else if (m[i + 1][j - 1] > m[i + 1][j + 1] && m[i + 1][j - 1] > m[i][j - 1] && m[i + 1][j - 1] > m[i + 1][j] && m[i + 1][j - 1] > m[i][j+1])// confere a diagonal da esquerda
            {
                m[i][j] = -1;
                i++;
                j--;
            }
            else if(m[i][j+1] > m[i + 1][j - 1] && m[i][j+1] > m[i + 1][j + 1] &&  m[i][j + 1] > m[i][j - 1] && m[i][j + 1] > m[i+1][j]){ //confere os numeros da direita
                m[i][j] = -1;
                j++;
            }else                                                                                                                           // confere os numeros de baixo 
            {

                m[i][j] = -1;
                i++;
            }
        }
        else if (j > 0 && j < tam - 1 && i > 0 && i < tam - 1)// meio da matriz
        {

            if (m[i][j + 1] > m[i + 1][j] && m[i][j + 1] > m[i][j - 1] && m[i][j + 1] > m[i + 1][j + 1] && m[i][j + 1] > m[i + 1][j - 1]) // confere os numeros da direita
            {

                m[i][j] = -1;
                j++;
            }
            else if (m[i + 1][j] > m[i][j + 1] && m[i + 1][j] > m[i][j - 1] && m[i + 1][j] > m[i + 1][j + 1] && m[i + 1][j] > m[i + 1][j - 1]) // confere os numeros de baixo
            {

                m[i][j] = -1;
                i++;
            }
            else if (m[i + 1][j + 1] > m[i][j - 1] && m[i + 1][j + 1] > m[i + 1][j] && m[i + 1][j + 1] > m[i + 1][j - 1]) //confere os numeros da diagonal da direita
            {
                m[i][j] = -1;
                i++;
                j++;
            }
            else if (m[i + 1][j - 1] > m[i + 1][j + 1] && m[i + 1][j - 1] > m[i][j - 1] && m[i + 1][j - 1] > m[i + 1][j]) // confere os numeros da diagonal da esquerda
            {
                m[i][j] = -1;
                i++;
                j--;
            }
            else                                                                                                          // confere os numeros da esquerda
            {

                m[i][j] = -1;
                j--;
            }
        }
        else if (i >= 0 && i <= tam - 1 && j == tam - 1)// ultima coluna
        {

            if (m[i][j - 1] > m[i + 1][j] && m[i][j - 1] > m[i + 1][j-1]) // confere os numeros da esquerda
            {

                m[i][j] = -1;

                j--;
            }else if(m[i+1][j-1] > m[i][j - 1] && m[i+1][j-1] > m[i + 1][j]){ // confere os numeros da diagonal da esquerda
                m[i][j] = -1;
                i++;
                j--;
            }
            else                                                            //confere os numeros de baixo   
            {

                m[i][j] = -1;
                i++;
            }
        }
        soma += m[i][j];
    }
}

