/*2)optimized approach
sort the array.
linearly traverse , find if there is any of the number and its greater one are equal or not*/

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        bool flag = false;
        for(int i =0;i<nums.size()-1;i++){
            if(nums[i] == nums[i+1]) return true;
        }
        return flag;
    }
};
// Complexity
// Time complexity: O(n∗log(n))
// Space complexity: O(1)



/*1)Brute Force : 

Make nested loop , generate all possible pair
Put a condition if both of the number generate in a pair are same
In this approach only the unique pair will be formed becouse outerloop is running from 0 to n - 1, and inner loop will start from one value extra from previous loop value ( which make it to run n*(n+1)/2 ) . if we are matching each and every pair of vector , then possibly we can compare if any of them have same value then return true. else at end of nested form loop return false.

*/
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        bool flag = false;
        for(int i =0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i] == nums[j]) return true;
            }
        }
        return flag;
    }
};


// Complexity
// Time complexity:O((n∗(n+1))/2) ≈O(n^2)
// Space complexity: O(1)
