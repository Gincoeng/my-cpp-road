#include <iostream>
using namespace std;


int main()
{
    /** 在输入当中是 123abc 
    
    * 在c++当中会自动检测是int 类型还是其他类型，没有c语言那么死板
    * char类型是Ω字符形数据，每次就是读入一个字母
    *当读完int数据之后
    *ch1 就会读第一个字符
    *ch2 就会读第二个字符
    *ch3 就会读第三个字符


    */

    int num;
    char ch1, ch2, ch3;
    cout << "请输入：" << endl;
    cin >> num;
    cin >> ch1 >> ch2 >> ch3;
    cout << num << "\n"
         << ch1 << "\t"
         << ch2 << "\t"
         << ch3 << endl;
    return 0;

}
