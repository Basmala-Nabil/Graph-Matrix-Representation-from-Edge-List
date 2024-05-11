# Graph-Matrix-Representation-from-Edge-List


Write a function that takes a 2d array of graph edges as a parameter and returns a 2d array
representing this graph. The graph contains 6 nodes (a,b,c,d,e,f).
graphMatrix = getGraphMatrix(edges, size)
Graph Matrix representation:

https://www.geeksforgeeks.org/graph-and-its-representations/

parameter to the function is a 2d array sizex3 and its size:

a b 5
a c 10
b d 4
f e 8
c f 2
return of the function is a 2d array size 6x6:
   a  b  c  d  e  f
a  0  5  10 0  0  0
b  5  0  0  4  0  0
c  10 0  0  0  0  2
d  0  4  0  0  0  0
e  0  0  0  0  0  8
f  0  0  2  0  8  0
