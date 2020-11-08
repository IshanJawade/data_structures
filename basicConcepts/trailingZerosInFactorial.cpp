//  How many trailing zeros in the factorial 	

# include <iostream>
using namespace std;

int factorial(int n){
	if (n == 0)
		return 1;
	return n * factorial(n-1);
}

int trailingZeros(int fact){
	int cut, zeroCount = 0, n = fact;
	while( n%10 == 0 ){
			zeroCount ++ ;
			n = n/10;
		}
		return zeroCount;
	}

int trailingZerosOptimized(int num){
	int ans;
	if ( num%5 == 0){
		ans = num / 5;
	}
		
	return ans;
}

int main(){
	system("clear");
	cout << "Enter a number: ";
	int num;
	cin >> num;
	int fact = factorial(num);
	cout << "Factorial: " << fact << endl;
	//cout << "Tailing Zero count: " << trailingZeros(fact) << endl;
	cout << "Tailing Zero count: " << trailingZerosOptimized(num) << endl;
	return 0;
}