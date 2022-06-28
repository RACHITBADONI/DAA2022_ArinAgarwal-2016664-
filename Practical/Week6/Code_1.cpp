//Given a graph, design an algo and implement it using a program to find if a path exist between 2 vertex or not.

#include<bits/stdc++.h>
using namespace std;
 
vector<vector<int>> adj;
 
void addEdge(int v,int w)
{
    adj[v].push_back(w);
    adj[w].push_back(v);
}
 
bool isReachable(int s,int d)
{
    if(s == d)
        return true;
 
    int n= (int)adj.size();
    vector<bool> visited(n,false);
 
   
    queue<int> q;
 
    
    visited[s]= true;
    q.push(s);
 
    while(!q.empty())
    {
        s=q.front();
        q.pop();
        
       for(int x=adj[s][0];x<adj[s].size();x++)
        {
            if(x == d)
                return true;         
            if(!visited[x])
            {
                visited[x] = true;
                q.push(x);
            }
        }
    }
    return false;
}
 

int main()
{
    int n = 4;
    adj = vector<vector<int>>(n);
     
    addEdge(0,1);
    addEdge(0,2);
    addEdge(1,2);
    addEdge(2,0);
    addEdge(2,3);
    addEdge(3,3);
 
    int u = 1, v = 3;
    if (isReachable(u, v))
        cout << "\n There is a path from " << u << " to " << v;
    else
        cout << "\n There is no path from " << u << " to " << v;
  
    return 0;   
}
