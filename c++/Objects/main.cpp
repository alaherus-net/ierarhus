// data_types.cpp: определяет точку входа для консольного приложения.
 
//#include "stdafx.h"
#include <iostream>
// библиотека манипулирования вводом/выводом
#include <iomanip>
// заголовочный файл математических функций
#include <cmath>
#include <vector>
using namespace std;

void my_func(int number, vector<int> &q)
{
    q.erase(q.begin(), q.end());
    for(unsigned i = 0; i < number; i++)
        q.push_back(i*8);
    return;
}
 
int main()
{
    int count = 10;
    vector<int> v;
    vector<int> &link_v = v;
    
    for(int i = 0; i < 10; i++)
        v.push_back(100 - i);
        
    for(unsigned j = 0; j < 10; j++)
    cout << "До того : " << "v[" << j << "]= " << v[j] << "\n";
    
    my_func(count, link_v);
    
    for(int i = 0; i < v.size(); i++)
        cout << "После того : " << "v[" << i << "]= " << v[i] << "\n";
    return 0;
}

