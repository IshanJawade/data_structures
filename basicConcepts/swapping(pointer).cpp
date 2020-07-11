# include <iostream>
using namespace std;

void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
    //cout<<<<sum<<endl;
}

int main()
{
    int a,b;
    cout<<"Enter two numbers:"<<endl<<"a = ";
    cin>>a;
    cout<<"b = ";
    cin>>b;
    swap(a,b);
    cout<<"Swapped values are: \n";
    cout<<"a = "<<a<<endl<<"b = "<<b<<endl;
    return 0;
}