#include<bits/stdc++.H>
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

    public:
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};

Node* LinkedListCreation(vector<int> &v){

    if (v.empty()) return nullptr;
    Node* head =new Node(v[0]) ;
    Node* mover = head ;
    for(int i=1;i<v.size();i++){
        Node* temp = new Node(v[i]);
        mover->next = temp;
        mover = mover->next;
    }
    return head;
}

void printingelements(Node* head){
    
    Node* temp = head;
    while(temp != nullptr){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}



/*Ttypes of LL
    1.Singly LinkedList
    2.Doubly LinkedList
    3.Circular LinkedList
*/
/*
Node* CircularLL(Node* head){
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = head;
    return head;
}
this code generated infinite loop due to circular linked list 
*/

int main(){
    vector<int> v  = {2,1,7,9,3};
    Node* head = LinkedListCreation(v);

    Node* newHead = CircularLL(head);
    
    printingelements(newHead);

    return 0;
}