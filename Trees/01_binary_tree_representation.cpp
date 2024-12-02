#include <bits/stdc++.h>
using namespace std;

//creating a class 
class node{
    public:
    int data;
    node* left;
    node* right;
    //creating a constructor 
    node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};
node* buildTree(node* root){
    cout<<"Enter the data : ";
    int data;
    cin>>data;
    root = new node(data);
    //if we get -1 it means null vale 
    if(data == -1 ){
        return NULL;
    }
    cout<<"Enter the data in left of : "<<data<<endl;
    root->left = buildTree(root->left);
    cout<<"Enter the data in right of : "<<data<<endl;
    root->right = buildTree(root->right);
    return root;
}
int main(){

    node* root = NULL;
    root = buildTree(root);

    return 0;
}
