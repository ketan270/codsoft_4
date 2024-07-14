#include <bits/stdc++.h>

using namespace std;

int getMax(int arr[],int n){
	int max= INT_MIN;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max )
		{
			max= arr[i];
		}
	}
	return max;
}

int getMin(int arr[],int n){
	int min=INT_MAX;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)
		{
			min=arr[i];
		}
	}
	return min;
}

int main(){
	int n;
	cout << "ENTER NUMBER OF ELEMENTS IN A ARRAY: ";
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	
	cout << getMax(arr,n);
	cout << endl;
	cout << getMin(arr,n) << endl;
	int a=INT_MIN;
	cout << a ;
}