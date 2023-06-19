/*
Problem :

     An integer array A is given as input of length N. Your task is to find and print the greatest odd negative element in array A.

Note:
      Assume that the input contains both positive and negative integers.

Constraints:
      2>=N<=20

Input format:
      First line contains an integer which denotes N and second line contains N integers(array elements) which are separated by a space.

Output format:
     A line contains greatest odd negative element in array A.

Input:
     5
     2 4 -5 -5 34
Output:
     -5
*/

#include<iostream>

using namespace std;

int main()

{
    int n,max;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]%2!=0 && arr[i]<0)
        {
            max=arr[i];
        }
    }
    for(int i=0;i<n;i++)
    {
        
        if(arr[i]%2!=0 && arr[i]<0)
        {
            if(arr[i]>max)
            {
                max=arr[i];
            }
        }
    }
    cout<<"Greatest ODD Negative Element : "<<max;
}