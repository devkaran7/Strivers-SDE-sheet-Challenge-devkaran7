vector<int> nextPermutation(vector<int> &permutation, int n)
{
    int reverse_from = 0;
    for(int i = n-2; i >= 0; i--){
        if(permutation[i+1] > permutation[i]){
            int mini = INT_MAX;
            int index = -1;
            for(int j = i+1; j < n; j++){
                if(permutation[j] > permutation[i]){
                       if(permutation[j] < mini){
                           mini = permutation[j];
                           index = j;
                       }
                }
            }
            swap(permutation[i], permutation[index]);
            reverse_from = i + 1;
            break;
        }
    }
    reverse(permutation.begin() + reverse_from, permutation.end());
    return permutation;
}
