
// 1)Approach:-
// we assume 0th element as majority element and we will tak e a count variable as 1,
// then we will iterate through array from 1st index and check if majority eement==nums[i](current element) then we wil increase count else decrease count and if
// count==0 then e will take nums[i](current element) as majority eleement and repeat same process


class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=1; 
        int majorElement=nums[0];

        for(int i=1;i<nums.size();i++){
            if(count==0){
                majorElement=nums[i];
            }

            majorElement==nums[i]?count++:count--;
        }
        return majorElement;
    }
};
// tc-o(n)
// sc-o(1)


// 2)
// The approach of the code is to sort the input vector in non-decreasing order using the sort() function from the standard library. Since the majority element appears more than n/2 times in a vector of length n, the middle element after sorting the vector will be the majority element.

// Therefore, the code computes the index of the middle element using n/2, where n is the size of the vector.

// The code returns the element at this index, which is the majority element.


class Solution {
public:
    int majorityElement(vector<int>& nums) {
       int n=nums.size();
sort(nums.begin(),nums.end());
return nums[n/2];
    }
};

// tc-o(nlog(n))
// sc-o(1)


