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

Node* InsertElementAtBeginning(Node* head,int data){
    
    Node* newHead = new Node(data,head);
    
    return newHead;
}

Node* InsertElementAtEnd(Node* head,int data1){
    Node* temp = head;
    while(temp->next != nullptr){
        temp= temp->next;
    }
    Node* newNode = new Node(data1);
    temp->next = newNode;

    return head;
}

Node* InsertAtK(Node* head,int val,int k){
    Node* temp = head;
    int i=2;
    while(i<k){
        temp = temp ->next;
    }
    Node* newNode = new Node(val,temp->next);
    temp->next = newNode;
    
}


Node* deleteFromBegininng(Node* head){
    head = head -> next;
    return head;
}

Node* deletefromEnd(Node* head){
    Node* temp = head;
    while(temp->next->next != nullptr){
        temp = temp->next;
    }
    temp->next = nullptr;
    return head;
}

Node* deleteFromMiddle(Node* head,int k){
    Node* temp = head;
    int i=2;
    while(i <k){
        temp = temp->next;
    }
    temp ->next = temp->next->next;
    return head;
}

void searchElementOnLL(Node* head, int val) {
    int flag = 0;
    Node* temp = head;
    while(temp) {
        if(temp->data == val) {
            flag = 1;
            break;
        }
        temp = temp->next;
    }
    if(flag == 0) {
        cout << "element not found" << endl;
    } else {
        cout << "element found" << endl;
    }
}



int main(){
    vector<int> v  = {1,2,3,4,5};
    Node* head = LinkedListCreation(v);
    // Node* newHead = InsertElementAtEnd(head,2);
    // Node* newHead = InsertAtK(head,69,2);
    // Node* newHead =deleteFromBegininng(head);
    // Node* newHead =deletefromEnd(head);
    // Node* newHead =deleteFromMiddle(head,2);
    searchElementOnLL(head,3);
    
    // printingelements(newHead);
    
    return 0;
}