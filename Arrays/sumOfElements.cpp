#include<bits/stdc++.h>
//#include<iostream>

using namespace std;
int main()
{
    int n;
    cout << "Enter the size of the array   : ";
    cin >> n;
    int arr[n];
    cout << "Enter the "<< n << " elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    cout << "Sum of the elements of the array is: " << sum << endl;
    return 0;
}
// Output:
// Enter the size of the array: 5
// Enter the elements of the array: 1 2 3 4 5
// Sum of the elements of the array is: 15
// Explanation:
// In this program, we are calculating the sum of the elements of an array. We first take the size of the array as input from the user and then take the elements of the array as input. We then calculate the sum of the elements using a for loop and display the result.
// The sum of the elements of the array {1, 2, 3, 4, 5} is 15.
// The time complexity of this program is O(n), where n is the size of the array. The space complexity is also O(n) as we are storing the elements of the array in memory.
// Practice this code
// Try changing the elements of the array and check if the program calculates the sum correctly.
// Try adding more elements to the array and check if the program works for larger arrays.
// Try calculating the sum of elements of an array of floating-point numbers.
// Try calculating the sum of elements of an array of negative numbers. 