//Bai 13. Nhap 2 so nguyen x va y. Viet chuong trinh
//  tinh tong binh phuong cac so tu x den y
//  Cong thuc tong quat tinh tong binh phuong cac 
//  so tu nhien lien tiep : A = n(n+1)(2n+1)/6
#include <iostream>
using namespace std;
void swap(int &x, int &y)
{
    int _x = x;
    x = y;
    y = _x;
}
long long SumOfSquares(int x)
{
    //Slow
    if (x < 0) x = abs(x);
    // if (x == 0) return 0;
    // else return x * x + SumOfSquares(x - 1);
    return (x * (x + 1) * (2 * x + 1)) / 6;
}
long long Execute(int x, int y)
{
    if (x > y) swap(x, y);
    cout << endl << y 
        << "\t" << SumOfSquares(y) 
        << "\n" << x 
        << "\t" <<SumOfSquares(x - 1) << endl;;
    if (x < 0 && y < 0) return SumOfSquares(x) - SumOfSquares(y + 1);
    if (x < 0 && y == 0) return SumOfSquares(x);
    if (x < 0 && y > 0) return SumOfSquares(x) + SumOfSquares(y);

    if (x == 0 && y == 0) return 0;
    if (x == 0 && y > 0) return SumOfSquares(y);

    if (x > 0 && y > x) return SumOfSquares(y) - SumOfSquares(x - 1); 

}
void b13()
{
    int FirstNumber, LastNumber;
    //Input
    cout << "Nhap vao so nguyen dau tien\t: ";
    cin >> FirstNumber;
    cout << "\nNhap vao so nguyen thu hai\t: ";
    cin >> LastNumber;
    //Output
    cout << "\nTong binh phuong cac so nguyen tu x den y la : "
        << Execute(FirstNumber, LastNumber);
}
int main()
{
    b13();

    return 1;
}