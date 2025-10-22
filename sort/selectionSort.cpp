// Selection Sort
/*	Time Complexity: O(n log n) for all cases
	Space Complexity: O(n)
	
	The selection sort algorithm sorts an array by repeatedly finding the minimum element (considering ascending order) from unsorted part and putting it at the beginning.
	The algorithm maintains two subarrays in a given array.
		The subarray which is already sorted. 
		Remaining subarray which is unsorted.

	In every iteration of selection sort, the minimum element (considering ascending order) from the unsorted subarray is picked and moved to the sorted subarray. 
	
*/
#include<bits/stdc++.h>
using namespace std;

void selectionSort(vector<int>& arr);
int main()
{
	vector<int> arr={4,1,3,9,7};
	selectionSort(arr);
	for(auto i:arr)
		cout<<i<<" ";
	return 0;
}
void selectionSort(vector<int>& arr)
{
	int n=arr.size();
	for(int i=0; i<n-1; i++)
	{
		int min=i;
		for(int j=i+1; j<n; j++)
		{
			if(arr[min]>arr[j])		// keep looking for minimum j in unsorted array
				min=j;
		}
		swap(arr[i],arr[min]);
	}
}
