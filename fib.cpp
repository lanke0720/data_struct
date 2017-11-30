class Solution {
public:
    int Fibonacci(int n) {
        if (n == 0) return 0;
		if (n == 1 || n == 2) return 1;
        /*int a = 1;
        int b = 1;
        int c = 2;
        while (--n > 2)
         {
                a = b;
                b = c;
                c = a + b;
         }
        return c;
        */
        int arr[n];
        arr[1] = 1;
        arr[2] = 1;
        while (--n)
        {
        	
        }
     }
};
大家都知道斐波那契数列，
现在要求输入一个整数n，请你输出斐波那契数列的第n项。
n<=39