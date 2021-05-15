# include <bits/stdc++.h>
using namespace std;

int fun(int n, int m){
    int divisible_sum = 0, non_divisible_sum = 0, diff;
    for(int i = 1; i <= m; i++){
        if(i % n == 0){
            divisible_sum = divisible_sum + i;
        }
        else {
            non_divisible_sum = non_divisible_sum + i;
        }
    }
    diff = divisible_sum - non_divisible_sum;
    return diff;
}

int main(){
    int n,m;
    cout << "n= ";
    cin >> n;
    cout << "m= ";
    cin >> m;
    cout << fun(n, m)<< endl ;
    return 0;
}