//Bai 11. Viet chuong trinh in ra hinh tam giac
#include <iostream>
using namespace std;
void b11()
{
    system("cls");
    int Height;
    //Input
    cout << "Nhap do chieu cao hinh tam giac : ";
    cin >> Height;
    //Output
    for (int i = 0; i < Height; i++)
    {
        for (int j = 0; j < Height - i; j++)
        cout << '*';
        cout << endl;
    }
}
int main()
{
    b11();

    return 1;
}