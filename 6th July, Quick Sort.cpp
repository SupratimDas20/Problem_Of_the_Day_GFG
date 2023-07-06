
class Solution
{
    public:
    void quickSort(int arr[], int low, int high)
    {
        if (low < high) {
            int pivoit = partition(arr, low, high);
            quickSort(arr, low, pivoit - 1);
            quickSort(arr, pivoit + 1, high);
        }
    }
    
    public:
    int partition (int arr[], int low, int high)
    {
          int pivot = arr[high];
          int part = low;

          for (int j = low; j < high; ++j) {
            if (arr[j] <= pivot) {
              swap(arr[part], arr[j]);
              ++part;
            }
          }
          
          swap(arr[part], arr[high]);
          return (part);
    }
};
