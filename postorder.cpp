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
Node* buildtree(vector<int>postorder){
    ind++;
    if(postorder[ind]==-1){
        return NULL;
    }
    Node* root=new Node(postorder[ind]);
    root->left=buildtree(postorder);
    root->right=buildtree(postorder);
    cout<<root->data;
    return root;
}

int main(){
    vector<int>postorder={1,2,-1,-1,4,5,-1,-1,5,-1,-1};
    Node* root=buildtree(postorder);
    cout<<root->left->data<<endl;
    cout<<root->right->data<<endl;
    cout<<root->data<<endl;
}