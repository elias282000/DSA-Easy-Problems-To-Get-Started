#include <bits/stdc++.h>

using namespace std;

#define fastio() ios::sync_with_stdio(0); cin.tie(0);

int main(){
	fastio();

	int star;
	cin >> star;
	string x = "";
	for (int i = 1; i <= star; i++){
		x = x + "*";
		cout << x << "\n";
	}
	return 0;
}
