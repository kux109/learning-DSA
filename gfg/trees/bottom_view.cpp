//LINK TO QUESTION
//https://practice.geeksforgeeks.org/problems/bottom-view-of-binary-tree/1#

vector <int> bottomView(Node *root)
{
   // Your Code Here
   vector<int> ans;
   if(root==NULL)
    return ans;
    queue<pair<int,Node*>> q;
    q.push(make_pair(0,root));
    map<int,int> m;
    while(!q.empty())
    {
        Node * temp = q.front().second;
        int hd = q.front().first;
        q.pop();
        m[hd] = temp->data;
        
        if(temp->left != NULL)
            q.push(make_pair(hd-1,temp->left));
        if(temp->right != NULL)
            q.push(make_pair(hd+1,temp->right));
    }
    map<int,int>::iterator it;
    for(it=m.begin(); it!=m.end(); it++)
        ans.push_back(it->second);
    return ans;
}

