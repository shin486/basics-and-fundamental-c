#include <iostream>

using namespace std;
int main() {
const int SIZE = 10;
int arr1[SIZE], arr2[SIZE], merged[SIZE * 2];
int totalSize = SIZE * 2;
cout << "Enter 10 Elements for the first array:\n";
for (int i = 0; i < SIZE; i++) {
cin >> arr1[i];
}
cout << "Enter 10 Elements for the second array:\n";
for (int i = 0; i < SIZE; i++) {
cin >> arr2[i];
}
for (int i = 0; i < SIZE; i++) {
merged[i] = arr1[i];
merged[i + SIZE] = arr2[i];
}
for (int i = 0; i < totalSize; i++) {
for (int j = i + 1; j < totalSize; j++) {
if (merged[i] < merged[j]) {
int temp = merged[i];
merged[i] = merged[j];
merged[j] = temp;
}
}
}
cout << "\nMerged array in descending order:\n";
for (int i = 0; i < totalSize; i++) {
cout << merged[i] << " ";
}
return 0;
}
