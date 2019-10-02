#include <iostream>
using namespace std;


int main()
{
    int month = 3; //记住switch结构，只能是使用   整形int   字符型char   这两种类型
    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        cout << "该月有31天" << endl;
        break;
    case 2:
        cout << "该月有28天" << endl;
        break;
    default:
        cout << "该月有30天" << endl;
        break;

    }
}
