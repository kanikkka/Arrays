#include<iostream>
#include<vector>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data=val;
        left=right=NULL;
    }
};
    static int ind=-1;
    Node* buildtree(vector<int> preorder){
        ind++;
        if(preorder[ind]==-1){
            return NULL;
        }
        Node* root=new Node(preorder[ind]);
        root->left=buildtree(preorder);
        root->right=buildtree(preorder);
        return root;

    }
    int main(){
        vector<int>preorder={1,2,-1,-1,4,5,-1,-1,5,-1,-1};
        Node* root=buildtree(preorder);
        cout<<root->data<<endl;
        cout<<root->left->data<<endl;
        cout<<root->right->data<<endl;
    }