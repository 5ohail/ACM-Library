/*************************************************************************************
**************************************************************************************

MAX/MIN Closure :  

Closure is a directed subgraph with no outgoing edges. 
MAX/Min Closure means a closure with max/min sum of weighted nodes outside the graph.
For MAX, join source with positive nodes,sink with negative nodes and capacities are
absolute value,infinite capacity between existing edges. 
For min,source & sink is reversed.
Ans = sum of positive nodes - min cut (For max)
Ans = sum of negative nodes + min cut (For min)

***************************************************************************************
***************************************************************************************
Demand Capacity : 

We add a new source s′ and a new sink t′, a new edge from the source s′ to every other vertex, 
a new edge for every vertex to the sink t′, and one edge from t to s. Additionally we define 
the new capacity function c′ as:

c′((s′,v))=∑u∈Vd((u,v)) for each edge (s′,v).
c′((v,t′))=∑w∈Vd((v,w)) for each edge (v,t′).
c′((u,v))=c((u,v))−d((u,v)) for each edge (u,v) in the old network.
c′((t,s))=∞

If the new network has a saturating flow (a flow where each edge outgoing from s′ is
completely filled, which is equivalent to every edge incoming to t′ is completely filled),then
the network with demands has a valid flow, and the actual flow can be easily reconstructed from
the new network. Otherwise there doesn't exist a flow that satisfies all conditions. 

***************************************************************************************
***************************************************************************************

König-Egeváry Theorem
The König-Egeváry theorem (König's theorem) , asserts that 
the maximum matching is equal to the vertex cover number for a bipartite graph.

***************************************************************************************
***************************************************************************************

Minimum Path cover in a Directed Acyclic Graph :

find the minimum number of vertex-disjoint paths to cover each vertex in V.
make a bipartite graph G' = {Vout X Vin , E }
Vout = nodes having positive out-degree
Vin = nodes have positive in-degree
G' has a matching of size m iff there exists n-m vertex-disjoint paths that cover each vertex in G.


**********************************************************************************************************************
**********************************************************************************************************************/
