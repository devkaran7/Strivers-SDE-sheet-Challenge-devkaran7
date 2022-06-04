vector<vector<long long int>> printPascal(int n) 
{
  // Write your code here.
    vector<vector<long long int>> answer;
    vector<long long int> pascal;
    pascal.push_back(1);
    answer.push_back(pascal);
    for(long long int i = 1; i < n; i++){
        vector<long long int> temp;
        temp.push_back(1);
        for(int j = 0; j < pascal.size() - 1; j++){
            temp.push_back(pascal[j] + pascal[j+1]);
        }
        temp.push_back(1);
        answer.push_back(temp);
        pascal = temp;
    }
    return answer;
}
