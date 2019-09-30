#include <iostream>
using namespace std;
int main()
{
//    std::cout << "Hello World !" << std::endl;
    cout << "名称：寒冰射手⭕️艾希" << endl;   // 这里用的是一行一个cout
    cout << "名称：寒冰射手⭕️艾希\n";

    cout << "伤害：56" << "\t" << "攻击距离：600" << endl;
    cout << "伤害：56\t攻击距离：600\n";

    cout << "\n"                              //这里用的是只有一个cout就是一条语句，所以只有一个分号，最后一行不要用\n了，要专业一点用endl
         << "名称：寒冰射手⭕️艾希\n"
         << "伤害：56\t攻击距离：600" << endl;

    return 0;
}
