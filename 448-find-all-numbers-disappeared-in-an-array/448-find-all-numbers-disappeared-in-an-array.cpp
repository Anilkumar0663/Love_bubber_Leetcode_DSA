class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans;
        int n= nums.size(),x;
        for(int i=0;i<n;i++)
        {
            x = abs(nums[i])-1;
           
                nums[x]=(nums[x] >0 ? -nums[x]:nums[x]);
        }
        for(int i=0; i<n; i++){
             if (nums[i] > 0) ans.push_back(i+1);
        }
           
   
        return ans;
        
 
    }
};