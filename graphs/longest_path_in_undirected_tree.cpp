#include<stdio.h>
#include<iostream>
#include<list>
#include<queue>
using namespace std;
class tree
{
	int v;
	list<int> *adjlist;
	public:
		tree(int v)
		{
			this->v=v;
			adjlist=new list<int>[v+1];
			
		}
		void add_edge(int v,int w)
		{
			adjlist[v].push_back(w);
			adjlist[w].push_back(v);
		}
		pair<int,int> bfs(int s)
		{
			queue<int> q;
			int dis[v+1]={-1};
			dis[s]=0;
			q.push(s);
			list<int>::iterator i;
			while(!q.empty())
			{
				int c=q.front(); q.pop();
				for(i=adjlist[c].begin();i!=adjlist[c].end();i++)
				{
					if(dis[*i]==-1)
					{
						q.push(*i);
						dis[*i]=dis[c]+1;
					}
				}	
			}
	
			int max=0;
			int index=-1;

			return make_pair(index,max);						
			
		}
		void longest_path(int x)
		{
			cout<<"x is"<<x;
			pair<int,int> t1,t2;
				t1=bfs(x);
				cout<<"the distance between starting node is"<<t1.second<<"\t"<<t1.first<<"\n";
				t2=bfs(t1.first);
				cout<<t2.second<<"\n";
			
		}
	
};
int main()
{
	int vertices;
	cin>>vertices;
	tree t(vertices);
	int v,w;
	for(int i=0;i<vertices-1;i++)
	{
		cin>>v>>w;
		t.add_edge(v,w);
	}
	t.longest_path(v);
}
