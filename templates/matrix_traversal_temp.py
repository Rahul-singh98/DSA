from typing import List, Set
from collections import deque

################# Depth First Search ############################

def dfs(grid: List[List[int]], i: int, j: int, visited: Set[List[int]]):
    if i < 0 or j < 0 or i >= len(grid) or \
    j >= len(grid[0]) or (i, j) in visited: return
    
    visited.add((i, j))
    dfs(grid, i + 1, j, visited)
    dfs(grid, i - 1, j, visited)
    dfs(grid, i, j + 1, visited)
    dfs(grid, i, j - 1, visited)



################## Breadth First Search #########################
dirs = [ [0,1], [0,-1], [1,0], [-1,0] ]

def bfs(grid: List[List[int]], _i: int, _j: int):
    q = deque([[_i, _j]])
    visited = set([(_i, _j)])
    
    while q:
        cur = q.popleft()

        for dir in dirs:
            i = cur[0] + dir[0]
            j = cur[1] + dir[1]
            
            if i < 0 or j < 0 or i >= len(grid) or \
            j >= len(grid[0]) or (i, j) in visited: continue
            
            visited.add((i, j))
            q.append([i, j])