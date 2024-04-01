#include<bits/stdc++.h>
#include <iostream>
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

Node* convertArr2LL(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i=1;i<arr.size();i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

Node* print(Node* head){
    Node* temp = head;
   while(temp != NULL){
       cout<<temp->data << " ";
       temp = temp -> next;
   }
   return head;
}

int lengthOfLL(Node * head){
    int cnt = 0;
    Node* temp= head;
    while(temp != NULL){
        temp= temp -> next;
        cnt++;
    }
    return cnt;
}

int checkIfPresent(Node* head,int val){
    Node* temp = head ;
    while(temp != NULL){
        if(temp->data == val){
            return true;
        }
        temp = temp ->next;
    }
    return false;
}

int deletehead(Node* head){
    Node* temp = head;
    head = head -> next;
    free(temp);
    return head->data;
}

int deletetailofLL(Node* head){
    if(head == NULL || head->next == NULL) return -1;
    
   Node* temp = head;
   
   while(temp->next->next != NULL){
       temp = temp->next;
   }
   delete temp->next;
   temp->next = nullptr;
   return temp->data;
}

int main()
{
    vector<int> arr = {12,5,8,21};
    Node* head = convertArr2LL(arr);
    print(head);
    cout<<"\n"<<lengthOfLL(head);
    cout<<endl;
    cout<<checkIfPresent(head,5)<<endl;
    cout<<deletehead(head);
    cout<<deletetailofLL(head);
    
    
    return 0;
}
