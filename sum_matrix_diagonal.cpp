#include <iostream>
#include <vector>
using namespace std;

int main(){

	vector <int> V;
	int n, value, sum;
	int mainsum = 0;
	int secsum = 0;
	
	cin>>n;
	

	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			cin>>value;
			V.push_back(value);
		}
	}
	
	for (int i = 0; i < V.size(); i = i + n + 1){

		mainsum = mainsum + V[i];
	}
	for (int j = n - 1; j < V.size() - 1; j = j + n - 1){

		secsum = secsum + V[j];
	}

	sum = mainsum - secsum;
	cout<<abs(sum);	

	

}