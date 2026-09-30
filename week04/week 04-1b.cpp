// week 04-1b.cpp (SOIT108_Advance_008)
// C++ version
#include <iostream>
#include <algorithm> // Week04
#include <vector> // Week03
using namespace std;
int main()
{
	vector<int> a(10); // Week04
	for (int i=0; i<10; i++){
		cin >> a[i];
	}
	sort(a.begin(), a.end()); // Week
	for (int i=9; i>=0; i--){
		cout << a[i] << ' ';
	}
}
