# include <iostream>

using namespace std;

int add(int x, int y, int z){ //Function defination
    return(x+y);
}

int add(int,int=0,int=0); //Function Declaration [Scope:(Global)] =0 is for default 

int main(){
    int a,b,c;
    cout<<"Enter First Number: ";
    cin>>a;
    cout<<"Enter Second Number: ";
    cin>>b;
    //add(a,b);
    cout<<"The sum is "<<add(a,b,c)<<endl; //Function is used here 
    return 0;
}