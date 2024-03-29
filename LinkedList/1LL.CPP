#include<bits/stdc++.h>
using namespace std;

//creating a seperate datatype to 
//store data and address of the data 

class Node {
    public:
    int data ;  //for data 
    Node* next; //for address 

    //constructor initialisation
    public:
    Node(int data1,Node* next1){
        data = data1;
        next = next1;
    }
    //if we fdont wanted to pass nullptr again and again we automatically assumes it to be nullptr 
    public:
    Node(int data1){
        data = data1;
        next= nullptr;
    }

};

int main(){
    vector<int> arr = {2 ,5 , 8, 7};
    Node* y = new Node(arr[0],nullptr);
    // cout<<y <<endl;//pointer to memory location printed 
    cout<<y->data<<endl;
    cout<<y->next<<endl;
        // (OR)
    /*
    creating object or instance
    Node y = Node(arr[0],nullptr);
    cout<<y.data<<endl;
    cout<<y.next<<endl;
    */
}