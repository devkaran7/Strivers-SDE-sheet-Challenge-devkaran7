// Write your code here.
    int n = matrix.size();
    int m = matrix[0].size();
    for(int i = 0; i < n; i++){
        bool flag = false;
        for(int j = 0; j < m; j++){
            if(matrix[i][j] == 0){
                flag = true;
                break;
            }
        }
        if(flag){
            for(int j = 0; j < m; j++){
                if(matrix[i][j] == 0){
                    continue;
                }
                matrix[i][j] = -1;
            }
        }
    }
    for(int j = 0; j < m; j++){
        bool flag = false;
        for(int i = 0; i < n; i++){
            if(matrix[i][j] == 0){
                flag = true;
                break;
            }
        }
        if(flag){
            for(int i = 0; i < n; i++){
                if(matrix[i][j] == 0){
                    continue;
                }
                matrix[i][j] = -1;
            }
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(matrix[i][j] == -1){
                matrix[i][j] = 0;
            }
        }
    }
