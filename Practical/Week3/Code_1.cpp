// Write a program to implement bubble sort and find out total no. of comparisons
#include <iostream>
using namespace std;

int bubblesort(int arr[],int n);
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int c=bubblesort(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    cout<<endl<<"No. of Comparisons= "<<c<<endl;
    return 0;
}
int bubblesort(int arr[],int n)
{
    int c=0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            c++;
            if(arr[j]>arr[j+1])
            {
              int temp=arr[j];
              arr[j]=arr[j+1];
              arr[j+1]=temp;
            }
        }
    }
    return c;
}
