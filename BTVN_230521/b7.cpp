//Bai 7. Viet chuong trinh de tinh giai thua cua mot so 
//  nguyen duong bat ky
#include <iostream>
using namespace std;
//Tinh giai thua cua mot so
long Factorial(int x)
{
    if (x == 0 || x == 1) return x;
    else return x * Factorial(x - 1);
}
void b7()
{
    system("cls");
    int IntValue;
    //Input
    cout << "Nhap vao so nguyen duong bat ky : ";
    cin >> IntValue;
    //Output
    cout << "\nGiai thua cua so " << IntValue << " = " << IntValue << "! = " << Factorial(IntValue);
}
int main()
{
    b7();

    return 1;
}