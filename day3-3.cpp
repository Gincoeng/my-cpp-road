#include <iostream>
using namespace std;

int main()
{

    int choice = 7; //一般在行业上超过20个的时候就不会使用switch结构

    switch (choice)
    {
    case 1:
        cout << "good" << endl;
        break;
    case 2:
        cout << "good good" << endl;
        break;
    case 3:
        cout << "good good good" << endl;
        break;
    default:
        cout << "well done" << endl;


    }


}
