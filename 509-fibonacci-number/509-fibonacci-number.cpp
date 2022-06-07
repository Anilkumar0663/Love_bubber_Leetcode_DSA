class Solution {
public:
    int fib(int n) {
        
        int f[n +2],i=2;    
        f[0] =0;
        f[1] =1;
        
        for(i;i<=n;i++)
        {
            f[i] = f[i-1] + f[i -2]; 
        }
       return f[n];
    }
};