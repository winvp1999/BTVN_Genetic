//Bai 1. Viet chuong trinh nhap vao 1 so,
//  kiem tra so do la so chan hay so le (Su dung if else)
#include <iostream>
using namespace std;
void b1()
{
    int SoNguyen;
    //Input
    cout << "Nhap vao mot so nguyen : ";
    cin >> SoNguyen;

    //Output
    if (SoNguyen % 2 == 0) 
        cout << "\nSo " << SoNguyen << " vua nhap la so chan";
    else
        cout << "\nSo " << SoNguyen << " vua nhap la so le";
}
int main()
{
    system("cls");
    fflush(stdin);

    b1();

    return 1;
}