#include <iostream>
using namespace std;

int main()
{
    int num1 = 5, num2 = 2;

    double result1 = num1 / num2;  //除法求商
    double result2 = num1 % num2;  //求模，就是取余
    double result3 = num1 ++;  //后置
    double result4 = --num2;  //前置


    cout << "num1 / num2 = " << result1 << endl;
    cout << "num1 % num2 = " << result2 << endl;
    cout << "num1++ = " << result3 << endl;
    cout << "--num2 = " << result4 << endl;

    return 0;

}
