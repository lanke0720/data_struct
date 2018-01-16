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

输入一个递增排序的数组和一个数字S，在数组中查找两个数，是的他们的和正好是S，如果有多对数字的和等于S，输出两个数的乘积最小的。
输出描述:
对应每个测试案例，输出两个数，小的先输出。