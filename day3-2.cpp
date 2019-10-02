#include <iostream>
using namespace std;

int main()
{
    double price_lv = 35000;
    double price_hermes = 11044.5;
    double price_channel = 1535;

    double sum;
    sum = price_lv + price_hermes + price_channel;

    double discount;

    if (sum > 50000)
    {
        discount = 0.7;
    }
    else
    {
        discount = 0.9;
    }

    cout << (sum * discount) << endl;
}
