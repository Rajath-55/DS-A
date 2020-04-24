#include <vector>
using namespace std;
void swap(vector<int> array, int i, int j)
{
  int temp = array[i];
  array[i] = array[j];
  array[j] = temp;
}
void quicksortHelper(vector<int> array, int start, int end)
{
  if (start >= end)
    return;
  int left = start + 1;
  int right = end, pivot = start;
  while (left <= right)
  {
    if (array[left] < array[pivot] && array[right] > array[pivot])
      swap(array, left, right);
    if (array[left] <= array[pivot])
      left++;
    if (array[right] >= array[pivot])
      right++;
  }
  swap(array, right, pivot);
  bool leftsmall = right - 1 - start < end - right - 1;
  if (leftsmall)
  {
    quicksortHelper(array, start, right - 1);
    quicksortHelper(array, right + 1, end);
  }
  else
  {
    quicksortHelper(array, right + 1, end);
    quicksortHelper(array, start, right - 1);
  }
}

vector<int> quickSort(vector<int> array)
{
  // Write your code here.
  quicksortHelper(array, 0, array.size() - 1);

  return {array};
}
