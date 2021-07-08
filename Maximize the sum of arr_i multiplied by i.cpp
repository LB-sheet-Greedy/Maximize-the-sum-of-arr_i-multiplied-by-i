/*
Approach 1: Naive approach

 Generate all permutations of given array. 
 For every permutation, compute the value of summation(arr[i]*i) and finally return the maximum value.
 
 Its very time consuming

Approach 2: Greedy (bcoz its an optimization problem)

Greedy approach is based on the fact that the largest value should be scaled maximum and the smallest 
value should be scaled minimum. So we multiply the minimum value of i with the minimum value of arr[i]. 
So, sort the given array in increasing order and compute the sum of arr[i]*i, where i = 0 to n-1.

TC => O(nlogn) for sorting

Later on corner cases add karo like size of array should be >=0 and so on
*/

#include<iostream>
#include<algorithm>  //to use sort()

using namespace std;

//our function
int maxSummation(int arr[],int n)
{ 
  // Sort the array
  sort(arr,arr+n);
 
  // Finding the summation of arr[i]*i
  int sum = 0;
  for (int i = 0; i < n; i++)
  {
  	sum += (arr[i]*i);
  }
  return sum;
}

int main()
{
	//static inputs to get things done faster
	int arr[] = {5,4,3,2,1};
    int n = 5;
 
    cout<<"\nMaximum summation => "<<maxSummation(arr,n);
	return 0;
}
