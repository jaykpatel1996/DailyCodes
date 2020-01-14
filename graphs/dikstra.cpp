#include<bits/stdc++.h>
#define INF INT_MAX
using namespace std;
class graph
{
	int v;
	list< pair<int,int> > *adjlist;
	public:
		graph(int vertices)
		{
			v=vertices;
			adjlist = new list<pair<int,int> > [v];
		}
	
		
		void addedge(int v,int w,int d)
		{
			adjlist[v].push_back(make_pair(w,d));			
		}
	
		void dijkstra(int source)
		{
			vector<int> distance (v,INT_MAX);
			set< pair<int,int> > s;
			
			s.insert(make_pair(0,source));
			distance[source]=0;
			while(!s.empty())
			{cout<<"bp2";
				pair<int,int> temp=*(s.begin());
				s.erase(s.begin());
				int u=temp.second;
				list<pair<int,int> > ::iterator i;
				for(i=adjlist[u].begin();i!=adjlist[u].end();i++)
				{
					int v=(*i).first;
					int weight=(*i).second;
					if(distance[v]>weight+distance[u])
					{
						if(distance[v]!=INF)
						s.erase(s.find(make_pair(distance[v],v)));
						distance[v]=distance[u]+weight;
						s.insert(make_pair(distance[v],v));
					}
					
				}

				
			}
			printall(distance);
			
		}
		void printall(vector<int> v)
		{
			vector<int>::iterator i;int j=0;
			for(i=v.begin();i!=v.end();j++,i++)
			cout<<"distance from source vertex to "<<j<<" is "<<(*i)<<"\n";
		}
	
	
	
};
int main()
{
	int vertices;
	cout<<"enter the number of vertices";
	cin>>vertices;
	graph g(vertices);
/*	int n;
	cout<<"enter the total number of edges";
	cin>>n;
	int v,w,d;
	for(int i=0;i<n;i++)
	{
		cout<<"enter the starting vertice";
		cin>>v;
		cout<<"enter the ending vertice";
		cin>>w;
		cout<<"enter the distance betweeen those vertice";
		cin>>d;
		g.addedge(v,w,d);
	}*/
	g.addedge(0, 1, 4);
    g.addedge(0, 7, 8);
    g.addedge(1, 2, 8);
    g.addedge(1, 7, 11);
    g.addedge(2, 3, 7);
    g.addedge(2, 8, 2);
    g.addedge(2, 5, 4);
    g.addedge(3, 4, 9);
    g.addedge(3, 5, 14);
    g.addedge(4, 5, 10);
    g.addedge(5, 6, 2);
    g.addedge(6, 7, 1);
    g.addedge(6, 8, 6);
    g.addedge(7, 8, 7);
	g.dijkstra(0);
}
