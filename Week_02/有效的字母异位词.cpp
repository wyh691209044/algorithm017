class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;
        unordered_map<char, int> map;//用哈希表来处理
        for(char c : s) map[c] ++;//统计字符出现的次数
        for(char c : t) 
        {
            map[c]--; 
            if(map[c] == -1) return false;
        }
        return true;//map中的second都为0
    }
};