#include<stdio.h>
#include<stdlib.h>
#define MAX 100
int adjMatrix[MAX][MAX];
int numVertices = 0;
// Function prototypes
void addVertices(int count);
void addEdge(int src, int dest);
void removeEdge(int src, int dest);
void removeVertex(int vertex);
void displayGraph();
int main()
{
	int choice, src, dest, vertex, count;
	while (1)
	{
		printf("\nGraph Operations Menu:\n");
		printf("1. Add Vertices:\n");
		printf("2. Add Edge\n");
		printf("3. Remove Edge\n");
		printf("4. Remove Vertex\n");
		printf("5. Display Graph\n");
		printf("6. Exit\n");
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
				printf("Enter source and destination vertices to remove the edge:");
				scanf("%d %d", &src, &dest);
				removeEdge(src, dest);
				break;
			case 4:
				printf("Enter the vertex to remove: ");
				scanf("%d", &vertex);
				removeVertex(vertex);
				break;
				break;
			case 5:
				displayGraph();
				break;
			case 6:
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
		printf("Graph cannot hold more than %d vertices=\n", MAX);
		return;
	}
	for(i = 0; i < count; i++)
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
	printf("Edge removed between %d and %d\n", src, dest);
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
	for (i = vertex; i < numVertices-1; i++)
	{
		for (j = 0; j < numVertices; j++)
		{
			adjMatrix[i][j] = adjMatrix[i + 1][j];
			adjMatrix[j][i] = adjMatrix[j][i + 1];
		}
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
