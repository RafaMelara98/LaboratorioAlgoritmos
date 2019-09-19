    #include <iostream>
     
    using namespace std;
     
     
    void swap(int* a, int* b)
    {
      int t = *a;
      *a = *b;
      *b = t;
    }
     
     
    int partition (int arr[], int low, int high)
    {
      int pivot = arr[high];
      int i = (low - 1);
      for (int j = low; j <= high - 1; j++)
      {
        if (arr[j] < pivot)
        {
        i++;
        swap(&arr[i], &arr[j]);
        }
      }
      swap(&arr[i + 1], &arr[high]);
      return (i + 1);
    }
     
    void quickSort(int arr[], int low, int high)
    {
      if (low < high)
      {
      int pi = partition(arr, low, high);
      quickSort(arr, low, pi - 1);
      quickSort(arr, pi + 1, high);
      }
    }
     
    int Solve (int arr[],int n){
        int curr = 2;
        
        quickSort(arr,0, n-1);
        
        for(int i = 0; i < n;i++){
            if(arr[i] >= curr)
                {
                    arr[i] = curr;
                    curr +=2;
                }
        }
        
        return curr;
    }
     
    int main() {
        int x,y;
        cin>>x;
        while(x--)
        {
            cin>>y;
            int arr[y];
            for(int i = 0; i < y; i++){
                cin>>arr[i];
            }
            cout<<Solve(arr,y)<<endl;
        }
        
    }

