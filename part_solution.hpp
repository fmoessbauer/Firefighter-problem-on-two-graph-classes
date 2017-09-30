#ifndef PART_SOLUTION_INCLUDED
#define PART_SOLUTION_INCLUDED

#include "graph.hpp"
#include <vector>

using vec  = std::vector<int>;
using pvec = std::vector<std::pair<int,int>>;

/**
 *
 */
//vec penalty: first and second entries are a pair, third and forth, ...
//vec bonus: single vertices
vec part_solution(
    Splitgraph & g,
    int & pos,
    vec & uc,
    pvec penalty = pvec(), /// first and second entries are a pair, third and forth, ...
    vec bonus = vec()      /// single vertices 
    ); 

#endif // PART_SOLUTION_INCLUDED

