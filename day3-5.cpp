#include <iostream>
using namespace std;

int main()
{
    int num = 100;//定义循环变量
    while (num > 0)
    {
        cout << "这是第" << (101-num) << "次循环" << endl;
        num--;
    }
    return 0;
}
