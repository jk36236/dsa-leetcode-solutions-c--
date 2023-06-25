class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();

        for(int i=n-1;i>=0;i--){
            if(i==n-1){
            digits[i]++;
            }

            if(digits[i]==10){
               digits[i]=0;
                if(i!=0){
                    digits[i-1]++;
                }else{
                    digits.push_back(0);
                    digits[i]=1;
                }
            }
        }
        return digits;
    }
};

// tc-o(n)

// Approach
// First we increment the first digit (last element) by 1, if it becomes 10 we make it 0 ans add 1 to the second digit.. & if the last digit (first element) becoms 10 we make it 1 and push_back a leading zero.

