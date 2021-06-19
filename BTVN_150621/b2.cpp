//Bai 2. Tao 1 file co ten la array.txt.
//  In cac so nguyen tu 0 den n vao file
#include <iostream>
#include <fstream>
using namespace std;
int b2()
{
    system("cls");
    int Integer;
    ofstream Output("array.txt");

    //Input
    cout << "Nhap vao so luong phan tu cua mang : ";
    cin >> Integer;
    //Output
    for (int i = 0; i <= Integer; i++)
    {
        if (i > 0 && i % 10 == 0) Output << endl;
        Output << i << " ";
    }

    Output.close();
}
int main()
{
    b2();

    return 1;
}