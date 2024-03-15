class Solution:
    def floodFill(self, image: List[List[int]], sr: int, sc: int, color: int) -> List[List[int]]:
        og_colour = image[sr][sc]
        stack = deque()
        stack.append((sr, sc))
        directions = [(1, 0), (-1, 0), (0, -1), (0, 1)]
        visited = [[False for _ in range(len(image[0]))] for _ in range(len(image))]
        while stack:
            row, col = stack.pop()
            if visited[row][col]:
                continue
            visited[row][col] = True
            if 0 <= row < len(image) and 0 <= col < len(image[0]) and image[row][col] == og_colour:
                image[row][col] = color
                for dr, dc in directions:
                    new_row, new_col = row + dr, col + dc
                    if 0 <= new_row < len(image) and 0 <= new_col < len(image[0]):
                        stack.append((new_row, new_col))
        return image


        