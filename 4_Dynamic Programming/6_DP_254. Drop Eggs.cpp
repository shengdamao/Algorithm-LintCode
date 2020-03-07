class Solution {
public:
    /**
     * @param n: An integer
     * @return: The sum of a and b
     */
     
    long countSum(long x){
        if(x<=0)
        return 0;
        
        long sum = x * (x+1) / 2;
        return sum;
    }
    
    long check(long x, long n){
        long sum = countSum(x);
        long leftSum = countSum(x-1);
        
        if(sum >= n && leftSum < n)
        return 1;
        
        else if(sum < n)
        return 2;
        
        else if(leftSum > n)
        return 0;
    }
    
    long binarySearch(long start, long end, long n)
    {
        long mid = (start + end) / 2;
        if(check(mid,n) == 1)
        return mid;
        
        while(start + 1 < end){
            
            if(check(mid,n) == 2){
                start = mid;
                return binarySearch(start, end, n);
            }
            
            else if(check(mid,n) == 0){
                end = mid;
                return binarySearch(start, end, n);
            }
        }
    }
     
    long dropEggs(long n) {
        // write your code here
        if(n == 2)
        return 2;
        
        return binarySearch(0, n-1, n);
        
    }
};