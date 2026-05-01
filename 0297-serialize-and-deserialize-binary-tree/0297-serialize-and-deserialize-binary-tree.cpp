class Codec {
public:
    string serialize(TreeNode* root) {
        if (!root) return "#";
        return to_string(root->val) + "," +
               serialize(root->left) + "," +
               serialize(root->right);
    }

    TreeNode* deserialize(string data) {
        queue<string> q;
        stringstream ss(data);
        string item;
        while (getline(ss, item, ',')) q.push(item);
        return build(q);
    }

    TreeNode* build(queue<string>& q) {
        string val = q.front(); q.pop();
        if (val == "#") return NULL;

        TreeNode* node = new TreeNode(stoi(val));
        node->left = build(q);
        node->right = build(q);
        return node;
    }
};