class Solution {
public:
   double Power(double base, int exponent) {  
    double result = 1;//这里一定要写成1，因为result式乘法的基础，不是加减  
        if(exponent == 0 )  
            return 1;  
  		int absExponent = abs(exponent);  
           for(int i = 0; i < absExponent;i++)  
               result *= base;  
        if(exponent < 0)  
            result = 1 / result;  
     return result;  
  
        
    }
};

给定一个double类型的浮点数base和int类型的整数exponent。求base的exponent次方。