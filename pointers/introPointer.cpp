# include <iostream>
using namespace std;

int main(){

    int num1 = 90;
    int* ptr1 = &num1;

    cout << "Value: " << ptr1 << " contents: " << *ptr1 << " address: " << &ptr1 << "\n";

    cout << (num1 == *ptr1) << "\n";

    return 0;
}