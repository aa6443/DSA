#include <bits/stdc++.h>
using namespace std;

string removeOuterParentheses(string s) {
        string result = "";
        int balance = 0;
        for(int i=0;i<s.size();i++){
            //for opening braces 
            if(s[i] == '('){
                if(balance >0){
                    result += s[i];
                }
                balance++;
            }
            //for closing braces 
            else{
                balance--;
                if(balance > 0){
                    result += s[i];
                }
            }
        }
        return result;
    }

int main(){
    string s = "(()())(())";
    string ans = removeOuterParentheses(s);
    cout<<ans<<endl;
    return 0;
}