# include <iostream>
using namespace std;

int num (int n){
    static int x=0;
    if (n > 0){
        x++;
        return num(n-1)+x;
    }
}

int main(){
    int a=5,r;
    r = num(a);
    cout<<r;
    return 0;
}