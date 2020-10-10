//递归
// class Solution {
// public:
//     vector<int>res;
//     vector<int> preorder(Node* root) {
//         if(!root)return res;
//         res.push_back(root->val);
//         if(root->children.size() > 0){
//             for(int i = 0;i<root->children.size();i++){
//                 preorder(root->children[i]);
//             }
//         }
//         return res;
//     }
// };
//迭代 children压入栈中时，要注意顺序，从后往前压入栈中
class Solution {
public:
    vector<int> preorder(Node* root) {
        vector<int>res;
        stack<Node*>sta;
        if(!root)return res;
        sta.push(root);
        while(!sta.empty()){
            Node* node = sta.top();
            
            res.push_back(node->val);
            sta.pop();
            int length = node->children.size();
            for(int i = length - 1;i>=0;i--){
                sta.push(node->children[i]);
            }
        }
        return res;
    }
};