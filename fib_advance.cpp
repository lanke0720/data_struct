һֻ����һ�ο�������1��̨�ף�
Ҳ��������2��������Ҳ��������n����
�����������һ��n����̨���ܹ��ж�����������


���ڱ��⣬ǰ����n��̨�׻���һ��n�׵���������������:
f(1) = 1
f(2) = f(2-1) + f(2-2)         //f(2-2) ��ʾ2��һ����2�׵Ĵ�����
f(3) = f(3-1) + f(3-2) + f(3-3) 
...
f(n) = f(n-1) + f(n-2) + f(n-3) + ... + f(n-(n-1)) + f(n-n) 
 
˵���� 
1�������f(n) ��������n��̨����һ��1,2,...n�׵� ��������
2��n = 1ʱ��ֻ��1��������f(1) = 1
3) n = 2ʱ�������������÷�ʽ��һ��1�׻���2�ף���ع鵽�����⣨1�� ��f(2) = f(2-1) + f(2-2) 
4) n = 3ʱ�������������÷�ʽ��1�ס�2�ס�3�ף�
    ��ô���ǵ�һ������1�׺���ʣ�£�f(3-1);��һ������2�ף�ʣ��f(3-2)����һ��3�ף���ôʣ��f(3-3)
    ��˽�����f(3) = f(3-1)+f(3-2)+f(3-3)
5) n = nʱ������n�����ķ�ʽ��1�ס�2��...n�ף��ó����ۣ�
    f(n) = f(n-1)+f(n-2)+...+f(n-(n-1)) + f(n-n) => f(0) + f(1) + f(2) + f(3) + ... + f(n-1)
    
6) �������Ѿ���һ�ֽ��ۣ�����Ϊ�˼򵥣����ǿ��Լ����򻯣�
    f(n-1) = f(0) + f(1)+f(2)+f(3) + ... + f((n-1)-1) = f(0) + f(1) + f(2) + f(3) + ... + f(n-2)
    f(n) = f(0) + f(1) + f(2) + f(3) + ... + f(n-2) + f(n-1) = f(n-1) + f(n-1)
    ���Եó���
    f(n) = 2*f(n-1)
    
7) �ó����ս���,��n��̨�ף�һ����1��2��...n�׵����ķ�ʽʱ���ܵ�����Ϊ��
              | 1       ,(n=0 ) 
f(n) =     | 1       ,(n=1 )
              | 2*f(n-1),(n>=2)

public class Solution {
    public int JumpFloorII(int target) {
        if (target <= 0) {
            return -1;
        } else if (target == 1) {
            return 1;
        } else {
            return 2 * JumpFloorII(target - 1);
        }
    }
}




------------------------------------------------------
���ǿ�����2*1��С���κ��Ż�������ȥ���Ǹ���ľ��Ρ�
������n��2*1��С�������ص��ظ���һ��2*n�Ĵ���Σ�
�ܹ��ж����ַ�����

n=1 - ֻ�к��һ������һ�ֽ���취
n=2 - �к��һ�����Σ����������������ֽ���취
n=3 - n=2�Ļ����ϼ�1������n=1�Ļ����ϼ�2������
n=4 - n=3�Ļ����ϼ�1������n=2�Ļ����ϼ�2������
��
��
��
n=n - n = f(n-1) + f(n-2)

class Solution {
public:
    int rectCover(int number) {
		if (number <= 2) return number;
        
        return rectCover(number-1) + rectCover(number-2);
        
            
    }
};