//Bai 9. Viet chuong trinh nhap vao ten hoc sinh, diem toan, diem ly
//  va diem hoa. Cho nguoi dung co hai lua chon : Tiep tuc hoac Dung
//  - Neu Tiep tuc thi nhap tiep.
//  - Neu Dung thi in ra danh sach hoc sinh vua nhap
#include <iostream>
#include <string.h>
using namespace std;

void CopyName(string *Name, string *Copy, int NameCount)
{
    for (int i = 0; i < NameCount; i++)
    *(Copy + i) = *(Name + i);
}
void CopyPoints(float *Points, float *Copy, int PointsCount)
{
    for (int i = 0; i < PointsCount; i++)
    *(Copy + i) = *(Points + i);
}

void Input(string *name, float *Mathpoints,
    float *Physicspoints, float *Chemistrypoints,
    int Studentcount)
{
    fflush(stdin);
    cout << "Nhap vao ten hoc sinh\t: ";
    getline(cin, *(name + Studentcount));
    fflush(stdin);
    cout << "\nNhap vao diem mon toan\t: ";
    cin >> *(Mathpoints + Studentcount);
    cout << "\nNhap vao diem mon ly\t: ";
    cin >> *(Physicspoints + Studentcount);
    cout << "\nNhap vao diem mon hoa\t: ";
    cin >> *(Chemistrypoints + Studentcount);
}

void b9()
{
    system("cls");
    int choice, StudentCount = 1;
    string *Name = new string[StudentCount];
    float *MathPoints = new float[StudentCount], 
    *PhysicsPoints = new float[StudentCount],
    *ChemistryPoints = new float[StudentCount];
    
    //Input
    Input (Name, MathPoints, PhysicsPoints, ChemistryPoints, StudentCount - 1);
    fflush(stdin);
    cout << "\nBan co hai lua chon :\n\t1. Tiep tuc\n\t2. Dung\nNhap vao lua chon cua ban : ";
    cin >> choice;
    while (choice == 1)
    {        
        string *_Name = new string[StudentCount];
        float *_MathPoints = new float[StudentCount], 
        *_PhysicsPoints = new float[StudentCount],
        *_ChemistryPoints = new float[StudentCount];
        CopyName(Name, _Name, StudentCount);
        CopyPoints(MathPoints, _MathPoints, StudentCount);
        CopyPoints(PhysicsPoints, _PhysicsPoints, StudentCount);
        CopyPoints(ChemistryPoints, _ChemistryPoints, StudentCount);

        StudentCount++;

        Name = new string[StudentCount];
        MathPoints = new float[StudentCount];
        PhysicsPoints = new float[StudentCount];
        ChemistryPoints = new float[StudentCount];

        CopyName(_Name, Name, StudentCount - 1);
        CopyPoints(_MathPoints, MathPoints, StudentCount - 1);
        CopyPoints(_PhysicsPoints, PhysicsPoints, StudentCount - 1);
        CopyPoints(_ChemistryPoints, ChemistryPoints, StudentCount - 1);

        Input (Name, MathPoints, PhysicsPoints, ChemistryPoints, StudentCount - 1);

        cout << "\nBan co hai lua chon :\n\t1. Tiep tuc\n\t2. Dung\nNhap vao lua chon cua ban : ";
        cin >> choice;
    }
    //Output
    cout << "\nHo va ten\t\tToan\tLy\tHoa";
    for (int i = 0; i < StudentCount; i++)
    if ((*(Name + i)).length() < 9)
        cout << endl << *(Name + i) << "\t\t\t" 
            << *(MathPoints + i) << "\t" 
            << *(PhysicsPoints + i) << "\t"
            << *(ChemistryPoints + i);
    else
        cout << endl << *(Name + i) << "\t\t" 
            << *(MathPoints + i) << "\t" 
            << *(PhysicsPoints + i) << "\t"
            << *(ChemistryPoints + i);
}
int main()
{
    b9();

    return 1;
}