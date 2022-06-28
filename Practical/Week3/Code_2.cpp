// Write a program to implement selection sort and find total no. of comparisons
#include <iostream>

using namespace std;

int selectionsort(int arr[],int n);
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int c=selectionsort(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"No. of Comparisons= "<<c<<endl;
    return 0;
}
int selectionsort(int arr[],int n)
{
    int c=0,minindex;
    for(int i=0;i<n-1;i++)
    {
        minindex=i;
        for(int j=i+1;j<n;j++)
        {
            c++;
            if(arr[minindex]>arr[j])
                minindex=j;
        }
        if(minindex!=i)
        {
                  int temp=arr[minindex];
                  arr[minindex]=arr[i];
                  arr[i]=temp;
        }
            
    }
    return c;
}
