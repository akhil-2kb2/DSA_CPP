#include <bits/stdc++.h>
using namespace std;

// Function to take array input
void inputArray(int arr[], int n) {
    cout << "Please Enter The " << n << " Elements: ";
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
void arrayReverse(int arr[], int n){//without using extra space
	// for (int i = 0; i < n/2; i++)
	// {
		
	// 		int temp = 0; 
	// 		temp = arr[(n - 1) - i];
	// 		arr[(n - 1) - i] = arr[i];
	// 		arr[i] = temp;
		
	// }
	// for (int i = 0; i < n; i++)
	// {
	// 	cout  << arr[i]<< " " ;
	// }
	// cout << endl;

	int left = 0, right = n - 1;
	while(left < right){
		int temp = arr[left];
		arr[left] = arr[right];
		arr[right] = temp;
		left++;
		right--;
	}
	int i = 0;
	//cout << "Here is Your Reversed Array" << endl;
	while(i < n){
		cout << arr[i] << " ";
		i++;
	}
	cout << endl;
}
int getSecondLargest(int arr[], int n){
    int first = INT_MIN;
    int second = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] > first){
            second = first;
            first = arr[i];
        }
        else if(arr[i] > second && arr[i] != first){
            second = arr[i];
        }
    }
    return (second == INT_MIN) ? -1 : second;
}
int main() {
    int n;

    cout << "Welcome To Array Element Manipulation Zone:" << endl;
    cout << "Please Enter Size Of The Array: ";
    cin >> n;

    int myArr[n]; 
    inputArray(myArr, n);

    //cout << "Sum Of ELEMENTS: " << sumOfElements(myArr, n) << endl;
    //cout << "Max ELEMENT: " << findMaxElement(myArr, n) << endl;
    //cout << "No Of Even Elements Are: " << countEvenNumbers(myArr, n) << endl;
    //pairSum(myArr,  n);
   // cout << "Reversed Array: ";
   // arrayReverse(myArr, n);
   if(getSecondLargest(myArr, n) == -1){
       cout << "No Second Largest Element Found" << endl;
    }
    else{
        cout << "Second Largest Element: " << getSecondLargest(myArr, n) << endl;
    }



    return 0;
}
