#ifndef __MATRIZ_HPP
#define __MATRIZ_HPP
#include <iostream>
#include <vector>
#include <fstream>
using namespace std;
class Matriz
{
private:
    int soma, tam;

public:
    

    vector<vector<int>> m;
    Matriz(vector<vector<int>> m, int tam);
    void setVetor(vector<vector<int>> m);
    void setSoma(int soma);
    int getSoma();
    void imprimir();
    void guloso();
};
#endif