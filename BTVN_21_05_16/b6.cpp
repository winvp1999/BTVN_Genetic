#include <iostream>
using namespace std;
void b6()
{
    float InitVelocity, Accelerate, Time;
    //Input data
    cout << "Nhap vao van toc ban dau\t: ";
    cin >> InitVelocity;
    cout << "Nhap vao gia toc cua vat\t: ";
    cin >> Accelerate;
    cout << "Thoi gian vat di chuyen\t\t: ";
    cin >> Time;
    
    //Output
    cout << "\nVan toc sau khoang thoi gian " << Time << " giay la : "
        << InitVelocity + (Accelerate * Time); 
        //Cong thuc tinh van toc theo gia toc va thoi gian
}
int main()
{
    system("cls");
    fflush(stdin);

    b6();

    return 1;
}