//Bai 1. Viet chuong trinh dao nguoc day so tu 1 den n
#include <iostream>
using namespace std;
void b1()
{
    system("cls");
    int IntValue, NumberCounting = 0;
    //Input
    cout << "Nhap vao so tu nhien : ";
    cin >> IntValue;
    //Output
    for (int i = IntValue; i > 0; i--)
    {
        cout << i << "\t";
        NumberCounting++;
        if (NumberCounting % 10 == 0)
        {
            cout << endl;
            NumberCounting = 0;
        }
    }
}

int main()
{
    b1();

    return 1;
}