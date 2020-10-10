class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;
        unordered_map<char, int> map;//�ù�ϣ��������
        for(char c : s) map[c] ++;//ͳ���ַ����ֵĴ���
        for(char c : t) 
        {
            map[c]--; 
            if(map[c] == -1) return false;
        }
        return true;//map�е�second��Ϊ0
    }
};