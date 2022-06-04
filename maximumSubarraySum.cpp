long long maxSubarraySum(int arr[], int n)
{
    long long curr_sum = 0;
    long long max_sum = 0;
    for(int i = 0; i < n; i++){
        if(curr_sum + arr[i] < 0){
            curr_sum = 0;
        }else{
            curr_sum += arr[i];
        }
        max_sum = max(max_sum, curr_sum);
    }
    return max_sum;
}
