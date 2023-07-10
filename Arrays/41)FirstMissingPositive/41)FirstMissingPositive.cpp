// Intuition
// Can we solve this problem in-place or without using extra space?

// Approach
// The approach described is known as the "Cyclic Sort" algorithm, which is used to solve the problem of finding the first missing positive number in an array without using extra space. It involves rearranging the elements in the array by swapping them into their correct positions.

// The algorithm works as follows:

// Iterate through the array from the start.
// Check if the current number, X[i], is within the range of 1 to n and if it is not already present at index X[i] - 1.
// If the conditions are met, swap X[i] with the number present at the index X[i] - 1.
// Continue the process until the array is fully traversed.
// After the sorting is done, the next step is to scan the modified array again to find the first index where X[i] is not equal to i + 1. This indicates the presence of a missing positive number. If such an index is found, return i + 1 as the first missing positive. If no such index is found, it means all numbers from 1 to n are present in the array, so return the value n + 1 as the first missing positive.

// This algorithm solves the problem in-place, meaning it rearranges the elements within the original array without requiring additional space.


// Time complexity:
// O(n)
// Space complexity:
// O(1)

class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int i=0;
        while(i<nums.size()){
          if(nums[i]>0 && nums[i]<=nums.size() && nums[nums[i]-1] !=nums[i]){
              swap(nums[i],nums[nums[i]-1]);
          }else{
              i++;
          }
        }

        for(int i=0;i<nums.size();i++){
            if(nums[i] !=i+1){
                return i+1;
            }
        }
        return nums.size()+1;
    }
};