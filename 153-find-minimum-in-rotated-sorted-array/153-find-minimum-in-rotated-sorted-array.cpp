class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size(), i=0, j=n-1;
        while(i<j){
            if(j==i+1) return min(nums[i], nums[j]); //To handle 2 elements case 
            if(nums[i]<nums[j]) return nums[i];
            int m=i+(j-i)/2;
            if(nums[m]>nums[i]) i=m+1;
            else j=m;
        }
        return nums[i];
        
    }
};