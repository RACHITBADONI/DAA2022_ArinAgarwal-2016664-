// Write a program to implement insertion sort and total number of comparisons
#include <iostream>
using namespace std;

int insertionsort(int arr[],int n);
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int c=insertionsort(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"No. of Comparisons= "<<c<<endl;
    return 0;
}
int insertionsort(int arr[],int n)
{
    int c=0,key;
    for(int i=1;i<n;i++)
    {
        int j=i-1; key=arr[i];
        while(j>=0&&arr[j]>key)
        {
            arr[j+1]=arr[j];
            j--;
            c++;
        }
        arr[j+1]=key;
    }
    return c;
}

