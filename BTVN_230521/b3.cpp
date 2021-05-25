//Bai 3. Viet chuong trinh chuyen doi ma thap phan sang nhi phan.
#include <iostream>
using namespace std;

void b3()
{
    system("cls");
    int DecimalNumber;
    //Input
    cout << "Nhap vao so thap phan : ";
    cin >> DecimalNumber;
    //Solve
    string BinaryNumber = "";
    char Num;
    while (DecimalNumber > 0)
    {
        Num = DecimalNumber % 2 == 0 ? '0' : '1'; 
        BinaryNumber = Num + BinaryNumber;
        DecimalNumber /= 2;
    }
    //Output
    cout << "\nGia tri cua so tren o he nhi phan la :" << BinaryNumber;
}

int main()
{
    b3();

    return 1;
}