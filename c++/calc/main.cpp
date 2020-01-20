#include "std_lib_facilities.h"
#include <cstdlib>
#include <iostream>

int main()
{
    char znak;
    string lex = "";
    char* lex_ptr = &lex[0];
    vector<char> oper;
    vector<char> user;
    vector<float> val;
    
//-------------------------------------------
    cout << "Что считаем > ";
    while(cin >> znak)
    {
        if((lex == "" && znak == '-') || isdigit(znak) || (lex != "" && znak == '.'))
            lex += znak;
        else
            if(znak == '+' || znak == '-' || znak == '*' || znak == '/' || znak == '=')
                {
                    val.push_back(atof(lex_ptr));
                    lex = "";
                    if(znak != '=')
                        oper.push_back(znak);
                    else
                        break;
                }
    }

    
//-------------------------------------------
    
    for(unsigned i = 0; i < val.size(); i++)
    {
        cout << val[i];
        if(i < oper.size())
            cout << " | " << oper[i] << endl;
    }
        
    
//-------------------------------------------     
    return 0;
}

float sum(float a, float b)
{
    return a + b;
}

float sub(float a, float b)
{
    return a - b;
}

float mlt(float a, float b)
{
    return a*b;
}

float dvd(float a, float b)
{
    if(b != 0)
        return a/b;
    else
        return INFINITY;
}