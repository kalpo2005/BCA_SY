#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAX 100

int adjMatrix[MAX][MAX];
int numVertices = 0;
int visited[MAX];
// Function prototypes
void addVertices(int count);
void addEdge(int src, int dest);
void removeEdge(int src, int dest);
void removeVertex(int vertex);
void displayGraph();
void dfs(int startVertex);
void bfs(int startVertex);
int main()
{
	int choice, src, dest, vertex, count, startVertex,i;
	while (1)
	{
		printf("\nGraph Operations Menu:\n");
		printf("1. Add Vertices\n");
		printf("2. Add Edge\n");
		printf("3. Remove Edge\n");
		printf("4. Remove Vertex\n");
		printf("5. Display Graph\n");
		printf("6. Depth First Search (DFS)\n");
		printf("7. Breadth First Search (BFS)\n");
		printf("8. Exit\n");
		printf("Enter your choice: ");
		scanf("%d", &choice);
		switch (choice)
		{
			case 1:
				printf("Enter the number of vertices to add: ");
				scanf("%d", &count);
				addVertices(count);
				break;
			case 2:
				printf("Enter source and destination vertices: ");
				scanf("%d %d", &src, &dest);
				addEdge(src, dest);
				break;
			case 3:
				printf("Enter  source  and  destination  vertices  to  remove  the  edge:");
				scanf("%d %d", &src, &dest);
				removeEdge(src, dest);
				break;
			case 4:
				printf("Enter the vertex to remove: ");
				scanf("%d", &vertex);
				removeVertex(vertex);
				break;
			case 5:
				displayGraph();
				break;
			case 6:
				printf("Enter the starting vertex for DFS:");
				scanf("%d", &startVertex);
				for (i = 0; i < numVertices; i++)
				{
					visited[i] = 0;
				}
				dfs(startVertex);
				printf("\n");
				break;
			case 7:
				printf("Enter the starting vertex for BFS: ");
				scanf("%d", &startVertex);
				bfs(startVertex);
				printf("\n");
				break;
			case 8:
				printf("Exiting program.\n");
				exit(0);
			default:
				printf("Invalid choice! Please try again.\n");
		}
	}
	return 0;
}
// Add vertices to the graph
void addVertices(int count)
{
	int i;
	if (numVertices + count > MAX)
	{
		printf("Graph cannot hold more than %d vertices.\n", MAX);
		return;
	}
	for (i = 0; i < count; i++)
	{
		numVertices++;
		printf("Vertex %d added successfully.\n", numVertices-1);
	}
}
// Add an edge to the graph
void addEdge(int src, int dest)
{
	if (src >= numVertices || dest >= numVertices || src < 0 || dest < 0)
	{
		printf("Invalid vertices.\n");
		return;
	}
	adjMatrix[src][dest] = 1;
	adjMatrix[dest][src] = 1; // Uncomment this for an undirected graph
	printf("Edge added between %d and %d.\n", src, dest);
}
// Remove an edge from the graph
void removeEdge(int src, int dest)
{
	if (src >= numVertices || dest >= numVertices || src < 0 || dest < 0)
	{
		printf("Invalid vertices.\n");
		return;
	}
	adjMatrix[src][dest] = 0;
	adjMatrix[dest][src] = 0; // Uncomment this for an undirected graph
	printf("Edge removed between %d and %d.\n", src, dest);
}
// Remove a vertex from the graph
void removeVertex(int vertex)
{
	int i,j;
	if (vertex >= numVertices || vertex < 0)
	{
		printf("Invalid vertex.\n");
		return;
	}
	for (i = vertex; i < numVertices - 1; i++)
	{
		adjMatrix[i][j] = adjMatrix[i + 1][j];

		for (j = 0; j < numVertices; j++)
		{
			adjMatrix[j][i] = adjMatrix[j][i + 1];
		}
	}
	for (i = 0; i <= numVertices; i++)
	{
		adjMatrix[numVertices-1][i]=0;
		adjMatrix[i][numVertices-1]=0;
	}
	numVertices--;
	printf("Vertex %d removed successfully.\n", vertex);
}

// Display the adjacency matrix of the graph
void displayGraph()
{
	int i,j;
	if (numVertices == 0)
	{
		printf("Graph is empty.\n");
		return;
	}
	printf("Adjacency Matrix:\n");
	for (i = 0; i < numVertices; i++)
	{
		for (j = 0; j < numVertices; j++)
		{
			printf("%d ", adjMatrix[i][j]);
		}
		printf("\n");
	}
}
// Depth First Search (DFS)
void dfs(int startVertex)
{
	int i;
	printf("%d ", startVertex);
	visited[startVertex] = 1;
	for (i = 0; i < numVertices; i++)
	{
		if (adjMatrix[startVertex][i] == 1 && !visited[i])
		{
			dfs(i);
		}
	}
}
// Breadth First Search (BFS)
void bfs(int startVertex)
{
	int queue[MAX], front = 0, rear = 0,i;
	for (i = 0; i < numVertices; i++)
	{
		visited[i] = 0;
	}
	queue[rear++] = startVertex;
	visited[startVertex] = 1;
	while (front < rear)
	{
		int currentVertex = queue[front++];
		printf("%d ", currentVertex);
		for (i = 0; i < numVertices; i++)
		{
			if (adjMatrix[currentVertex][i] == 1 && !visited[i])
			{
				queue[rear++] = i;
				visited[i] = 1;
			}
		}
	}
}

