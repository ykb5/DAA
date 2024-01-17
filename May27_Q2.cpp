#include <iostream>
#include <vector>
#include <stack>
#include <queue>

using namespace std;

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
    int traversal[6] = {0,0,0,0,0,0};
    int color[6] = {0,0,0,0,0,0};
    
    queue<int>q;
    vector<int>tlist;
    q.push(0);
    traversal[0] = 1;
    color[0] = 1;

    while(!q.empty())
    {
        int temp = q.front();
        tlist.push_back(temp);
        q.pop();
        for(int i=0; i<6; i++)
        {
            if(adjmat[temp][i] == 1 && color[temp] == color[i])
            {
                cout << "Graph is not a Bipartite\n";
                return 0;
            }
            if(adjmat[temp][i] == 1 && traversal[i] == 0)
            {
                q.push(i);
                traversal[i] = 1;
                if(color[temp] == 1)
                    color[i] = 2;
                else if(color[temp] == 2)
                    color[i] = 1;
            }
        }
    }
    for(int i=0; i<tlist.size(); i++)
    {
        cout << tlist[i] << " ,";
    }
    cout << "\nGraph is Bipatite\n";
    return 0;
}

/*
#include <iostream>
#include <queue>
#define V 4

using namespace std;

bool isBipartite(int G[][V], int src)
{
	int colorArr[V];
	for (int i = 0; i < V; ++i)
		colorArr[i] = -1;

	colorArr[src] = 1;

	queue <int> q;
	q.push(src);

	while (!q.empty())
	{
		int u = q.front();
		q.pop();

		if (G[u][u] == 1)
		return false;

		for (int v = 0; v < V; ++v)
		{
			if (G[u][v] && colorArr[v] == -1)
			{
				colorArr[v] = 1 - colorArr[u];
				q.push(v);
			}

			else if (G[u][v] && colorArr[v] == colorArr[u])
				return false;
		}
	}

	return true;
}

int main()
{
	int G[][V] = {{0, 1, 0, 1},
		{1, 0, 1, 0},
		{0, 1, 0, 1},
		{1, 0, 1, 0}
	};

	isBipartite(G, 0) ? cout << "Yes" : cout << "No";
	return 0;
}
*/