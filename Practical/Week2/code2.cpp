//Given a sorted array of positive integers design algo & implement it using program to find 3 indexes i,j,k such that arr[i]+arr[j]=arr[k]
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
    for(int x=0;x<n;x++)
    {
        for(int y=x+1;y<n;y++)
        {
            for(int z=y+1;z<n;z++)
            {
                {
                    if((arr[x]+arr[y])==arr[z])
                      cout<<x<<" "<<y<<" "<<z<<endl; c++;
                    
                }
            }
        }
    }
    if(c==0) cout<<"No such indexes exist";
    
    return 0;
}
