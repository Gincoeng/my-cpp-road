#include <iostream>
using namespace std;


int main()
{
    int input_times = 0;
    int password = 1234;
    int input_password;

    while(input_times < 3)
    {

        cout << "请输入你的密码：" << endl;    
        cin >> input_password;    

        if (password != input_password)
        {
            input_times++;
            cout << "第" << input_times << "次输错密码！ 请重新输入" << endl; 
        }

        else
        {
            cout << "请选择你的操作" << endl;
            break;
        }
    }
    
    if (input_times == 3)
    {
        cout << "密码错误三次，已被锁定！！！" << endl;  
    }

    else
    {
        cout << "欢迎下次光临！！！" << endl;
    }

    return 0;
}
