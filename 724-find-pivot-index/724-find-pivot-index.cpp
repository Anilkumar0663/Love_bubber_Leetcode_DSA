class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++) {
            sum= sum + nums[i]; /// sum of all array.
        }
        
        int lsum=0;
        int rsum=sum; // assigne the array sum to right sum variable.
        
        for(int i=0;i<nums.size();i++) {
            rsum=rsum-nums[i]; // minus the right position
            
            if(lsum==rsum) return i;
            
            lsum=lsum+nums[i]; 
        }
        return -1;
    }
};