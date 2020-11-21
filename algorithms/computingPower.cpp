// Program to find out Powers of Entered Number 
// this solution will take (Theta n) time 

# include <iostream>
using namespace std;

int myPower(int y, int x){
	int ans=1;
	if (x == 1){
		return y;
	}
	else if (x == 0){
		return 1;
	}
	else{
		for(int i=0; i<x; i++){
			ans = ans * y;
		}
		return ans;
	}

}

int main(){
	system("clear");
	int num, pow;
	cout<<"Enter number: ";
	cin >> num;
	cout<<"Enter power: ";
	cin >> pow;
	cout << myPower(num, pow) <<  endl;
	return 0;
}

