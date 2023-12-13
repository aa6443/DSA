//pattern 9
/*
1 
2 3 
3 4 5

*/
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    // int i=1;
    // while(i<=n){
    //     int j=1;
    //     int increment=i;
    //     while(j<=i){
    //         cout<<increment;
    //         increment=increment+1;
    //         j=j+ 1 ;
            
    //     }
    //     cout<<endl;
    //     i=i+1;
     int i=1;
    while(i<=n){
        int j = i;
        while(j<2*i){
            cout<<j<<" ";
            j =j+1;
        }
        cout<<endl;
        i =i+1;
    }
    
    return 0;
}
