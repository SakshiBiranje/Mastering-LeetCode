#include <iostream>
#include <vector>
#include <deque>

using namespace std;

class Node 
{
public:
    int val;
    vector<Node*> children;

    Node(int _val) : val(_val) {}
};

Node* buildTree(vector<int>& input, int& index) 
{
    if (index >= input.size()) return nullptr;

    Node* root = new Node(input[index++]);
    int childrenCount = input[index++];
    for (int i = 0; i < childrenCount; ++i) {
        root->children.push_back(buildTree(input, index));
    }
    return root;
}

vector<int> postorder(Node* root) 
{
    vector<int> ans;
    if (root == nullptr) return ans;

    deque<Node*> stk;
    stk.push_back(root);
    while (!stk.empty()) 
    {
        root = stk.back();
        stk.pop_back();
        ans.insert(ans.begin(), root->val);
        for (Node* child : root->children) 
        {
            stk.push_back(child);
        }
    }
    return ans;
}

int main() 
{
    vector<int> input = {1, 3, 2, 0, 3, 0, 4, 0};
    int index = 0;
    Node* root = buildTree(input, index);
    vector<int> result = postorder(root);

    for (int val : result) 
    {
        cout << val << " ";
    }
    return 0;
}
