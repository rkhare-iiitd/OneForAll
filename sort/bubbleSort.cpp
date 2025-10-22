// bubble sort
#include<bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int>& arr);
int main()
{
	vector<int> arr={4,1,3,9,7};
	bubbleSort(arr);
	for(auto i:arr)
		cout<<i<<" ";
	return 0;
}
void bubbleSort(vector<int>& arr)
{
	int n=arr.size();
	for(int i=0; i<n-1; i++)
	{
		for(int j=0; j<n-i-1; j++)
		{
			if(arr[j]>arr[j+1])
				swap(arr[j],arr[j+1]);
		}
	}
}
