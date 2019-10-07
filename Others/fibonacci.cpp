//An efficient way to calculate nth fibonacci number faster and simpler than O(nlogn) method of matrix exponentiation
//This works by using both recursion and dynamic programming.
//as 93rd fibonacci exceeds 19 digits, which cannot be stored in a single long long variable, we can only use it till 92nd fibonacci
//we can use it for 10000th fibonacci etc, if we implement bigintegers.
//This algorithm works with the fact that nth fibonacci can easily found if we have already found n/2th or (n+1)/2th fibonacci
//It is a property of fibonacci similar to matrix exponentiation.

#include <iostream>
#include <cstdio>
using namespace std;

long long fib(long long n)
{
  //Can calculate in O(1) with space complexity O(1)
  double phi = (1 + sqrt(5)) / 2; 
  return round(pow(phi, n) / sqrt(5)); 
}

int main()
{
    //Main Function
    for (long long i = 1; i < 93; i++)
    {
        cout << i << " th fibonacci number is " << fib(i) << "\n";
    }
    return 0;
}
