class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(), s.end());
        int size = (int)s.size();
        int start = 0; //单词开始
        int end = 0;   //单词末尾
        int index = 0; 
        for (; start < size; start++) {
            if (s[start] == ' ') continue;
            if (index != 0){
                //第二个单词开始 开头需要插一个空格
                s[index++] = ' ';
            }
            end = start;
            //替换原来的s 一直到空格为止
            while (end < size && s[end] != ' ') {
                s[index++] = s[end++];
            }
            //index指向了单词末尾的 下一个字符
            //一个单词的长度
            int len = end - start;
            //index - len就是单词开始的地方
            //s.begin() + index - len 单词开始的位置
            //s.begin() + index 单词结束的位置
            reverse(s.begin() + index - len, s.begin() + index);
            //更新下一个单词的开始位置 start正好指向了空格的位置
            start = end;
            //这一轮循环结束 之后 start++
            //如果只有一个空格 start正好 指向了下一个单词的开始位置
            //如果有多个空格，则指向了下一个空格 下次循环开头会跳过
        }
        //去除末尾的空格和没有用的字符
        s.erase(s.begin() + index, s.end());
        return s;
    }
};