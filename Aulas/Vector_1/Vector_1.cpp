#include <bits/stdc++.h>
	using namespace std;
	int main (){
	
	int n;
	cin >> n;

	vector<int> arr;

	for(int i=0; i<n; i++){
		int x; 
		cin >> x;
		arr.push_back(x);
	}

	sort(arr.begin(), arr.end());

	int contador = 0;

	for(int i = 0; i<n; i++){
		if(arr[i] != arr[i+1]){
			contador++;
		}
	}
	cout << contador; 
	return 0;
	}
