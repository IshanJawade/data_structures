// To check the given number is palindrome or not

# include <iostream>
using namespace std;

bool palindromCheck(int num){
	int cut, rev = 0, n = num;
	while( n != 0 ){
		cut = n % 10; 			// to save last digit into "cut" variable
		n = n/10;				// to eliminate last digit from original integer		
		rev = rev * 10 + cut; 	// to make new integer (reverse of Original)
		//cout<<"n: " << n << endl;
		//cout<<"rev: "<<rev << endl;
	}
	return (num == rev);		// this will return bool value (true = 1, false = 0)
}

int main(){
	system("clear");			// Clear console screen
	int num;
	cout << "Enter a number: ";
	cin >> num; 
	cout << "Note: 1 = Yes, 0 = No"<<endl;
	cout <<"-> " << palindromCheck(num);
	cout << endl;
	return 0;
}