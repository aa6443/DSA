#include <bits/stdc++.h>
using namespace std;

bool pallindrome(string &s,int start,int end){
    
    //base case 
    if(start>end){
        return true;
    }
    if(s[start] != s[end]){
        return false;
    }
    //processing 
    start++;
    end--;
    return pallindrome(s,start,end);  //return the statement when non - void function 
}

int main(){
    string s = "abcdba";
    int start = 0;
    int end = s.length()-1;
    bool ans = pallindrome(s,start,end);
    if(ans){
        cout<<"String is Pallindrome  "<<endl;
    }
    else{
        cout<<"String is not pallindrome "<<endl;
    }
    return 0;
}