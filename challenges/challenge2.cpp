# include <bits/stdc++.h>
using namespace std;

string fun(int n ,int num1, int num2){
    bool flag;
    string s_flag;
    if (n % num1 == 0 && n % num2 == 0){
        flag=true;
    }
    else {
        flag=false;
    }
    
    if (flag == 1){
        s_flag = "true";
    }
    else {
        s_flag = "flase";
    }
    return s_flag;
}

int main(){
    int n, num1, num2;
    cout << "n= "; cin >> n;
    cout << "num1= "; cin >> num1;
    cout << "num2= "; cin >> num2;
    cout << fun(n, num1, num2) << endl;
    return 0;
}