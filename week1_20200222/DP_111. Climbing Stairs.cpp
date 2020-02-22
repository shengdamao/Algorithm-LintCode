class Solution {
public:
    /**
     * @param n: An integer
     * @return: An integer
     */
    int climbStairs(int n) {
        // write your code here
        if(n<=2)
            return n;
        int steps[n] = {};
        steps[0] = 1;
        steps[1] = 2;
        
        for(int i = 2; i < n; i++)
        {
            steps[i] = steps[i-1] + steps[i-2];
        }
        return steps[n-1];
    }
};
