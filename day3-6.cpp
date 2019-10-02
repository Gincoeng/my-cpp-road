#include <iostream>
using namespace std;

int main()
{
    int sum = 0;
    int i = 1;
    while (i<101)
    {
        sum += i;
        i++;
    } 

    cout << "1-100的累加和为：" << sum << endl;


    return 0;
}
