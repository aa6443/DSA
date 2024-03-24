#include <bits/stdc++.h>
using namespace std;

//creating functions 
void printArray(int arr[],int size){
    cout<<"printing the array "<<endl;
    //printing the array 
    for(int i=0;i<size;i++){
        cout<< arr[i]<<" ";
    }
    cout<<"printing done "<<endl;
}

int main(){

    //Declairing an array 
    int number[15];

    //Accesing an array 
    cout<<"Value at 15 index is :"<<number[14]<<endl;

    //initialising an array 
    int secondArray[] = {2,7,11};
    cout<<"Value at second index of the array is:"<<secondArray[2]<<endl;

    //initialising array
    int thirdArray[6]={12,7};
    int n=sizeof(thirdArray)/sizeof(thirdArray[0]);
    printArray(thirdArray,n );

    // //initializing array 
    // int forthArray[5]={0};
    // for(auto i : forthArray){
    //     cout<<forthArray[i]<<"  ";
    // }


    return 0;
}