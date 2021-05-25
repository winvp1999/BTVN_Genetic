//Bai 14. Nhap mot so nguyen duong n. Viet chuong trinh
//  kiem tra xem so do co phai la so hoan hao hay khong
#include <iostream>
using namespace std;
bool IsPerfectNumber(long long x)
{
    long long Divisor = 0;
    for (long long i = 1; i <= x / 2; i++)
    if (x % i == 0) Divisor += i;
    return (Divisor == x);
}
void b14()
{
    system("cls");
    long long IntValue;
    //Input
    cout << "Nhap vao mot so nguyen duong : ";
    cin >> IntValue;
    //Output
    if (IsPerfectNumber(IntValue)) cout << "\nSo " 
        << IntValue << " vua nhap la so hoan hao";
    else cout << "\nSo " << IntValue 
        << " vua nhap khong phai la so hoan hao";
}
int main()
{
    b14();

    return 1;
}