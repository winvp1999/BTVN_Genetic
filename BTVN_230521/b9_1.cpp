//Bai 9. Viet chuong trinh nhap vao ten hoc sinh, diem toan, diem ly
//  va diem hoa. Cho nguoi dung co hai lua chon : Tiep tuc hoac Dung
//  - Neu Tiep tuc thi nhap tiep.
//  - Neu Dung thi in ra danh sach hoc sinh vua nhap
#include <iostream>
using namespace std;
class Student
{
    public:
    string Name;
    float MathGrade, PhysicsGrade, ChemistryGrade;
    
    Student();
    Student(string _Name, float _Mathgrade, float _Physicsgrade, float _Chemistrygrade);
    Student(const Student& student);
    
    ~Student();
    
    void Input(Student student);
    Student operator=(const Student& student);
    
};
Student::Student()
{
    this->Name = "";
    this->MathGrade = 0;
    this->PhysicsGrade = 0;
    this->ChemistryGrade = 0;
}
Student::Student(string _Name, float _Mathgrade, float _Physicsgrade, float _Chemistrygrade)
{
    this->Name = _Name;
    this->MathGrade = _Mathgrade;
    this->PhysicsGrade = _Physicsgrade;
    this->ChemistryGrade = _Chemistrygrade;
}
Student::Student(const Student& student)
{
    this->Name = student.Name;
    this->MathGrade = student.MathGrade;
    this->PhysicsGrade = student.PhysicsGrade;
    this->ChemistryGrade = student.ChemistryGrade;
}
Student::~Student()
{

}
Student Student::operator=(const Student& student)
{
    Student x;
    x.Name = student.Name;
    x.MathGrade = student.MathGrade;
    x.PhysicsGrade = student.PhysicsGrade;
    x.ChemistryGrade = student.ChemistryGrade;
    return x;
}
void Student::Input(Student student)
{
    cout << "Nhap vao ten hoc sinh\t: ";
    getline(cin, student.Name);
    fflush(stdin);
    cout << "\nNhap vao diem mon toan\t: ";
    cin >> student.MathGrade;
    cout << "\nNhap vao diem mon ly\t: ";
    cin >> student.PhysicsGrade;
    cout << "\nNhap vao diem mon hoa\t: ";
    cin >> student.ChemistryGrade;
    fflush(stdin); 
}
void b9()
{
    system("cls");
    string name;
    float math_grade, physics_grade, chemistry_grade;
    int choice;
    Student *StudentList;
    //Input
    cout << "Nhap vao ten hoc sinh\t: ";
    getline(cin, name);
    fflush(stdin);
    cout << "\nNhap vao diem mon toan\t: ";
    cin >> math_grade;
    cout << "\nNhap vao diem mon ly\t: ";
    cin >> physics_grade;
    cout << "\nNhap vao diem mon hoa\t: ";
    cin >> chemistry_grade;
    fflush(stdin);
    cout << "\nBan co hai lua chon :\n\t1. Tiep tuc\n\t2.Dung\nNhap vao lua chon cua ban : ";
    cin >> choice;
    
    cout << "\n" << StudentList -> Name << "\t" 
        << StudentList->MathGrade << "\t"
        << StudentList->PhysicsGrade << "\t"
        << StudentList->ChemistryGrade << "\t";
    
    //StudentList = new Student(name, math_grade, physics_grade, chemistry_grade);

    // cout << "\n" << StudentList -> Name << "\t"
    //     << StudentList -> MathGrade << "\t"
    //     << StudentList -> PhysicsGrade << "\t"
    //     << StudentList -> ChemistryGrade << "\t";
}
int main()
{
    b9();

    return 1;
}