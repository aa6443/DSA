//Linear Search in arrays

#include<bits/stdc++.h>
using namespace std;

bool search(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return 1;
        }
        
    }
    return 0;
}


int main(){

    int arr[10]={2,6,8,-5,10,21,34,-5,6,1};
    //whether 1 is present or not 
    int key;
    cout<<"enter the key you wanted to search for:";
    cin>>key;
    bool found= search(arr,10,key);
    if(found){
        cout<<"Key is present "<<endl;
    }
    else{
        cout<<"Key is not present "<<endl;
    }


    return 0;
}