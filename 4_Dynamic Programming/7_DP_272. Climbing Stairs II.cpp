class Solution {
public:
    /**
     * @param n: An integer
     * @return: An Integer
     */
    int climbStairs2(int n) {
        
        if(n <= 1) return 1;
        
        if(n == 2) return 2;
        
        if(n == 3) return (2+1+1);
        
        std::vector<int> rst(n, 0);
        rst[0] =1;
        rst[1] =2;
        rst[2] =4;
        
        for(int i =3; i < n; i++)
        {
            rst[i] = rst[i-1] + rst[i-2] + rst[i-3];
        }
        return rst[n-1];
    }
};
