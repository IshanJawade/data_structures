# include <iostream>
using namespace std;

class arrayOps{
	public:
		int search(){

		}
};

int main(){
	int arr[]={12, 34, 56, 78, 90, 97, 86, 64, 42, 31};
	cout << "Address of first elemnts of array: " <<  arr ;
	cout << "" ;
	int len = *(&arr + 1) - arr; 		// *(&arr + 1) contains address of 
	cout<<len;
	arrayOps obj;

	return 0;
}