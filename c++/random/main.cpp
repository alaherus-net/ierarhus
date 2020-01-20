#include "gnuplot.h"
#include <iostream>
#include <fstream>
#include <random>
#include <vector>
#include <rndvector.h>
using namespace std;

int main()
{
    ofstream fd;
    Gnuplot plot;
    double price = 0.0;
    vector<int> vi(0), &link_vi = vi;
    vector<double> vd(0), &link_vd = vd;
    int q_size = 1000;
    
    //int_rndv_uni(link_vi, q_size, -5, 5);
    real_rndv_distr(link_vd, q_size, 0, 1.0);
    fd.open("meerson.dat", ios_base::out | ios_base::trunc);
    for(int i = 0; i < q_size; i++)
    {
       price += vd[i];
       fd << i << "\t" << price << "\n";
    }
    
    plot("plot \"meerson.dat\" with p ps 0.2 lc 20");
    return 0;
}
