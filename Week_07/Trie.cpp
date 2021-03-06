class Trie {
public:
    Trie() {}

    ~Trie() {
        for (int i = 0; i < 26; i++) {
            if (next[i] == nullptr) continue;
            delete(next[i]);
            next[i] = nullptr;
        }
    }

    void insert(string word) {
        Trie *node = this;
        for (auto c : word) {
            if (node->next[c - 'a'] == nullptr) {
                node->next[c - 'a'] = new Trie();
            }
            node = node->next[c - 'a'];
        }
        node->is_string = true;
    }
    
    bool search(string word) {
        Trie *node = this;
        for (auto c : word) {
            if (node->next[c - 'a'] == nullptr) return false;
            node = node->next[c - 'a'];
        }
        return node->is_string;
    }
    
    bool startsWith(string prefix) {
        Trie *node = this;
        for (auto c : prefix) {
            if (node->next[c - 'a'] == nullptr) return false;
            node = node->next[c - 'a'];
        }
        return true;        
    }
    
private:
    bool is_string = false;
    Trie* next[26] = {nullptr};
};
