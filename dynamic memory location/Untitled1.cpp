DFS(depth for search)
1):all the vertex of the graph are in the not visited state.
2):Push the starting vertex on stack and change its status to  waiting
3)repeat while the stack is not empty.
4)put the value at the top of the csatck in the variable W;
5)remove W from stack and change its stauts to visited.
 for all Neibour N  of W if N is nopt visite push N on the stack and change its status to waiting.
