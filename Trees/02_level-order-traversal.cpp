#include <bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;
    //constructor 
    node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};
node* buildTree(node* root){
    cout<<"Enter the root value : ";
    int data;
    cin>>data;
    root = new node(data);

    cout<<"Enter the value left of : "<<data<<endl;
    root->left = buildTree(root->left);
    cout<<"Enter the value right of : "<<data<<endl;
    root->right = buildTree(root->right);
    return root;
}

void levelOrderTraversal(){
    
}

int main(){
    node* root = NULL;
    root = buildTree(root);
    return 0;
}