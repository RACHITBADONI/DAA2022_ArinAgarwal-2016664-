//Given an array of non negative integers design and implement using program to count no. of pairs of integers such that their difference is equal to given key
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int x=0;x<n;x++)
    {
        cin>>arr[x];
    }
    int c=0;
    int key;
    cin>>key;
    
    int count=0;
    
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]-arr[i]==key||arr[i]-arr[j]==key)
            count++;
        }
    }
    cout<<"No. of pairs="<<count;
    return 0;
}
