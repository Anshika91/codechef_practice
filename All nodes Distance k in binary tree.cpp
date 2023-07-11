class Solution {
public:
    vector<int> ans;
    TreeNode* target;
    int K;
    
    /*
    find in the subtree rooted at node,
    if the distance of the root and a node is K,
    then add it into ans
    */
    void subtreeAdd(TreeNode* node, int dist){
        if(node == nullptr) return;
        // cout << node->val << ", dist: " << dist << endl;
        if(dist == K){
            ans.push_back(node->val);
        }else{
            subtreeAdd(node->left, dist+1);
            subtreeAdd(node->right, dist+1);
        }
    };
    
    //if node and connect to target, return their vertex distance
    //else return -1
    //vertex distance: #vertices on path from node to target
    int dfs(TreeNode* node){
        if(!node) return -1;
        if(node == target){
            subtreeAdd(node, 0);
            return 1;
        }
        
        int L = dfs(node->left);
        int R = dfs(node->right);
        if(L != -1){
            //we can find target in left subtree
            if(L == K) ans.push_back(node->val);
            //-1: vertex distance->normal distance
            //+2: node->left to node to node->right
            subtreeAdd(node->right, L-1+2);
            return L-1+2;
        }else if(R != -1){
            if(R == K) ans.push_back(node->val);
            subtreeAdd(node->left, R-1+2);
            return R-1+2;
        }
        //cannot find target in both its left subtree nor right subtree
        return -1;
    };
    
    vector<int> distanceK(TreeNode* root, TreeNode* target, int K) {
        this->target = target;
        this->K = K;
        dfs(root);
        return ans;
    }
};
