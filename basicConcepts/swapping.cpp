# include <iostream>
using namespace std;

void mySwap(int &a, int &b){      // x and y are reffrence variables
    int temp = a;
    a = b;
    b = temp;
}

// void mySwap(int *a, int *b){      // x and y are pointer variables
//     int temp = *a;                // you have to callby refrence in the main function
//     *a = *b;
//     *b = temp;
// }

int main(){
    int x = 10,y = 20;
    // cout<<"Enter value for x: ";
    // cin>>x;
    // cout<<"Enter value for y: ";
    // cin>>y;
    mySwap(x,y);
    cout<<"After Using Swap function"<<endl;
    cout<<"Value of x: "<<x<<endl;
    cout<<"Value of y: "<<y<<endl;
    return 0;    
}