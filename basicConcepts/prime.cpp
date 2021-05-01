# include <iostream>
using namespace std;

bool checkPrime(int n){
    if(n == 2){
        return true;
    }
	else if(n%2!=0 && n%3!=0 && n%5!=0){
        return true;
    }
    return false;
}

int main(){
	cout<<"Enter the numnber: ";
    int num;
    cin>>num;
    cout<<"Note: 1 = Prime 0 = Not Prime"<<endl;
    cout<<"-> "<<checkPrime(num)<<endl;
    return 0;
}