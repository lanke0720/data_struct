class Solution
{
public:
    void push(int node) {
           /* while(!stack2.empty())
            {
            	stack1.push(stack2.top());
        		stack2.pop();
            }*/
        stack1.push(node);
    }

    int pop() {
        if (stack2.size() == 0)
        {
        	while(!stack1.empty())
        	{
        		stack2.push(stack1.top());
            	stack1.pop();
        	}
        }
        if (stack2.size() == 0) {
            throw("error");
        }
        
        int top = stack2.top();
        stack2.pop();
        return top;
        
    }

private:
    stack<int> stack1;
    stack<int> stack2;
};