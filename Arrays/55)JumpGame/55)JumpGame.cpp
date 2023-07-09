// Approach
// For each element, it checks if the current index i is greater than maxReach. If it is, then it means that it is not possible to reach the current index from any of the previous indices, so the function returns false.
//  Otherwise, it updates maxReach to be the maximum of its current value and i + nums[i], which represents the maximum index that can be reached from the current index.

// After iterating over all elements, if no false value has been returned, then it means that it is possible to reach the last index, so the function returns true.

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        int maxReach=0;
        for(int i=0;i<n;i++){
            if(i>maxReach){
                return false;
            }
            maxReach=max(maxReach,i+nums[i]);
        }
        return true;
    }
};





// Time complexity:O(N)
// Space complexity:O(1)