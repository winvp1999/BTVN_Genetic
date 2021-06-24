//Bai 4. Tim do dai chuoi su dung con tro
#include <iostream>
#include <string>
using namespace std;
int Length(string str)
{
    int length = 0;    
    for (char *Pointer = &str[0]; *Pointer != '\0'; Pointer++) length++;
    return length;    
}
void b4()
{
    system("cls");
    string String;
    //Input
    cout << "Nhap vao mot chuoi bat ky\t: ";
    cin >> String;
    //Output
    cout << "Do dai cua chuoi vua nhap\t: " << Length(String);
}
int main()
{
    b4();

    return 1;
}