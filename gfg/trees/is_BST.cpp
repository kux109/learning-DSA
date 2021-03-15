//LINK to Question
//https://practice.geeksforgeeks.org/problems/check-for-bst/1


class Solution
{
    public:
    bool util(Node * root, int min, int max)
    {
        if(root == NULL)
            return true;
        if(root->data < min || root->data > max)
            return false;
        return util(root->left,min,root->data-1) && util(root->right,root->data+1,max);
    }
    bool isBST(Node* root) 
    {
        return util(root,INT_MIN,INT_MAX);
    }
};