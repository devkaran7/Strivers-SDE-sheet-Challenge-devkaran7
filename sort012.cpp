void sort012(int *arr, int n)
{
   //   Write your code here
    int start = 0;
    int end = n-1;
    int i = 0;
    while(i <= end){
        if(i < start){
            i++;
            continue;
        }
        if(arr[i] == 0){
            swap(arr[i], arr[start]);
            start++;
        }else if(arr[i] == 1){
            i++;
        }else{
            swap(arr[i], arr[end]);
            end--;
        }
    }
}
