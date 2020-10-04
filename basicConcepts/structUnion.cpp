# include <iostream>
using namespace std;

struct employee{
    int emId;
    string name;
    float salary;
};

union money{
    int accNo;
    float phNo;
};

int main(){
    employee Ishan;
    employee Advait;
    employee Pratik;
    employee Rushikesh;
    employee Ameya;                 // we can make multiple objects of stucture
    Ishan.emId = 0001;
    Ishan.name = "Ishan Jawade";
    Ishan.salary = 1000000;
    cout<<" Employee ID: "<<Ishan.emId<<endl;
    cout<<" Name: "<<Ishan.name<<endl;
    cout<<" Salary: "<<Ishan.salary<<endl;

    money obj1;
    money obj2;
    // Only one entity of union can use at a time
    obj1.accNo = 12;
    obj2.phNo = 123456789;
    cout<<" First Object: "<<obj1.accNo<<endl;
    cout<<" Second Object: "<<obj2.phNo<<endl;
    return 0;
}

