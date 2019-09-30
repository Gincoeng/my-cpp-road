#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
/*
    int salary = 2500;
    cout << "小明的月薪是：" << salary << endl;
    return 0;
*/



    // 要控制cout的输出精度分两步走
    // 1. 要以小数的形式显示答案
    cout << fixed;
    // 2,控制显示的精度
    cout << setprecision(2);
    
    //上面两句话同样可以合并成一句话来写
    cout << fixed << setprecision(2);


    double doublenum = 10.0 / 3.0;
    cout << doublenum << endl;
}
