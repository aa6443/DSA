#include <bits/stdc++.h>
using namespace std;

void revStr(string &s,int low,int high){
    cout<<"call received for "<< s<<endl;
    //base case 
    if(low>=high){
        return ;
    }
    //processing 
    swap(s[low],s[high]);

    //recurrence relation
    revStr(s,low+1,high-1);
}

int main() {
    // Your code goes here
    string s = "abcde";
    cout<<"Original String: "<<s<<endl;
    int low = 0;
    int high = s.size()-1;
    revStr(s,low,high);
    cout<<"After recursion String: "<<s<<endl;
    
    return 0;
}