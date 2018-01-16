class Solution {
public:
    vector<vector<int> > FindContinuousSequence(int sum) {
        vector<vector<int>> vv;
        int fast = 2;
        int slow = 1;
        while (fast > slow)
        {
            int cur = (fast+slow)*(fast-slow + 1) /2;
            if (cur == sum)
            {
                vector<int> v;
                for(int i = slow; i <= fast; i++){
                    v.push_back(i);
                }
                vv.push_back(v);
                slow++;
            }
            else if(cur > sum){
                slow++;
            }
            else{
                fast++;
            }
        }
        return vv;
    }
};
/*
��Ŀ����
С����ϲ����ѧ,��һ����������ѧ��ҵʱ,Ҫ������9~16�ĺ�,
�����Ͼ�д������ȷ����100�����������������ڴ�,
�����뾿���ж������������������еĺ�Ϊ100(���ٰ���������)��
û���,���͵õ���һ������������Ϊ100������:18,19,20,21,22�����ڰ����⽻����,
���ܲ���Ҳ�ܿ���ҳ����к�ΪS��������������? Good Luck!
�������:
������к�ΪS�������������С������ڰ��մ�С�����˳�����м䰴�տ�ʼ���ִ�С�����˳��
*/