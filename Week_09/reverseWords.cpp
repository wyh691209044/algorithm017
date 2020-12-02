class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(), s.end());
        int size = (int)s.size();
        int start = 0; //���ʿ�ʼ
        int end = 0;   //����ĩβ
        int index = 0; 
        for (; start < size; start++) {
            if (s[start] == ' ') continue;
            if (index != 0){
                //�ڶ������ʿ�ʼ ��ͷ��Ҫ��һ���ո�
                s[index++] = ' ';
            }
            end = start;
            //�滻ԭ����s һֱ���ո�Ϊֹ
            while (end < size && s[end] != ' ') {
                s[index++] = s[end++];
            }
            //indexָ���˵���ĩβ�� ��һ���ַ�
            //һ�����ʵĳ���
            int len = end - start;
            //index - len���ǵ��ʿ�ʼ�ĵط�
            //s.begin() + index - len ���ʿ�ʼ��λ��
            //s.begin() + index ���ʽ�����λ��
            reverse(s.begin() + index - len, s.begin() + index);
            //������һ�����ʵĿ�ʼλ�� start����ָ���˿ո��λ��
            start = end;
            //��һ��ѭ������ ֮�� start++
            //���ֻ��һ���ո� start���� ָ������һ�����ʵĿ�ʼλ��
            //����ж���ո���ָ������һ���ո� �´�ѭ����ͷ������
        }
        //ȥ��ĩβ�Ŀո��û���õ��ַ�
        s.erase(s.begin() + index, s.end());
        return s;
    }
};