# include <iostream>
using namespace std;

class arrayOps{
	public:
		int search(){

		}
};

int main(){
	int arr[]={12, 34, 56, 78, 90, 97, 86, 64, 42, 31};
	cout <<  arr <<endl;

	cout << &arr[0] << endl;
	cout << arr[2] << endl;
	cout << *(arr + 2) << endl;
	int arrlen = *(&arr + 1) - arr; 		//formula to finding length of array
	cout<<arrlen;
	arrayOps obj;

	return 0;
}