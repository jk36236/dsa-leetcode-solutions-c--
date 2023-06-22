
// optimized solution: tc-o(n) &sc-o(1)
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        if(k>=n && n!=0){
            k=k%n;
        }else if(n==0){
            return; 
        }

        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+(k));
        reverse(nums.begin()+(k),nums.end());
        
    }
};


//brute force
// for last k elements -
// store them in another
// shift 1st n-k ellemnts from given array :- arr[i+d] =arr[i]
// and copy last k eelments from new array into the given array at begining
// here we rae using extra memory therefore not a good solution