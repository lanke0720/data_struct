class Solution {
public:
    int StrToInt(string str) {
        int len = str.size();
        if (len == 0) return 0;
        int s = 1;
        if (str[0] == '-')  s = -1;
        long long res = 0;
        for (int i = (str[0] ==  '-' || str[0] == '+') ? 1 : 0; i < len; i++)
        {
            if (str[i] < '0' || str[i] > '9') return 0;
            res = res*10 + str[i] - '0';
        }
        return res * s;
    }
};	

将一个字符串转换成一个整数，要求不能使用字符串转换整数的库函数。
 数值为0或者字符串不是一个合法的数值则返回0