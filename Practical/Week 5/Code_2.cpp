//Given an unsorted array of int design algo and implement it using program to find whether 2 elements exist such that their sum  is equal to the given key

#include <iostream>
using namespace std;

void selectionsort(int arr[],int n);
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    selectionsort(arr,n);
    int k;
    cin>>k;
    int x=0,y=n-1,sum=0,flag=0,i=0,j=n-1;
    while(i!=j)
    {
        sum=arr[i]+arr[j];
        if(sum==k)
        {
            flag=1;
            break;
        }
        if(sum<k)
        i++;
        else
        j--;
    }
    if(flag==0)
    cout<<"Not possible";
    else
    cout<<"There exists such numbers : "<<arr[i]<<" "<<arr[j];
    return 0;
}
void selectionsort(int arr[],int n)
{
    int minindex;
    for(int i=0;i<n-1;i++)
    {
        minindex=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[minindex]>arr[j])
            {
                minindex=j;
            }
                  int temp=arr[minindex];
                  arr[minindex]=arr[i];
                  arr[i]=temp;
            
        }
    }
}
