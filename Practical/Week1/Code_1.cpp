//Linear Search in non negative Array
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
    for(int i=0;i<n;i++)
    {
        if(key==arr[i])
        {
            c++;
            x=1;
            break;
        }
        else
        {
            c++;
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
