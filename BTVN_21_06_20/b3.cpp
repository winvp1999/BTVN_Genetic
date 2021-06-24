//Bai 3. Tinh tong cac phan tu trong mang su dung con tro
#include <iostream>
using namespace std;
void b3()
{
    system("cls");
    double *Array = nullptr, Sum = 0, *Pointer;
    int Quantity;
    //Input
    cout << "Nhap vao so luong phan tu cua mang\t: ";
    cin >> Quantity;
    cout << endl;
    Array = new double[Quantity];
    Pointer = Array;
    for (int i = 0; i < Quantity; i++)
    {
        cout << "Nhap vao gia tri phan tu thu " << i + 1 << "\t\t: ";
        cin >> *(Array + i);
        Sum += *Pointer;
        Pointer++;
    }
    
    //Output
    cout << "\nTong cac phan tu trong mang la\t\t: " << Sum;
}
int main()
{
    b3();

    return 1;
}