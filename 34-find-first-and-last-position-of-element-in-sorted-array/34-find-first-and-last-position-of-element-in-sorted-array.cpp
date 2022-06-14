class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
    int n = nums.size();
    vector<int>output;    
    int start =0;
    int end = n-1;
    int ans1 = -1;
    int ans2 = -1;
 
    while(start<=end)
    {
        int mid = (start + end)/2;
        if(nums[mid] == target)
        {
            ans1 = mid;
            end = mid-1; //left me jao 
        }
        else if(target>nums[mid])
        {
            start = mid+1;
        }
        else if(target < nums[mid])
        {
            end = mid-1;
        }
        
    }
        
      int s =0;
   
      int num = nums.size();
           int e = num-1;
     while(s<=e)
    {
        int mid = (s + e)/2;
        if(nums[mid] == target)
        {
            ans2 = mid;
            s = mid +1; //right me jao 
        }
        else if(target>nums[mid])
        {
            s = mid+1;
        }
        else if(target < nums[mid])
        {
           e = mid-1; 
        }
      
    }
 
        output.push_back(ans1);
        output.push_back(ans2);
        return output;

        
    }
};