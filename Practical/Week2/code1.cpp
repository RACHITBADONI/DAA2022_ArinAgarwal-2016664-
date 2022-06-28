//Given a sorted array of positive integers containing some duplicate elements. design algo and make program to find whether the givenn key is present or not, and total no. of copies of it.

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int key;
    cin>>key;
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(key==arr[i])
        {
            c++;
        }
    }
    if(c==0)
    {
        cout<<"Not Present"<<endl<<"-1"<<endl;
    }
    else
    cout<<"Present"<<endl<<"No. of times: "<<c;

    return 0;
}
