class Solution {
public:
    void sort_str(string s, vector<string>& v, int cur)
    {
        int len = s.size();
        if (cur == len-1)
        {
            v.push_back(s);
            return ;
        }
            for(int i = cur; i < len; ++i)
            {
                if(i != cur && s[i] == s[cur]) continue;
            	swap(s[i], s[cur]);
            	sort_str(s, v ,cur+1);
            	//swap(s[i], s[cur]);
        	}
    }
    vector<string> Permutation(string str) {
        vector<string> v;
        
        if (str.size() == 0) return v;
        
        sort_str(str, v, 0);
        sort(v.begin(), v.end());
        return v;
    }
};
����һ���ַ���,���ֵ����ӡ�����ַ������ַ����������С����������ַ���abc,���ӡ�����ַ�a,b,c�������г����������ַ���abc,acb,bac,bca,cab��cba��
��������:
����һ���ַ���,���Ȳ�����9(�������ַ��ظ�),�ַ�ֻ������Сд��ĸ