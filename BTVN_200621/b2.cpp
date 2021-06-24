// Bai 2. Hoan doi gia tri hai so su dung con tro
#include <iostream>
using namespace std;
void Swap(double *&a, double *&b)
{
    double *Pointer = a;
    a = b;
    b = Pointer;
}
void b1()
{
    system("cls");
    double Value1, Value2,
        *Pointer1, *Pointer2;
    //Input
    cout << "Nhap vao so thu nhat\t: ";
    cin >> Value1;
    cout << "Nhap vao so thu hai\t: ";
    cin >> Value2;

    Pointer1 = &Value1;
    Pointer2 = &Value2;

    Swap(Pointer1, Pointer2);


    //Output
    cout << "Thu tu hai so sau khi hoan doi : " << *Pointer1 << " " << *Pointer2;
}
int main()
{
    b1();

    return 1;
}