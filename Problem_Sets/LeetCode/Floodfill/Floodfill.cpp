class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int og_colour = image[sr][sc];
        stack<pair<int, int>> stack;
        stack.push({sr, sc});

        // Up, down, left, right
        vector<pair<int, int>> directions = {{1, 0}, {-1, 0}, {0, -1}, {0, 1}};

        // Initialize a 2D array to track visited pixels
        vector<vector<bool>> visited(image.size(), vector<bool>(image[0].size(), false));

        while (!stack.empty()) {
            int row = stack.top().first;
            int col = stack.top().second;
            stack.pop();

            // Check if the pixel is already visited
            if (visited[row][col])
                continue;
            
            visited[row][col] = true;

            if (0 <= row && row < image.size() && 0 <= col && col < image[0].size() && image[row][col] == og_colour) {
                // Change current colour
                image[row][col] = color;
                // Enqueue neighbours
                for (auto& dir : directions) {
                    int new_row = dir.first + row;
                    int new_col = dir.second + col;
                    if (0 <= new_row && new_row < image.size() && 0 <= new_col && new_col < image[0].size()) {
                        stack.push({new_row, new_col});
                    }
                }
            }
        }
        return image;
    }
};