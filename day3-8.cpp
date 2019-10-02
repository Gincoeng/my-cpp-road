#include <iostream>
using namespace std;

int main()
{

    double sum = 800;
    int years = 2015;

    while (sum <2000)
    { 
        sum = sum * (1.25);
        years++;
    }

    cout << "在" <<years << "年，突破2000亿元大关！！！ "  << endl;
    return 0;
}
