//Given an unsorted array of alphabets, count duplicate elements and implement using program to find the alphabet with max no. of occurences.

#include <iostream>
using namespace std;

int main()
{
    int c=0;
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int l=n;
    char ch[n];
    for(int i=0;i<n;i++)
    cin>>ch[i]; 
    int flag=0;
    int max=0;char x=ch[0];
    for(int i=0;i<n;i++)
    { flag=0;c=0;
        for(int j=i-1;j>=0;j--)
        {
           flag=0;
            if(ch[i]==ch[j])
            {
                flag=1;
                break;
            }}
            if(flag==1)
           continue;
            for(int k=i;k<n;k++)
            {
                if(ch[i]==ch[k])
                c++;
                
            }
            if(max<c)
            {
                max=c;
                x=ch[i];
            }
        }
    
    cout<<max<<endl<<x;
    return 0;
}

