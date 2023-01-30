#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string>

using namespace std;

int main() {
	int anshii;
	cin >> anshii;
	for (int i = 0; i < anshii; i++) {
		int n, k; //n-number of elements in the array and k is the height
		cin >> n >> k;

		int count = 0;

		int arr[n];
		for (int i = 0; i < n; i++) {
			cin >> arr[i];
		}

		for (int i = 0; i < n; i++) {
			if (arr[i] > k) {
				count++;
			}
		}
		cout << count << endl;
	}
}
