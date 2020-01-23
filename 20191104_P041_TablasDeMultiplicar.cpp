/*Autor: Angel  Cristian Moya Rivera
Descricpción: Programa que imprime las tablas de multiplicar
Fecha 04 de noviembre de 2019
*/



#include<iostream>
using namespace std;

int main ()

{
    int i, j;

    for(i = 0; i < 11; i++)
    {
        cout<<"Tabla de multiplicar del " <<i<<endl;
        for(j = 0; j < 11; j++)

    {
        cout<<i<<"x"<<j<<"="<<i*j<<endl;
    }
    cout<<endl;
    }
    return 0;
}
