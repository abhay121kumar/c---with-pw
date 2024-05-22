#include<iostream>
using namespace std;
#include<vector>

class TreeNode{
    public:
    int value;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int val){
        this->value = val;
        left=right=NULL;
    }
};

int main(){
    TreeNode *root = new TreeNode(1);
    return 0;
}