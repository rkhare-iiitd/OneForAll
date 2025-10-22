// insertion sort
/*	The array is virtually split into a sorted and an unsorted part.
	Values from the unsorted part are picked and placed at the correct position in the sorted part.
	
	e.g:	 	12 11 13 5 6
		PASS 1	11 12 13 5 6
		PASS 2	11 12 13 5 6
		PASS 3	11 12 5 13 6
				11 5 12 13 6
				5 11 12 13 6
		PASS 4	5 11 12 6 13
				5 11 6 12 13
				5 6 11 12 13
*/
#include<bits/stdc++.h>
using namespace std;

void insertionSort(vector<int>& arr);
int main()
{
	vector<int> arr={4,1,3,9,7};
	insertionSort(arr);
	for(auto i:arr)
		cout<<i<<" ";
	return 0;
}
void insertionSort(vector<int>& arr)
{
	int n=arr.size();
	for(int i=0; i<n-1; i++)
	{
		int key=arr[i];
		int j=i-1;
		// iterate till the new smallest element identified is placed at its righ tpos in sorted side
		while(j>=0 && arr[j]>key)
		{
			arr[j+1]=arr[j];	// keep shifting greater ele in forward direction
			j=j-1;				// decrease j
		}
		arr[j+1]=key;			// at this point j is at 2nd smallest element wrt key, hence placr key at j+1
	}
}
