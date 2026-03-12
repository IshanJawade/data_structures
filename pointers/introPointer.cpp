# include <iostream>
using namespace std;

int main(){

    int num1 = 90;
    int *ptr1 = &num1;

    cout << "Value: " << ptr1 << " contents: " << *ptr1 << " address: " << &ptr1 << "\n";

    cout << "Refernce to a pointer: " << *&ptr1;

    cout << (num1 == *ptr1) << "\n";

    return 0;
}