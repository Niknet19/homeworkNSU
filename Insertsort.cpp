#include<iostream>
using namespace std;
int main() {
	const int n = 100;
	int nums[n];
	int t=0;
	for (int a = 0; a < n; a++)nums[a] = rand() % 1001;;
	for (int i = 1; i < n; i++)
		for (int j = i; j > 0; j--) {
			if (nums[j] < nums[j - 1]){
				t = nums[j];
				nums[j] = nums[j - 1];
				nums[j - 1] = t;
			};
		};
		for (int a = 0; a < n; a++)cout << nums[a]<<" ";
	return 0;
}