#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void chan(vector< vector<int> > & mat,int x,int y)
{
    mat[x][y]=1;
}

int main()
{
    int n,e;
    cout<<"Enter number of edges\n";
    cin>>e;
    cout<<"Enter number of node\n";
    cin>>n;

    vector< vector<int> > mat(n+1,vector<int>(n+1,0));
    int x,y;

    for(int i=0;i<e;i++){
        cin>>x>>y;
        chan(mat,x,y);
    }
    for(int i=0;i<n;i++){
       for(int j=0;j<n;j++){
           cout<<mat[i][j];
        }
        cout<<endl;
    }
   


    int src, dest;

    cout << "Enter Source Node: ";
    cin >> src;
    cout << "Enter Destination Node: ";
    cin >> dest;

    stack<int>st;
    vector<int>tlist;
    st.push(src);

    while(!st.empty())
    {
        int temp = st.top();
        if(mat[n+1][temp] == 0)
        {
            tlist.push_back(temp);
        }
        mat[n+1][temp] = 1;
        st.pop();
        for(int i= 0 , i < n+1 , i++)
        {
            if(mat[temp][i] == 1 && mat[n+1][i] == 0)
            {
                st.push(i);
            }
        }
    }
    for(int j=0; j<tlist.size(); j++)
    {
        cout << tlist[j] << " ,";
    }
    if(mat[n+1][dest] == 1)
    {
        cout << "Path Exist";
    }
    else
    {
        cout << "No Path";
    }
    return 0;
}