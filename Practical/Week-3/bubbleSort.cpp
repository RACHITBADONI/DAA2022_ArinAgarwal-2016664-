#include<iostream>
using namespace std;

int* create(int *p,int &a)
{
    cout<<"enter size of array : ";
    cin>>a;
    
    p=new int[a];
    
    for(int i=0;i<a;i++)
    {
        cout<<"enter element in index "<<i<<" : ";
        cin>>p[i];
    }
    return p;
}

void swap(int *p,int n)
{
    int temp=p[n+1];
    p[n+1]=p[n];
    p[n]=temp;
    
}

void bubblesort(int *p,int n,int &c)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(p[j+1]<p[j])
            {
                //int temp=p[j+1];
                //p[j+1]=p[j];
                //p[j]=temp;
                swap(p,j);
                //c++;
            }
            c++;
        }
    }
    
    cout<<"total comparrisons are : "<<c<<endl;
}

void print(int *p,int n)
{
    cout<<"array is : ";
    for (int i = 0; i < n; i++) {
        int x=p[i];
        cout<<x<<" ";
    }
    cout<<endl;
}

int main()
{
    int n,*arr,count=0;
    arr=create(arr,n);
    print(arr,n);
    bubblesort(arr,n,count);
    print(arr,n);
    return 0;
}
