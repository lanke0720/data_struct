class Solution {
public:
    bool VerifySquenceOfBST(vector<int> sequence) {
        int n = sequence.size();
        if (n == 0) return false;
        int i = 0;
        
        while (n--)
        {
            while(sequence[i++]<sequence[n]);
            while(sequence[i++]>sequence[n]);
            
            if (i < n) return false;
            i = 0;
            
        }
        return true;
    }
};
����һ���������飬�жϸ������ǲ���ĳ�����������ĺ�������Ľ��������������Yes,�������No���������������������������ֶ�������ͬ��