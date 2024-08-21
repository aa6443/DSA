#include <bits/stdc++.h>
using namespace std;
//using stl - stringstream
string reverseWords(string s) {
        stringstream ss(s);
        string token ;
        string result = "";
        while( ss>>token){
            result = token + " " + result;
        }
        if(!result.empty()){
            result.pop_back();
        }
        return result;
}
//using two pointer

int main(){
    string s = "the sky is blue";
    string ans = reverseWords(s);
    cout<<ans<<endl;

    return 0;
}