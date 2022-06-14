class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
    int l  = 0; int r  = nums.size()-1;
        int ans1 = -1;
        int ans2 = -1;
        vector<int>output;
        while(r>=l){
            int mid = (l+r)/2;
            // finding the leftmost
            if(nums[mid] == target){ // if equal so we have to find the leftone so check on left, so r = mid-1 
                ans1 = mid;
                r = mid-1;
            }
            else if(nums[mid]>target){
               
                r= mid-1;
            }
            else {
                l = mid+1;
            }
        
        }
        
        int left = 0; int right = nums.size()-1;
            // finding the rightmost
        while(right>=left){
            int mid = ( left + right)/2;
            if(nums[mid]<target ) left = mid+1;
            else if(nums[mid]> target) right = mid-1;
            else if(nums[mid] == target){ // if equal we have to find the rightmost, so check right, so left = m
                ans2 = mid;
                left = mid+1;
            }
        }
        

        output.push_back(ans1);
        output.push_back(ans2);
        
        return output;
    }
};