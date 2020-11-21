# include <iostream>
 using namespace std;

 int countNumbers(int n){
	 int count=0;
	 while(n != 0){
	 	n = n/10;
		cout<<"Current value of n: "<<n<<endl;
	 	count++;
	 }
	return count;
 }

 int main(){
	 int num ;
	 cout << "Enter value of num: " ;
	 cin >> num;
	 cout << countNumbers(num);
	 cout << endl;
	 return 0;
 }