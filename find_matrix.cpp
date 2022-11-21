#include <iostream>
#include <vector>
using namespace std;

int main(){

	vector <int> V;
	int n, m, value, find;
	bool flag = false;
	cin>>n;
	cin>>m;

	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			cin>>value;
			V.push_back(value);
		}
	}
	cin>>find;
	for (int i = 0; i < V.size(); i++){
		if ( find == V[i]){
			flag = true;
			
		}
	}

	if (flag){
		cout<<"will not take number";
	}else{
		cout<<"will take number";
	}

}