//#include<iostream>
//using namespace std;
//
//// Function to find the vertex with minimum key value 
//int min_Key(int key[], bool visited[]) {
//    int min = 999, min_index;  // 999 represents an Infinite value
//
//    for (int v = 0; v < 9; v++) {
//        if (visited[v] == false && key[v] < min) {
//            // vertex should not be visited
//            min = key[v];
//            min_index = v;
//        }
//    }
//    return min_index;
//}
//
//// Function to print the final MST stored in parent[]  
//int print_MST(int parent[], int cost[9][9]) {
//    int minCost = 0;
//    cout << "\nEdge \tWeight\n";
//    for (int i = 1; i < 9; i++) {
//        cout << static_cast<char>(parent[i] + 65) << " - " << static_cast<char>(i + 65) << " \t" << cost[i][parent[i]] << " \n";
//        minCost += cost[i][parent[i]];
//    }
//    return minCost;
//}
//
//// Function to find the MST using adjacency cost matrix representation  
//void find_MST(int cost[9][9]) {
//    int parent[9], key[9];
//    bool visited[9];
//
//    // Initialize all the arrays 
//    for (int i = 0; i < 9; i++) {
//        key[i] = 999;    // 999 represents an Infinite value
//        visited[i] = false;
//        parent[i] = -1;
//    }
//
//    key[0] = 0;  // Include first vertex in MST by setting its key vaue to 0.  
//    parent[0] = -1; // First node is always root of MST  
//
//    // The MST will have maximum 9-1 vertices  
//    for (int x = 0; x < 9 - 1; x++) {
//        // Finding the minimum key vertex from the 
//        //set of vertices not yet included in MST  
//        int u = min_Key(key, visited);
//
//        visited[u] = true;  // Add the minimum key vertex to the MST  
//
//        // Update key and parent arrays
//        for (int v = 0; v < 9; v++) {
//            // cost[u][v] is non zero only for adjacent vertices of u  
//            // visited[v] is false for vertices not yet included in MST  
//            // key[] gets updated only if cost[u][v] is smaller than key[v]  
//            if (cost[u][v] != 0 && visited[v] == false && cost[u][v] < key[v]) {
//                parent[v] = u;
//                key[v] = cost[u][v];
//            }
//        }
//    }
//
//    cout << "\nTotal cost is: " << print_MST(parent, cost);
//}
//
//int main() {
//    int cost[9][9];
//    cout << "Enter every edge waitage for a graph with 9 vetices" << endl;
//
//    for (int i = 0; i < 9; i++)
//        for (int j = 0; j < 9; j++)
//            cin >> cost[i][j];
//
//    find_MST(cost);
//}