// LINK to question
// https://practice.geeksforgeeks.org/problems/print-a-binary-tree-in-vertical-order/1

vector<int> verticalOrder(Node *root)
{
    //Your code here
    vector<int> ans;
    if(root == NULL)
        return ans;
    map<int,vector<int>> m;
    queue<pair<Node*,int>> q;
    q.push(make_pair(root,0));
    while(!q.empty())
    {
        Node * temp = q.front().first;
        int hd = q.front().second;
        q.pop();
        m[hd].push_back(temp->data);
        if(temp->left!=NULL)
            q.push(make_pair(temp->left,hd-1));
        if(temp->right!=NULL)
            q.push(make_pair(temp->right,hd+1));
    }
    map<int,vector<int>>::iterator it;
    for(it=m.begin();it!=m.end();it++)
    {
        for(int i=0; i<it->second.size();i++)
        {
            ans.push_back(it->second[i]);
        }
    }
    return ans;
    
    
}
