#include<iostream>
using namespace std;
#include<vector>
template <typename T>

class TreeNode{
    public:
    T data;
    vector<TreeNode<T>*> childArray;

    TreeNode(T data){
        this->data = data;
    }
};

TreeNode<int>* takeInput(){
    int rootData;
    cout<<"Enter data"<<endl;
    cin>>rootData;

    TreeNode<int>* root = new TreeNode<int>(rootData);
    int n;
    cout<<"Enter Number Child of Root "<<rootData<<endl;
    cin>>n;

    for(int i=0;i<n;i++){
        TreeNode<int> *child = takeInput();
        root->childArray.push_back(child);
    }
    return root;
}


void printOutput(TreeNode<int>* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<":";
    for(int i=0;i<root->childArray.size();i++){
        cout<<root->childArray[i]->data<<",";
    }
    cout<<endl;
    for(int i=0;i<root->childArray.size();i++){
        printOutput(root->childArray[i]);
    }
}

int main(){
    TreeNode<int>* root = takeInput();
    printOutput(root);
}