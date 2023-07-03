// 2 pointer approach
// i,j
// i-for iterating through array
// j-for keeeping track of index where to place non zero element
// we will iterate through array and check if nums[i] have non zero element swap it with the jth index element and increase i,j
// else if it is zero element then just increment i;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        if(n==1){
            return;
        }
        int i=0,j=0;

        while(i<n){
            if(nums[i]!=0){
                swap(nums[i],nums[j]);
                j++;
            }
            i++;
        }
      
       
    };


// tc-o(n)
// sc-o(1)