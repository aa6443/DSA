//printing number from n to  1
#include<bits/stdc++.h>
using namespace std;

void printing(int n){
    //base case 
    if( n== 0){
        return ;
    }
    
    //recursive relation 
    printing(n-1);

    cout<< n << endl;
}


int main(){
    int n;
    cin>>n;
    printing(n);
    return 0;
}