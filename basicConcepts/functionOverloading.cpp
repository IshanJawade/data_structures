// object Overloading in C++

# include <iostream>

using namespace std;

class overload{
    public:
        int a,b;
    public:
    int add(int x, int y){
        return x+y;
    }
    int add(int x, int y, int z){       //overloading function add with different arguments
        cout<<"\nBecause of function overloading.\n";
        return x*y;
    } 
};

int main(){
    overload obj1;
    int a, b, c;
    cout << "Enter values in variables: ";
    cin >> a >> b >> c;
    cout << obj1.add(a,b);
    cout << endl;
    cout << obj1.add(a,b,c);
    cout << endl;
    return 0;
}