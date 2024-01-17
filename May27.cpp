#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int getNextNeighbour(int mat[6][6], int node, int traversalTrack[6], int stackState[6])
{
    for(int i=0; i<6; i++)
    {
        if(mat[node][i] == 1 && traversalTrack[i] == 0)
            return i;
        else if(mat[node][i] == 1 && stackState[i] == 1)
        {
            cout << "Cycle Found";
            return -1;
        }
    }
    return -1;
}
int main()
{
    int adjmat[6][6] = {
        {0,1,0,0,0,0},
        {0,0,1,0,1,0},
        {0,0,0,1,0,1},
        {0,0,0,0,0,1},
        {1,0,1,0,0,0},
        {0,0,0,0,1,0},
    };
    int traversalTrack[6];
    int stackState[6];
    for(int k=0; k<6; k++)
    {
        traversalTrack[k] = 0;
        stackState[k] = 0;
    }
    stack<int>st;
    vector<int>tlist;
    st.push(0);
    stackState[0] = 1;
    int temp = st.top();
    if(traversalTrack[temp] == 0)
        tlist.push_back(temp);
    traversalTrack[temp] = 1;
    while(!st.empty())
    {
        temp = st.top();
        if(traversalTrack[temp] == 0)
            tlist.push_back(temp);
        traversalTrack[temp] = 1;
        int neighbour = getNextNeighbour(adjmat, temp, traversalTrack, stackState);
        if(neighbour >= 0)
        {
            st.push(neighbour);
            stackState[neighbour] = 1;
        }
        else
        {
            stackState[st.top()] = 0;
            st.top();
        }
    }
    return 0;
}