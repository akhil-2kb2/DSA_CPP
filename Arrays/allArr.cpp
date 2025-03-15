#include <bits/stdc++.h>
using namespace std;

// Function to take array input
void inputArray(int arr[], int n) {
    cout << "Please Enter The " << n << " Elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
}

// Function to calculate sum of elements
int sumOfElements(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}

// Function to find the maximum element
int findMaxElement(int arr[], int n) {
    int maxInt = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > maxInt) {
            maxInt = arr[i];
        }
    }
    return maxInt;
}

// Function to count even numbers (excluding 0)
int countEvenNumbers(int arr[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0 && arr[i] != 0) {
            count++;
        }
    }
    return count;
}
// Function to match a given number with any pair of the Array
// Function to match a given number with any pair of the Array
void pairSum(int arr[], int n) {
    int myNum;
    cout << "Please Enter The Number For Matching pairSum: ";
    cin >> myNum;
    cout << endl;

    bool found = false;
    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) { // Check all pairs (i, j)
            if (arr[i] + arr[j] == myNum) {
                cout << "Yes, The Pair Is: " << arr[i] << " " << arr[j] << endl;
                found = true;
                count++;
            }
        }
    }
    cout << "count: " << count << endl;

    if (!found) {
        cout << "No Matching Pair Found." << endl;
    }
}

int main() {
    int n;

    cout << "Welcome To Array Element Manipulation Zone:" << endl;
    cout << "Please Enter Size Of The Array:" << endl;
    cin >> n;

    int myArr[n]; 
    inputArray(myArr, n);

   // cout << "Sum Of ELEMENTS: " << sumOfElements(myArr, n) << endl;
    //cout << "Max ELEMENT: " << findMaxElement(myArr, n) << endl;
    //cout << "No Of Even Elements Are: " << countEvenNumbers(myArr, n) << endl;
    pairSum(myArr,  n);

    return 0;
}
