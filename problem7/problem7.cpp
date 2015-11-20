class Solution {

public:
    int reverse(int x) {
        long long result = 0;
        int k=0, n;
        const int max = 0x7fffffff;  //int最大值  
        const int min = 0x80000000;  //int最小值 
        if(x<0)
        {
            x = -x;
            k = 1;
        }
        while(x)
        {
            n = x % 10;
            result = result*10 + n;
            if (result > max || result < min)   //溢出处理  
                return 0;
            x = x / 10;
        }
        if(k)
            result = -result;
        return result;
    }
};
