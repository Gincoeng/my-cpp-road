#include <iostream>
using namespace std;

int main()
{
    //判断盘符是否合法
    char disk;
    cin >> disk;
    cout << "请输入需要判别的盘符：" << endl;

    if (disk >= 'A' && disk <= 'Z')  //大写字母的ascii码事65-90 ；小写字母事97-122， 大写字母跟小写字母相差32。
    {
        cout << "该盘符是合法的！" << endl;
    }
    else
    {
        cout << "该盘符是非法的！" << endl;
    }

    return 0;
}
