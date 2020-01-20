#include <random>
#include <vector>


std::random_device rnd_dev; // создается устройство-источник случайных чисел(ядер/seed) 
std::mt19937_64 rnd_gen(rnd_dev()); // на основе алгоритма меера создается генератор случайных последовательностей 

//создает вектор случайных чисел int с равномерным распределением в заданном диапазоне
void int_rndv_uni(std::vector<int> &v, int v_size, int r_min, int r_max)  
    {
        if(r_min < r_max)
            rnd_gen.seed(rnd_dev());
        else
            return;
        std::uniform_int_distribution<int> distribution(r_min, r_max);
        if(!v.empty())
            v.clear();
        for(int n = 0; n < v_size; n++)
            v.push_back(distribution(rnd_gen));
            
        return;
    }

//создает вектор случайных чисел double с равномерным распределением в заданном диапазоне
void real_rndv_uni(std::vector<double> &v, int v_size, double r_min, double r_max) 
    {
        if(r_min < r_max)
            rnd_gen.seed(rnd_dev());
        else
            return;
        std::uniform_real_distribution<double> distribution(r_min, r_max);
        if(!v.empty())
            v.clear();
        for(int n = 0; n < v_size; n++)
            v.push_back(distribution(rnd_gen));
            
        return;
    }

//создает вектор случайных чисел double с нормальным распределением, матожиданием mat и стандартным отклонением stand
void real_rndv_distr(std::vector<double> &v, int v_size, double mat, double stand)  
    {
        rnd_gen.seed(rnd_dev());
        std::normal_distribution<double> distribution(mat, stand);
        if(!v.empty())
            v.clear();
        for(int n = 0; n < v_size; n++)
            v.push_back(distribution(rnd_gen));
            
        return;
    }