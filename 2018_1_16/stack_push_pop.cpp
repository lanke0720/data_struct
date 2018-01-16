class Solution {
public:
    bool IsPopOrder(vector<int> pushV,vector<int> popV) {
       if(pushV.empty() || popV.empty() || pushV.size()!=popV.size())
			return false;
        stack<int> s;
        for (int i = 0, j = 0; i < pushV.size();)
        {
            s.push(pushV[i++]);
            while (!s.empty() && s.top() == popV[j])
            {
                s.pop();
                ++j;
            }
        }
        return s.empty();
    }
};

���������������У�
��һ�����б�ʾջ��ѹ��˳��
���жϵڶ��������Ƿ�Ϊ��ջ�ĵ���˳��
����ѹ��ջ���������־�����ȡ�
��������1,2,3,4,5��ĳջ��ѹ��˳��
����4��5,3,2,1�Ǹ�ѹջ���ж�Ӧ��һ���������У�
��4,3,5,1,2�Ͳ������Ǹ�ѹջ���еĵ������С���ע�⣺���������еĳ�������ȵģ�