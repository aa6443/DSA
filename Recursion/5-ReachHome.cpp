#include <bits/stdc++.h>
using namespace std;

void reachHome(int src,int dest){
    //base case 
    if(src == dest){
        cout<<"Reached Home"<<endl;
        return;
    }
    
    //processing 
    cout<<"We are at "<<src<<" and dest is "<<dest<<endl;
    src = src + 1;
    //recurrence relation 
    reachHome(src,dest);
}


int main(){
    int src = 1;
    int dest = 10;
    reachHome(src,dest);
    return 0;
}