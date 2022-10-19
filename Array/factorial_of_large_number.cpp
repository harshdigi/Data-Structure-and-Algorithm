#include <iostream>
#include <vector>

using namespace std;

int main() {
  int N = 100;
  vector<int> arr{1};
  int size = 1;
  int carry = 0;
  for (int q = 2; q <= N; q++) {
    int i = 0;
    while (i < size) {
      int num = arr[i] * q + carry;
      if (num / 10 == 0) {
        arr[i] = num;
        carry = 0;
      } else {
        arr[i] = num % 10;
        carry = num / 10;
      }
      i++;
    }
    if (i == size && carry != 0) {
      while (carry) {
        arr.push_back(carry % 10);
        carry = carry / 10;
        size++;
      }
    }
  }
  for (int i = 0; i < arr.size(); i++) {
    cout << arr[i];
  }
  return 0;
}

// write a proogram to create an intersection of two list
// input two lists and merge them in a third in such a way that the no element will be repeated in the new list
//implement the stack using  list (write menu driven program)