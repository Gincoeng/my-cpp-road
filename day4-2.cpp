#include <iostream>
using namespace std;

int main()
{
    cout << "一\t二\t三\t四\t五\t六\t日" << endl;
    
    //定义一周有多少天，该月的第一天是周几
    int days = 31;
    int dayofweek = 2;


//确定出一号是周几
    for (int i=1;i<dayofweek;i++)
    {
        cout <<"\t" ;
    }

    for (int j=0;j<31;j++)
    {
        cout << j+1 ;
        if ((j+dayofweek)%7==0)
            {
                cout << "\n";
            }
        else
            {
                cout << "\t";
            }
    }
    return 0;
}
