class Solution {
public:
    vector<int> FindNumbersWithSum(vector<int> array,int sum) {
        vector<int> v;
        if (array.size() <= 0)
        {
            return v;
        }
        int a,b;
        a = 0;
        b = array.size()-1;
        while(a<b)
        {
        	if(array[a]+array[b] < sum)
        	{
            	a++;
        	}
        	else if(array[a]+array[b] > sum)
        	{
            	b--;
        	}
            else
            {
                v.push_back(array[a]);
                v.push_back(array[b]);
                break;
            }
        }
        return v;
    }
};

����һ����������������һ������S���������в������������ǵ����ǵĺ�������S������ж�����ֵĺ͵���S������������ĳ˻���С�ġ�
�������:
��Ӧÿ�����԰����������������С���������