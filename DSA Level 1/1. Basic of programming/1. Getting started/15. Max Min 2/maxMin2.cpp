#include<bits/stdc++.h>
using namespace std;

void curiousCase(int n){
    // 	write your code here
	int secmax;
	int secmin;
	int arr[n];
	for(int i=0; i<n; i++){
		cin>>arr[i];
	}
	int sml = arr[0];
	int grt = arr[0];

	for(int i=0; i<n; i++){
		if(secmax < arr[i] && secmax < grt){
			secmax = arr[i];
		}
		if(secmin > arr[i] && secmin > sml){
			secmin = arr[i];
		}
		if(sml > arr[i]){
			secmin = sml;
			sml = arr[i];
		}
		if(grt < arr[i]){
			secmax = grt;
			grt = arr[i];
		}
	}

	cout<<secmax<<" "<<secmin;
}

int main(){
	int n;
	cin>>n;
	curiousCase(n);
	return 0;
}