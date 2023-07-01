class Solution {
public:
    int countPrimes(int n) {
        // takibg all elements as prime
    vector<bool> isPrime(n+1, true);
    
    // for count of prime nos
    int count=0;
    
    // Starting from  2because 1 is neither prime nor composite
    for(int i=2;i<n;i++)
    {
        // if its true that is prime then make all multiples of it as true
        if(isPrime[i])
        {
            count++;
            
            for(int j=2*i;j<n;j+=i)
                arr[j]=false;
        }
    }
    
    return count;
    }
};

// Sieve of Eratosthenes works by putting all the numbers till n as true and checking if the number is prime or not from 2, if it finds that 2 is prime(that ofcourse is), then it marks all its multiple as false and it repeatedly does it till it reaches n(it reduces time by checking if it is true or not).
// Put a counter initialised with 0.
// Make a new bool vector initialised with true and of size(n+1);
// Now make a loop initialised with 2 and till n and inside loop if prime is true, count ++. and also another loop which eliminates all its multiple till n.
// then return the count.
// Time complexity:
// O(n*log(log(n)))

// Space complexity:
// O(n)