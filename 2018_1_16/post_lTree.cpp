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
输入一个整数数组，判断该数组是不是某二叉搜索树的后序遍历的结果。如果是则输出Yes,否则输出No。假设输入的数组的任意两个数字都互不相同。