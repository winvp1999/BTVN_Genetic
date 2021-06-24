//Bai 5. Su dung con tro de duyet mot mang cac so nguyen
//  va in cac gia tri theo thu tu dao nguoc
#include <iostream>
using namespace std;
void b5()
{
    system("cls");
    long *Pointer, *Array;
    int Quantity;
    //Input
    cout << "Nhap vao so luong phan tu cua mang : ";
    cin >> Quantity;
    Array = new long[Quantity];
    Pointer = Array;
    for (int i = 0; i < Quantity; i++)
    {
        cout << "Nhap vao gia tri phan tu thu " << i + 1 << " : ";
        cin >> *Pointer;
        Pointer++;
    }
    //Output
    cout << "\nGia tri cac phan tu o trong mang theo thu tu dao nguoc :" << endl;
    while (Pointer > Array)
    {
        Pointer--;
        cout << *Pointer << "\t";
    }
}
int main()
{
    b5();

    return 1;    
}