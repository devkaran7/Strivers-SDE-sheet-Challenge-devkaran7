int maximumProfit(vector<int> &prices){
    // Write your code here.
    int answer = 0;
    int mini = prices[0];
    for(auto price : prices){
        mini = min(mini, price);
        answer = max(answer, price - mini);
    }
    return answer;
}
