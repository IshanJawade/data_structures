# include <iostream>

using namespace std;

int main(){
    int a = 10, *p = &a;
    char bob, *pchar = &bob;

    cout<<"Value of a: "<<a<<endl;
    cout<<"Address of a: "<<&a<<endl;

    cout<<"Value of p: "<<p<<endl;
    cout<<"Address of p: "<<&p<<endl;

    cout<<"Value of *p: "<<*p<<endl;
    cout<<"Address of *p: "<<&*p<<endl;

    cout<<"Size of integer pointer is "<<sizeof(p)<<endl;
    cout<<"Size of character pointer is "<<sizeof(pchar)<<endl;
    return 0;
}