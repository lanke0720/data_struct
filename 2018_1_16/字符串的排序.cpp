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
输入一个字符串,按字典序打印出该字符串中字符的所有排列。例如输入字符串abc,则打印出由字符a,b,c所能排列出来的所有字符串abc,acb,bac,bca,cab和cba。
输入描述:
输入一个字符串,长度不超过9(可能有字符重复),字符只包括大小写字母