#include<iostream>
using namespace std;
int main() {
	const short int size = 100;
	const  int hight = 200;
	int nums[size];
	for (int i = 0; i < size; i++)nums[i] = 1 + rand() % hight;
	for (int i = 0; i < size; i++) {
		int min = i;
		for (int j = i + 1; j < size; j++) {
			if (nums[j] < nums[min])min = j;
		}
		int t;
		t = nums[i];
		nums[i] = nums[min];
		nums[min] = t;
	}
	for (int a = 0; a < size; a++)cout << nums[a] << " ";
	return 0;
}