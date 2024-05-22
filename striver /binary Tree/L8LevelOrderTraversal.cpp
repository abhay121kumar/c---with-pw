#include<iostream>
using namespace std;
#include<queue>

struct node{
    public:
    int val;
    node *left;
    node *right;

    node(int val){
        this->val = val;
        left=right=NULL;
    }

};
vector<vector<int>> levelOrder(node* root){
    vector<vector<int>> ans;
    if(root == NULL) return ans;

    queue<node*> q;
    q.emplace(root);
    while(!q.empty()){
        int size = q.size();
        vector<int> level;
        for(int i=0;i<size;i++){
            node *Node = q.front();
            q.pop();
            if(Node->left != NULL) q.emplace(Node->left);
            if(Node->right != NULL) q.emplace(Node->right);
            level.emplace_back(Node->val);
        }
        ans.emplace_back(level);
    }
    return ans;
}

int main(){
    node *root = new node(1);
   
    root->left = new node(2);
    root->right = new node(3);
    root->left->right = new node(5);
    root->left->right->left = new node(6);
    vector<vector<int>> result = levelOrder(root);
    
    for(int i=0;i<result.size();i++){
        for(int j=0;j<result[i].size();j++){
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}