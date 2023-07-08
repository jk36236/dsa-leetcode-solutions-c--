// Intuition
// A binary search algorithm to find the starting and ending indices of a target value in a sorted array. It performs two binary searches: one to find the starting index and another to find the ending index.

// Approach
// Initialize the answer vector ans with [-1, -1] to represent the starting and ending indices of the target value.
// Initialize start as 0, end as the last index of the nums array.
// Calculate mid as the floor division of (start + end) / 2.
// Run a binary search loop until start becomes greater than end.
// Check if the target value is equal to the element at the mid index of nums.
// If true, update ans[0] (starting index) with mid and move the end pointer to mid - 1 to continue searching for the leftmost occurrence of the target.
// If false, check if the target value is less than the element at the mid index of nums.
// If true, update end to mid - 1 to narrow down the search range to the left half.
// If false, update start to mid + 1 to narrow down the search range to the right half.


// Reset start to 0 and end to the last index of the nums array.
// Calculate mid as the floor division of (start + end) / 2.
// Run another binary search loop until start becomes greater than end.
// Check if the target value is equal to the element at the mid index of nums.
// If true, update ans[1] (ending index) with mid and move the start pointer to mid + 1 to continue searching for the rightmost occurrence of the target.
// If false, check if the target value is less than the element at the mid index of nums.
// If true, update end to mid - 1 to narrow down the search range to the left half.
// If false, update start to mid + 1 to narrow down the search range to the right half.
// Return the ans vector containing the starting and ending indices of the target value.

// Complexity
// Time complexity: O(log N) since it performs two binary searches on the sorted array nums, where N is the size of nums.
// Space complexity: O(1) since only a constant amount of extra space is used to store the variables.


class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
        vector<int> output={-1,-1};
        int start=0;
        int end=nums.size()-1;
        int mid=(start+end)/2;

        while(start<=end){
             mid=(start+end)/2;
            if(target==nums[mid]){
                output[0]=mid;
                end=mid-1;
            }else if(target<nums[mid]){
                end=mid-1;
            }else if(target>nums[mid]){
                start=mid+1;
            }
        }


        //last occurence
        start=0,end=nums.size()-1;
        while(start<=end){
            mid=(start+end)/2;
            if(target==nums[mid]){
                output[1]=mid;
                start=mid+1;
            }else if(target<nums[mid]){
                end=mid-1;
            }else if(target>nums[mid]){
                start=mid+1;
            }
        }
        return output;
    }
};



// brute force-linear search
// o(n)-tc
// o(1)-sc

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int startingPosition = -1, endingPosition = -1;
        int n = nums.size();
        for(int i=0; i<n; i++){
            if(nums[i] == target){
                startingPosition = i;
                break;
            }
        }
        for(int i=n-1; i>=0; i--){
            if(nums[i] == target){
                endingPosition = i;
                break;
            }
        }
        return {startingPosition, endingPosition};
    }
};