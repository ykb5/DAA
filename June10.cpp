#include <iostream>
#include <vector>
#define inf 999

using namespace std;

int * getNearestNeighbour(int adj[7][7], vector<int>nodeList, int traversal[])
{
    int min = 9999;
    static int edge[2];
    edge[1] = -1;
    for(int i=0; i<nodeList.size(); i++)
    {
        for(int j=0; j<7; j++)
        {
            if(adj[nodeList[i]][j]>0 && adj[nodeList[i]][j]<min && traversal[j]==0)
            {
                min = adj[nodeList[i]][j];
                edge[0]=nodeList[i];
                edge[1]=j;
            }
        }
    }
    return edge;
}
int main()
{
    int adjmat[7][7]={
        {0,1,2,3,inf,inf,inf},
        {1,0,1,inf,3,1,inf},
        {2,1,0,2,2,inf,inf},
        {3,inf,2,0,2,inf,1},
        {inf,3,2,2,0,5,3},
        {inf,1,inf,inf,5,0,1},
        {inf,inf,inf,1,3,1,0}};
    vector<int>tlist;
    int traversal[7]={0,0,0,0,0,0,0};
    for(int i=0; i<7; i++)
    {
        for(int j=0; j<7; j++)
        {
            cout << adjmat[i][j] << ", ";
        }
        cout << "\n";
    }
    tlist.push_back(0);
    traversal[0]=1;
    while(1)
    {
        int * nn=getNearestNeighbour(adjmat, tlist, traversal);
        int newnode = *(nn+1);
        if(newnode==-1)
        {
            break;
        }
        cout<<"("<<*nn<<", "<<*(nn+1)<<")\n";
        traversal[newnode]=1;
        tlist.push_back(newnode);
    }
    return 0;
}