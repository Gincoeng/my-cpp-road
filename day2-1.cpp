#include <iostream>
using namespace std;

int main()
{
    /**大小写字母之间的强制转换 */
    cout << 'A' + ' ' << "\n";  //使用char类型的时候不能使用双引号，只能使用单引号，不然就会报错
    cout << (char)('A' + ' ') << "使用强制转换之后" << endl;
    return 0;
}
