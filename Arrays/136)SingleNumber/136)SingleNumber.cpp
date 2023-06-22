// 2)with improved time complexity
// we can think of the property of XOR-
// 0 ^ 0 --> 0
// 0 ^ 1 --> 1
// 1 ^ 0 --> 1
// 1 ^ 1 --> 0

// We know every number is appears twice except a single number which appears only single time.

// See, we already discuss a thing a that xor of a same number with itself is zero, i.e A ^ A = 0
// Now, we will look some more property of xor-

// 1) xor of a same number with itself is zero, i.e A ^ A = 0
// 2) xor is commutative that means a ^ b = b ^ a.
// 3) xor of any number with zero is the number itself i.e A ^ 0 = A.

// Suppose our array is arr[]: [5, 1, 3, 1, 3, 4, 5, 7, 4]
// we will rearrange the array, and take all the numbers together, then our array looks like
//                      arr[]: [1, 1, 3, 3, 4, 4, 5, 5, 7]
// 					 now, take xor of all numbers -
// 					 1 ^ 1 ^ 3 ^ 3 ^ 4 ^ 4 ^ 5 ^ 5 ^ 7   (rearrange the array)
// 					   0   ^   0   ^   0   ^   0   ^ 7   (see point number 1)
// 					               7                     (see point number 3) 


// xor is commutative that means a ^ b = b ^ a. therefore e don't need to sort the array

// So, our array is arr[]: [5, 1, 3, 1, 3, 4, 5, 7, 4] 

// [5, 1, 3, 1, 3, 4, 5, 7, 4]
//  ↑  ↑
//  5 ^ 1 = 4
 
// [5, 1, 3, 1, 3, 4, 5, 7, 4]
//        ↑                       
// 	   4 ^ 3 = 7 (prev answer xor current index)
	   
// [5, 1, 3, 1, 3, 4, 5, 7, 4]
// 	      ↑
// 		  7 ^ 1 = 6 (prev answer xor current index)
		  
// [5, 1, 3, 1, 3, 4, 5, 7, 4]
//              ↑
// 			 6 ^ 3 = 5 (prev answer xor current index)

// [5, 1, 3, 1, 3, 4, 5, 7, 4]
//                 ↑
// 				5 ^ 4 = 1  (prev answer xor current index)
				
// [5, 1, 3, 1, 3, 4, 5, 7, 4]
//                    ↑
// 				   1 ^ 5 = 4 (prev answer xor current index)
				   
// [5, 1, 3, 1, 3, 4, 5, 7, 4]
//                       ↑
// 					  4 ^ 7 = 3 (prev answer xor current index)
					  
// [5, 1, 3, 1, 3, 4, 5, 7, 4]
//                          ↑
// 						 3 ^ 4 = 7 (prev answer xor current index)
						 
// So, the element which we got as left should be our answer, so the answer is '7'

class Solution{
    public:
    int singleNumber(vector<int> &nums){
        int n=nums.size();
       

        for(int i=0;i<n-1;i++){
            nums[i+1]=nums[i]^nums[i+1];  // (prev answer xor current index)
        }
        return nums[n-1]; // return left over elemen
    }
};

// Time Complexity --> O(n) // where n is the size of the array
// Space Complexity --> O(1) // we are not using anything extra from our side




// 1)USING SORTING (USING CONSTANT SPACE )   
// -Sort the array.
// -Traverse the array and check if one of the adjacent elements is equal to the current element or not.
// -If yes , move ahead. Else return the current element.

class Solution {
public:
    int singleNumber(vector<int>& nums) {
     sort(nums.begin(),nums.end());
     int n=nums.size();
     for(int i=1;i<n;i+=2){
             if(nums[i]!=nums[i-1]){
                 return nums[i-1];
             }
     }
     return nums[n-1];  
     
    }
};

// TC: O(NlogN)
// SC: O(1)