//Bai 6. Viet chuong trinh in ra day so Fibonacci
#include <iostream>
using namespace std;
long fibo(int x)
{
    if (x == 0) return 0;
    else if (x == 1 || x == 2) return 1;
    else return fibo(x - 1) + fibo(x - 2);
}
void b6()
{
    system("cls");
    int FiboCount;
    //Input
    cout << "Nhap vao luong so Fibonacci can in ra : ";
    cin >> FiboCount;
    //Output
    for (int i = 1; i < FiboCount; i++)
    cout << fibo(i) << endl;
}
int main()
{
    b6();

    return 1;
}
