// Paranthesis matching using stack 

# include <bits/stdc++.h>   //includes built in stack function
# include <iostream>
using namespace std;

void Check(string expression){
    stack <int> s;      // declaration of "int" stack named "s".
    int flg = 1;    // flag 
    for(int i=0; i<expression.length(); i++){
        if (expression[i] == '('){
            s.push(1);
        } else if (expression[i] == ')'){
            if (s.empty() == 1){
                cout<<"\nEqution is unbalanced"<<endl;
                flg --;     //flag decreamented
            }
            else{
            s.pop();
            }
        }
    }
    if (flg == 1){          //flag used here!
        if(s.empty() == 1){
            cout<<"\nEqution is balanced"<<endl;
        }
        else{
            cout<<"\nEqution is unbalanced"<<endl;
        }
    }
}

int main(){
    //string expression = "(((a+b)-(c-d)))";
    cout<<"Enter your expression:"<<endl;
    string expression;
    cin>>expression;
    Check(expression);
    return 0;
}

// Written by Ishan Jawade ✌🏻.