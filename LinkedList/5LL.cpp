#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    public:
    Node(int data1,Node* next1){
        data = data1;
        next = next1;
    }
    //for either only first element present or the last element of the array 
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};

//returning the head of the data 
// Node* convertArr2LL(vector<int> &arr){
//     //storing the head of the element 
//     Node* head = new Node(arr[0]);
//     Node* mover = head; //stores the address of the poi nter head 

//     for(int i=0;i<arr.size();i++){
//         Node* temp = new Node(arr[i]);
//         mover -> next = temp;
//         mover = temp;
//     }
//     return head;
// }
Node* convertArr2LL(vector<int> &arr){
    if (arr.empty()) // Check if the array is empty
        return nullptr;
    
    // Storing the head of the linked list
    Node* head = new Node(arr[0]);
    Node* mover = head; // Stores the address of the pointer head 

    // Start from index 1 and advance mover
    for(int i = 1; i < arr.size(); i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}



Node* deletingFirstElement(Node* head){
    if(head == nullptr || head->next == nullptr ) return nullptr;
    Node* temp = head->next;
    delete head;
    return temp;
}

int main(){
    vector<int> arr = {12,3,4,5,8};
    Node* head = convertArr2LL(arr);
    head = deletingFirstElement(head);
    if (head != nullptr) {
        cout << head->data << endl;
    } else {
        cout << "Linked list is empty" << endl;
    }
    return 0;
}