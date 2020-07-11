# include <iostream>

using namespace std;

void num (int n){
    if (n > 0){
        num(n-1);
        cout<<n;
    }
}

void num2 (int m){
    if (m > 0){
        cout<<m;
        num2(m-1);
    }
}

int main(){
    int a = 5;
    cout<<"First recursive function: ";
    num(a);
    cout<<"\nSecond recursive function: ";
    num2(a);
    cout<<endl;
    return 0;
}