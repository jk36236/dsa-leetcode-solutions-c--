// 1)sort the array
// iterate through array
// for given iteration, if current number is same as next number, return that number

// The first if condition will return 0, while there is no element in array and the second if condition will return the first element of array, while there will be only 1 or 2 element . Beacuse any one element will surely have it's duplicate so in this case if there is only two elment in the array then simply the answer will be first or last element because both will be same.

// Complexity
// tc-O(N)
// sc-o(logn)

// problem with this approach is that we have modified the input array and then solved it,we have to do it without modifying input array
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        if(n<0)
        {
            return -1;
        }
        if(n<=2)
        {
            
            return nums[0];
        }
     sort(nums.begin(),nums.end());
     int ans=0;
     for(int i=0;i<n;i++){
         if(nums[i]==nums[i+1]){
             ans=nums[i];
             break;
         }
     }
  return ans;

    }
};