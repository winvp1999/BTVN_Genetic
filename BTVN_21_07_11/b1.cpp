// Bai 1. Xay dung lop bieu dien khai niem so phuc
//  voi hai thanh phan du lieu va cac ham thanh
//  phan xuat, nhap, dinh gia tri cho so phuc,
//  cong, tru, nhan, chia hai so phuc.
//  Viet chuong trinh cho phep nhap vao hai so
//  phuc, in ra ket qua cac phep toan cong, tru,
//  nhan, chi hai so phuc ke tren.
#include <iostream>
#include <math.h>
using namespace std;
class ComplexNum
{
    private:
    float RealValue, ImaginaryValue;
    public:
    ComplexNum()
    {
        this->RealValue = 0;
        this->ImaginaryValue = 0;
    }
    ComplexNum(float realvalue, float imaginaryvalue)
    {
        this->RealValue = realvalue;
        this->ImaginaryValue = imaginaryvalue;
    }
    ~ComplexNum(){}
    void Input(string str)
    {
        cout << "\nNhap vao gia tri chu so thu " << str;
        cout << "\nNhap vao phan thuc\t: ";
        cin >> this->RealValue;
        cout << "\nNhap vao phan ao\t: ";
        cin >> this->ImaginaryValue;
    }
    void Output(string str)
    {

        cout << "\nGia tri phep tinh " << str << " hai so phuc :";
        if (this->ImaginaryValue == 0)
            cout << this->RealValue;
        else if (this->RealValue == 0)
            cout << this->ImaginaryValue << "i";
        else cout << this->RealValue << " + " << this->ImaginaryValue << "i";
    }
    ComplexNum operator+(ComplexNum Number)
    {
        ComplexNum Sum;
        Sum.RealValue = this->RealValue + Number.RealValue;
        Sum.ImaginaryValue = this->ImaginaryValue + Number.ImaginaryValue;
        return Sum;
    }
    ComplexNum operator-(ComplexNum Number)
    {
        ComplexNum Sub;
        Sub.RealValue = this->RealValue - Number.RealValue;
        Sub.ImaginaryValue = this->ImaginaryValue - Number.ImaginaryValue;
        return Sub;
    }
    ComplexNum operator*(ComplexNum Number)
    {
        ComplexNum Mul;
        Mul.RealValue = this->RealValue * Number.RealValue - this->ImaginaryValue * Number.ImaginaryValue;
        Mul.ImaginaryValue = this->RealValue * Number.ImaginaryValue + this->ImaginaryValue * Number.RealValue;
        return Mul;
    }
    ComplexNum operator/(ComplexNum Number)
    {
        ComplexNum Div;
        float Denominator = sqrt(Number.RealValue * Number.RealValue + Number.ImaginaryValue * Number.ImaginaryValue);
        Div = ComplexNum(this->RealValue, this->ImaginaryValue) * ComplexNum(Number.RealValue, -Number.ImaginaryValue);
        Div.RealValue /= Denominator;
        Div.ImaginaryValue /= Denominator;
        return Div;
    }
};
//chuong trinh xu ly
void b1()
{
    system("cls");
    ComplexNum FirstNumber, SecondNumber, Result;
    FirstNumber.Input("nhat");
    SecondNumber.Input("hai");

    Result = FirstNumber + SecondNumber;
    Result.Output("cong");

    Result = FirstNumber - SecondNumber;
    Result.Output("tru");

    Result = FirstNumber * SecondNumber;
    Result.Output("nhan");

    Result = FirstNumber / SecondNumber;
    Result.Output("chia");
}
int main()
{
    b1();

    return 1;
}