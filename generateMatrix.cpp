class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> mat (n,vector<int>(n, 0));    
        int sRow = 0, sCol = 0;
        int eRow = n-1, eCol = n-1;
        int num = 1;
        while (sRow <= eRow && sCol <= eCol) {
            
            for(int j = sCol; j<=eCol; j++) { //top
                mat[sRow][j] = num++;
            }

            for(int i = sRow+1; i<=eRow; i++) { //right
                mat[i][eCol] = num++;
            }
            for(int j = eCol-1; j >= sCol; j--) { //bottom
                if(sRow==eRow) {
                    break;
                }
                mat[eRow][j] = num++;
            }

            for(int i = eRow-1; i > sRow; i--) { //left
                if(sCol==eCol) {
                    break;
                }
                mat[i][sCol] = num++;
            }

            sRow++; sCol++; eRow--; eCol--;
        }
        return mat;
    }    
};
