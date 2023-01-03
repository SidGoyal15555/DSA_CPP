#include <bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;
    node(int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }
};

node* buildTree(node* root){
    cout<<"enter the data: "<<endl;
    int data;
    cin>>data;
    root = new node(data);

    if(data==-1){
        return NULL;
    }

    cout<<"Enter data for inserting in left "<<endl;
    root->left = buildTree(root->left);
    cout<<"Enter data for inserting in right"<<endl;
    root->right = buildTree(root->right);

    return root;

}

int main(){

   // #ifdef ONLINEJUDGE
 // #endif
       freopen("input.txt","r",stdin); //can need to change file . this one for taking input
       freopen("output.txt","w",stdout); // this one for output

       node* root = NULL;
       //creating a tree
       root = buildTree(root);

    return 0;

}