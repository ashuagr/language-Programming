void main() {
  List<int> arr = [60, 31, 29, 19, 33, 9, 111];
  bubbleSort(arr);
  print("Sorted array");
  print(arr);
}

void bubbleSort(List<int> arr) {
  int n = arr.length;
  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++)
      if (arr[j] > arr[j + 1]) {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
  }
}
