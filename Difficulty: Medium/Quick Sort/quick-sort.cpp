class Solution {
  public:
    void quickSort(vector<int>& arr, int low, int high) {
        if(low < high){
            int pi = partition(arr, low, high); 
            quickSort(arr, low, pi - 1);   // left part
            quickSort(arr, pi + 1, high); // right part
        }
    }

  public:
    int partition(vector<int>& arr, int low, int high) {
        int pivot = arr[high]; 
        int i = low - 1; // pointer for smaller elements

        for(int j = low; j < high; j++){
            if(arr[j] <= pivot){
                i++;
                swap(arr[i], arr[j]);
            }
        }
        
        // place pivot in the correct position
        swap(arr[i + 1], arr[high]);
        return i + 1;
    }
};
