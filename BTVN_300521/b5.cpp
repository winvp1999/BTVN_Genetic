//Bai 5. Them 1 phan tu x vao mang sao cho mang van duoc sap
//  xep theo thu tu tang dan (mang co 30 phan tu ngau nhien)
#include <iostream>
using namespace std;
void Sort(float array[], int Quantity)
{
    float X;
    int Position;
    for (int i = 1; i < Quantity; i++)
    {
        X = array[i];
        Position = i;
        while (Position > 0 && X < array[Position - 1])
        {
            array[Position] = array[Position - 1];
            Position--;
        }
        array[Position] = X;
    }
}
void b5()
{
    system("cls");
    int Quantity = 31;
    float Array[Quantity], NumberX;
    //Input
    cout << "Nhap vao cac phan tu cua mang :";
    for (int i = 0; i < Quantity - 1; i++)
    {
        cout << "\nNhap vao phan tu thu " << i + 1 << " : ";
        cin >> Array[i];
    }


    cout << "\nNhap vao ngau nhien mot phan tu X de them vao mang : ";
    cin >> NumberX;

    Sort(Array, Quantity - 1);

    //Ouput
    cout << "\nMang ban dau sap xep theo thu tu tang dan :" << endl;
    for (int i = 0; i < Quantity - 1; i++) cout << Array[i] << " ";

    cout << "\nChen them phan tu x va sap xep lai mang :" << endl;
    
    Array[Quantity - 1] = NumberX;
    Sort(Array, Quantity);

    for (int i = 0; i < Quantity; i++) cout << Array[i] << " ";
}
int main()
{
    b5();

    return 1;
}