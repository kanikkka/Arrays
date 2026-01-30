#include<iostream>
#include<vector>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int value){
        data=value;
        left=right=NULL;
    }
};
static int ind=-1;
Node * buildtree(vector<int>inorder){
    ind++;
    if(inorder[ind]==-1){
        return NULL;
    }
    Node* root=new Node(inorder[ind]);
    root->left=buildtree(inorder);
    cout<<root->data<<" ";
    root->right=buildtree(inorder); }
    int main(){
        vector<int>inorder={1,2,-1,-1,4,5,-1,-1,5,-1,-1};
        Node* root=buildtree(inorder);
        cout<<root->left->data<<endl;
        cout<<root->data<<endl;
        cout<<root->right->data<<endl;
    }