#include <iostream>

int main()
{
    const int N = 100000;

    double d_under = 1.0;
    double d_over = 1.0;
    float f_under = 1.0;
    float f_over = 1.0;

    for (int i = 0; i < N; i++)
    {
        d_under /= 2;
        d_over *= 2;

        f_under /= 2;
        f_over *= 2;

        std::cout << i 
                  << "," << d_under 
                  << "," << d_over 
                  << "," << f_under
                  << "," << f_over << std::endl;     
    }
}
