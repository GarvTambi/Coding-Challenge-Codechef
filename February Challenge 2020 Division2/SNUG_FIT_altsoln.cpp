// Question link = https://www.codechef.com/FEB20B/problems/SNUG_FIT

#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); 
    cin.tie(NULL);	
	int x;
	cin>>x;
	for(int j = 0; j<x; j++) {
		int n;	
		cin >> n;
		unsigned long long int arr[n], bx[n], z=0;
	   	for(int i=0; i<n; i++) {
		     cin>>arr[i];
		}
		for(int i=0; i<n; i++) {
		     cin>>bx[i];
		}
		sort(arr, arr + n);	
		sort(bx, bx + n);
		for(int i=0; i<n; i++) {
			z += std::min(arr[i], bx[i]);
		}	
		cout<<z<<'\n';
	}
}
