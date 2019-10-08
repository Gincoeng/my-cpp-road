#include <iostream>
using namespace std;

int main()
{
    cout << "请依次输入你近六个月的工资，以计算你半年内的平均工资！！！" << endl;
    const int times = 6;
    int i = 0;
    double salary;
    double sum = 0;
    double mean_salary = 0;
    int index = 1;

    for (i;i<times;i++)
    {
        cout << "请输入第" << index << "月的工资：" << endl;
        index += 1;
        cin >> salary;
        sum += salary;
    }

    cout << "正在计算半年间的平均工资。。。" << endl;
    mean_salary = sum/6;
    cout << "平均工资为：" << mean_salary << endl;

}
