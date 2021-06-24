// Bai 6. Cap phat mot mang dong
//     Thay doi kich thuoc mang
//     Them phan tu vao mang
//     Xoa phan tu mang
//     Tim vi tri cua phan tu mang bat ky khi nguoi dung muon tim kiem
#include <iostream>
using namespace std;
void Array_Output(double *pointer, int quantity)
{
    while (quantity > 0)
    {
        quantity--;
        cout << *pointer << " ";
        pointer++;
    }
}
void b6()
{
    system("cls");
    double *Array = nullptr, *Pointer = nullptr, *PositionArray = nullptr, Value;
    int Quantity = 0, Position = -1, Choice = 0, ResultQuantity = 0;
    //Input
    cout << "Nhap vao so luong phan tu cua mang : ";
    cin >> Quantity;
    Array = new double[Quantity];
    for (int i = 0; i < Quantity; i++)
    {
        cout << "Nhap vao gia tri phan tu thu " << i + 1 << " : ";
        cin >> Array[i];
    }

    cout << "\nMang vua nhap la : " << endl;
    Array_Output(Array, Quantity);

    //Thay doi kich thuoc mang
    Pointer = new double[Quantity];
    for (int i = 0; i < Quantity; i++)
    Pointer[i] = Array[i];

    Quantity++;
    delete Array;
    Array = nullptr;
    Array = new double[Quantity];

    for (int i = 0; i < Quantity - 1; i++)
    Array[i] = Pointer[i];
    
    delete Pointer;
    Pointer = nullptr;
    
    //Them phan tu vao mang
    cout << "\nNhap them phan tu vao mang : ";
    cin >> Array[Quantity - 1];
    cout << "\nMang vua cap nhat la : " << endl;
    Array_Output(Array, Quantity);
    //Xoa phan tu khoi mang
    cout << "\nNhap vao vi tri can xoa khoi mang : ";
    cin >> Position;

    Pointer = new double[Quantity];
    for (int i = 0; i < Quantity; i++)
    Pointer[i] = Array[i];

    delete Array;
    Array = nullptr;
    Array = new double[Quantity - 1];

    for (int i = 0; i < Position - 1; i++)
    Array[i] = Pointer[i];
    for (int i = Position; i < Quantity; i++)
    Array[i - 1] = Pointer[i];

    Quantity--;
    delete Pointer;
    Pointer = nullptr;

    cout << "\nMang vua sau khi xoa phan tu la : " << endl;
    Array_Output(Array, Quantity);

    //Tim vi tri cua phan tu mang bat ky khi nguoi dung muon tim kiem
    cout << "\nBan co muon tim kiem mot phan tu trong mang khong?"
        << "\n\t1.Co\t2.Khong"
        << "\nNhap vao lua chon cua ban : ";
    cin >> Choice;
    if (Choice < 0) return;
    cout << "\nNhap gia tri cua phan tu mang can tim : ";
    cin >> Value;
    PositionArray = new double[Quantity];
    for (Pointer = Array; Pointer < (Array + Quantity); Pointer++)
    {
        if (*Pointer == Value)
        {
            ResultQuantity++;
            PositionArray[ResultQuantity - 1] = Pointer - Array + 1;
        }
    }
    if (ResultQuantity > 1)
    {
        cout << "\nPhan tu vua nhap xuat hien trong mang tai cac vi tri : ";
        for (int i = 0; i < ResultQuantity; i++)
        cout << PositionArray[i] << " ";
    }         
    if (ResultQuantity == 1) cout << "\nPhan tu vua nhap xuat hien trong mang tai vi tri : " << *PositionArray;
    else cout << "\nPhan tu vua nhap khong ton tai trong mang";    
}
int main()
{
    b6();

    return 1;
}