#include<time.h>
#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;


void recursive_queen(int arr[], int n, int r);
void print(int arr[], int n);
int main ()
{
	int n;
	cin >> n;
	int arr[8];
	memset(arr, 0, sizeof(arr));
	recursive_queen(arr, n, 0);
	return 0;
}

void recursive_queen(int arr[], int n, int r){
	int i=1, j = 1;
	int legal = 0;
	if(r == n +1){
		print(arr, n);
		exit(0);
	}
	else{
		for(j = 1; j <= n ; j++){
			legal = 1; // legal = true
			for(i = 1; i <= r-1; i++){
				if(arr[i] == j || arr[i] == j + r - i || arr[i] == j - r + i){
					legal = 0; // legal = false
				}
			}
			if(legal == 1) {
				// legal = true
				arr[r] = j;
				recursive_queen(arr, n, r+1);
			}
		}
	}
}

void print(int arr[], int n){
	int i = 1, j =1;
	for(i = 1; i <= n; i++){
		for(j = 1; j <= n ; j++){
			if(j == arr[i]){
				cout << "  1  "; 
			}
			cout << "  *  ";
		}
		cout << "\n";
	}
}

