//Bai 1. Tao 1 file co 2 gia tri a va b lay du lieu
//  tu file de tinh: a + b, a - b, a * b, a / b
#include <iostream>
#include <fstream>
using namespace std;
void b1()
{
    system("cls");

    double a, b;
    
    ifstream Input("b1.in");
    //Input
    Input >> a;
    Input >> b;
    //Output
    cout << "Nap du lieu hai so tu file" 
        << "\nSo thu nhat\t: " << a 
        << "\nSo thu hai\t: " << b
        << "\nTong cua hai so\t: " << a + b
        << "\nHieu cua hai so\t: " << a - b
        << "\nTich cua hai so\t: " << a * b
        << "\nThuong cua hai so\t: " << a / b;

    Input.close();
}
int main()
{
    b1();

    return 1;
}