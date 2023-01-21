
static const string digits = "-0123456789N";

class Codec {
private:
    void encodeTree(TreeNode *node, int level, string &s) {
        s += string(level, '#');
        if(node == nullptr) {
            s.push_back('N');
            return;
        } else {
            s += to_string(node->val);
        }
        
        encodeTree(node->left, level+1, s);
        encodeTree(node->right, level+1, s);
    }
    
    TreeNode *decodeTree(const string &data, int &curr, int level) {
        int next_first_digit_pos = data.find_first_of(digits, curr);
        // check if the number of hashes NOT equal to the current level
        if(next_first_digit_pos-curr != level) return nullptr;
        
        curr = data.find('#', next_first_digit_pos);    // next hash position
        // extract current node val
        string val = data.substr(next_first_digit_pos, curr - next_first_digit_pos);
        if(val == "N") {
            return nullptr;
        }
        
        TreeNode *node = new TreeNode(stoi(val));
        node->left = decodeTree(data, curr, level+1);
        node->right = decodeTree(data, curr, level+1);
        return node;
    }
    
public:
    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        string s;
        encodeTree(root, 0, s);
        // cout << s << endl;
        return s;
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        int curr = 0;
        return decodeTree(data, curr, 0);
    }
};

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));