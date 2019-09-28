// C++ program to count numbers with k odd
// divisors in a range.
#include<bits/stdc++.h>
using namespace std;

// Utility function to check if number is
// perfect square or not
bool isPerfect(int n)
{
    int s = sqrt(n);

    return (s*s == n);
}

// Utility Function to return count of divisors
// of a number
int divisorsCount(int n)
{
    // Note that this loop runs till square root
    int count=0;
    for (int i=1; i<=sqrt(n)+1; i++)
    {
        if (n%i==0)
        {
            // If divisors are equal, count it
            // only once
            if (n/i == i)
                count += 1;

            // Otherwise print both
            else
                count += 2;
        }
    }
    return count;
}

// Function to calculate all divisors having
// exactly k divisors  between a and b
int kDivisors(int a,int b,int k)
{
    int count = 0; // Initialize result

    // calculate only for perfect square numbers
    for (int i=a; i<=b; i++)
    {
        // check if number is perfect square or not
        if (isPerfect(i))

            // total divisors of number equals to
            // k or not
            if (divisors(i) == k)
                count++;

    }
    return count;
}

// Driver program to run the case
int main()
{
    int a = 2, b = 49, k = 3;
    cout << kDivisors(a, b, k);
    return 0;
}
