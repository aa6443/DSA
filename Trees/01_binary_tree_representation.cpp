#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;
    public:
    Node(int data1){
        this->data = data1;
        this->left = nullptr;
        this->right = nullptr;
    }
};
//lEVEL ORDER TRAVERSAL OR BFS 
Node* buildTrees(Node* root){
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1 
    cout<<"Enter the data: "<<endl;
    int data;
    cin>>data;
    //creating root node 
    root = new Node(data);
    //condition checking base case 
    if(data == -1 ) return NULL;

    cout<<"Enter data for inserting in left of tree "<<data <<endl;
    root->left = buildTrees(root->left);
    cout<<"Enter data for inserting in right of tree "<<data << endl;
    root ->right = buildTrees(root->right);
    return root;
}
//printing the data 
void levelOrderTraversal(Node* root){
    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        Node* temp = q.front();
        cout<<temp->data<<" ";
        q.pop();
        if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
    }

}
int main(){

    Node* root = NULL;
    //CREATING  A TREE 
    root = buildTrees(root);
    cout<<"The level order traversal result is "<<endl;
    levelOrderTraversal(root);
    return 0;
}