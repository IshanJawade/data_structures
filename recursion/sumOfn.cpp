//Sum of n numbers using recursion 
# include <iostream>
using namespace std;

int Sum (int n ){
    if(n <= 1){
        return n;
    }
    return n + Sum(n-1);
}

int main(){
    int n;
    cout<<"Enter value of n: ";
    cin>>n;
    cout<<Sum(n)<<endl;
    return 0;
}