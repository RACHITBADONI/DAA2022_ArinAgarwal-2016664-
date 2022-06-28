//Finding key element using binary search assuming array is already sorted
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    int c=0;
    int key;
    cin>>key;
    int x=0;
    int low=0,high=n;
    
    for(int i=0;i<n;i++)
    {
        int mid=(low+high)/2;
        if(arr[mid]==key)
        {
            c++;
            x=1;
            break;
        }
        else
        {
            if(key<arr[mid])
            {
                c++;
                high=mid;
            }
            if(key>arr[mid])
            {
                c++;
                low=mid;
            }
        }
    }
    if(x==1)
    {
        cout<<"Present"<<" "<<c;
    }
    else
    cout<<"Not Present"<<" "<<n;
    
    return 0;
}
