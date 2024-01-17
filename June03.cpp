#include <iostream>
#include <vector>
#include <stack>
#define inf 9999

using namespace std;

int main()
{
    int edgeList[3][10]={
        {0,0,0,3,2,1,2,3,4,5},
        {1,2,3,2,1,4,4,5,6,6},
        {6,5,5,-2,-2,-1,1,-1,3,3}};
    int distList[7]={0,inf,inf,inf,inf,inf,inf};
    for(int j=0; j<6; j++)
    {
        for(int i=0; i<10; i++)
        {
            int src = edgeList[0][i];
            int dest = edgeList[1][i];
            int cost = edgeList[2][i];
            if(distList[src] + cost < distList[dest])
            {
                distList[dest] = distList[src] + cost;
            }
        }
        for(int k=0; k<7; k++)
        {
            cout << distList[k] << ", ";
        }
        cout << "\n";
    }
    return 0;
}