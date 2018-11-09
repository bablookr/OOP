class Graph():
    def __init__(self):
        self.adj={}

    def addEdge(self,u,v):
        if u not in self.adj:
            self.adj[u]=[]
        self.adj[u].append(v)

    def bfs(self,s):
	ans=[]
        visited=[]
        q=[s]
        while q:
            p=q.pop(0)
	    ans.append(p)
	    for x in self.adj[p]:
		if x not in visited:
		    q.append(x)
		    visited.append(x)


graph=Graph()
n,m = map(int,input().split(' '))
for i in range(m):
    l = [int(x) for x in input().split(' ')]
    graph.addEdge(l[0],l[1])

print(graph.bfs(0))
