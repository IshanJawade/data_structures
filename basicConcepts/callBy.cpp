// Implimenting call by value and call by reference

# include <iostream>
using namespace std;

void callByValue(int a, int b){
    a = 55;
    b = 44;
}

void callByReference(int &ptr1, int &ptr2){
    ptr1 = 55;
    ptr2 = 44;
}

void calByReferenceCType(int *ptr1, int *ptr2){
    *ptr1 = 102;
    *ptr2 = 450;
}

int main(){
    int x = 10;
    int y = 30;
    cout << "Original values: x=" << x <<" y=" << y << endl;
    cout << "After changing values in the functions ... " << endl;

    callByValue(x, y);
    cout << "Call by value: x=" << x <<" y=" << y << endl; 

    callByReference(x, y);
    cout << "Call by reference: x=" << x <<" y=" << y << endl;

    calByReferenceCType(&x, &y);
    cout << "Call by reference (C-style): x=" << x <<" y=" << y << endl;

    return 0;
}