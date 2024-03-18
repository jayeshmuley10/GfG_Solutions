class Solution
{
    public:
    //Function to return the level order traversal of a tree.
    vector<int> levelOrder(Node* root)
    {
        queue<Node *> q;
        vector<int> ans;
        
        q.push(root);
        while(!q.empty()) {
            Node * cur = q.front();
            q.pop();
            
            if(!cur) continue;
            
            ans.push_back(cur -> data);
            
            q.push(cur -> left);
            q.push(cur -> right);
        }
        
        return ans;
    }
};
