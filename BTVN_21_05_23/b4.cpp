//Bai 4. Viet chuong trinh in ra bang cuu chuong
//  cua so n bat ky nhap tu ban phim
#include <iostream>
using namespace std;
void b4()
{
    system("cls");
    int IntValue;
    //Input
    cout << "Nhap vao so tu nhien n : ";
    cin >> IntValue;
    //Output
    cout << "\nBang cuu chuong cua so tren :";
    for (int i = 1; i <= 9; i++)
    {
        cout << "\n\t" 
            << IntValue 
            << " * " 
            << i 
            << " = "
            << IntValue * i; 
    }
}
int main()
{
    b4();

    return 1;
}