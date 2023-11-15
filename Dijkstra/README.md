#Dijkstra Algorithm

Dijkstra's algorithm is a popular graph algorithm used to find the shortest path between two vertices in a graph with non-negative edge weights. Here's a brief overview:

Objective: Find the shortest path from a source vertex to all other vertices in the graph.

###Data Structures Used:

Priority Queue (min-heap): To efficiently select the vertex with the smallest tentative distance.
Array/Map: To store and update the tentative distances from the source to each vertex.
Algorithm Steps:

Initialize: Set the distance to the source vertex as 0, and all other distances as infinity.
Select: Choose the vertex with the smallest tentative distance (initially the source vertex).
Update Distances: For each neighboring vertex of the selected vertex, update its tentative distance if a shorter path is found.
Repeat: Repeat steps 2 and 3 until all vertices are visited or the destination vertex is reached.
Termination:

When all vertices are visited or the destination vertex is reached, the algorithm terminates.
Optimality:

Dijkstra's algorithm guarantees the shortest path if all edge weights are non-negative.
Use Cases:

Routing algorithms in computer networks.
Shortest path finding in maps and navigation systems.
Complexity:

Time complexity is O((V + E) \* log(V)), where V is the number of vertices and E is the number of edges.
Variants:

Modified versions exist for graphs with negative weights (e.g., Bellman-Ford algorithm).

#Parallel time complexity : O(n^3)/P + O(n log p)

here P is number of processors.
O(n^3)/P is computation time
O(n log p) is communication/broadcast between thread.
