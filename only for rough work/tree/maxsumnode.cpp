#include<iostream>
using namespace std;
#include<limits.h>
#include<queue>

template<typename T>
class TreeNode{
    public:
    T data;
    vector<TreeNode<int>*> children;

    TreeNode(T data){
        this->data = data;
    }

    ~TreeNode(){
        for(int i=0;i<children.size();i++){
            delete children[i];
        }
    }

};

template<typename T,typename V>
class Pair{
    public:
    T sum;
    TreeNode<int>* maxNode;

    // why we did not build inbuild constructor for pair class as we do int the treende class
    Pair(T data){
        this->data  = data;
        maxNode = NULL;

    }
};

TreeNode<int>* takeInput(){
    int rootData;
    cout<<"Enter Root data "<<endl;
    cin>>rootData;
    TreeNode<int>* root = new TreeNode<int>(rootData);

    queue<TreeNode<int>*> pendingNode;
    pendingNode.push(root);

    while(pendingNode.size()!=0){
        TreeNode<int>* front = pendingNode.front();
        pendingNode.pop();
        int n;
        cout<<"Enter Number of children of"<<front->data<<endl;
        cin>>n;
        for(int i=0;i<n;i++){
            int childData;
            cout<<"Enter "<<i<<"th child of data of"<<front->data<<endl;
            cin>>childData;
            TreeNode<int>* child = new TreeNode<int>(childData);
            front->children.push_back(child);
            pendingNode.push(child);
        }
    }
    return root;
}



Pair<int,TreeNode<int>*> MaxSumNode(TreeNode<int>* root) {

    Pair<int,TreeNode<int>*> p1;
    p1.sum=INT_MIN;
    p1.maxNode=NULL;
    if(root==NULL){
        return p1;
    }
    queue<TreeNode<int>*> pendingNode;
    pendingNode.push(root);

    while(!pendingNode.empty()){
        TreeNode<int>* front = pendingNode.front();
        pendingNode.pop();

        int n = front->children.size();
        int sum =  front-> data;

        for(int i=0;i<n;i++){
            sum = sum + front->children[i]->data;
            pendingNode.push(front->children[i]);
        }
        if(p1.sum<sum){
            p1.sum = sum;
            p1.maxNode = front;
        }
    }
    return p1;
}

int pairReturnFun(TreeNode<int>* root){
    Pair<int,TreeNode<int>*> obj1;
    obj1 = MaxSumNode(root);
    return obj1.maxNode->data;
}

int main(){
    TreeNode<int>* root;
    root = takeInput();
    cout<<pairReturnFun(root)<<endl;
    return 0;
}