class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
     int sum=(n*(n+1))/2;

     for(int i=0;i<n;i++){
         sum -=nums[i];
     }
     return sum;
    }
};

// tc-o(n)
// sc-o(1)

//approach -
// find the sum of all natural numbers from 0  to n
// subtract each number of nums vector from the sum and in end left sum is the missing number.