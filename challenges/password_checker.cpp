# include <bits/stdc++.h>
using namespace std;

bool pass_check(string str1){
    bool cap_flag = false, num_flag = false, space_slash_flag = false, len_flag  = false, snum_flag = false;
    if(str1.length() > 4){
        len_flag = true;
    }

    for (int i; i < str1.length(); i++){
        if(str1[i] >= 65 && str1[i] <= 90){
            cap_flag = true;
            break;
        }
    }

    for (int i; i < str1.length(); i++){
        if(str1[i] >= 48 && str1[i] <= 57){
            num_flag = true;
            break;
        }
    }

    for (int i; i < str1.length(); i++){
        if(str1[i] == 32 || str1[i] == 47 || str1[i] == 92){
            break;
        }
    }

    if(str1[0] >= 48 && str1[0] <= 57){
        snum_flag = false;
    }
    else{
        snum_flag = true;
    }
    
    if (cap_flag == true && num_flag == true && space_slash_flag == true && len_flag  == true && snum_flag == true){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    string str1;
    getline(cin, str1);
    cout << pass_check(str1) << endl;
    return 0;
}