class Solution {
public:
   double Power(double base, int exponent) {  
    double result = 1;//����һ��Ҫд��1����Ϊresultʽ�˷��Ļ��������ǼӼ�  
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

����һ��double���͵ĸ�����base��int���͵�����exponent����base��exponent�η���