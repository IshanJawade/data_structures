# include <iostream>
# include <vector>
using namespace std;

int main(){
	vector<int> v1;
	int size, num;

	cout<<"Enter Size of Vector: ";
	cin>>size;

	for(int i; i < size; i++){
		cin>>num;
		v1.push_back(num);
	}

	for(auto i = v1.begin(); i < v1.end(); i++){
		cout<<(*i)<<endl;
	}
	return 0;
}