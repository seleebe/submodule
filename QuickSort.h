#include <vector>
using namespace std;
void QuickSort(vector<int>& a, int begin, int end) {
	int i, j, d;
	i = begin;
	j = end;
	int mid = a[(begin + end) / 2];
	while (i <= j) {
		while (a[i] < mid) {
			i++;
		}
		while (a[j] > mid) {
			j--;
		}
		if (i <= j) {
			swap(a[i], a[j]);
			i++;
			j--;
		}
	}
	if (i < end) {
		QuickSort(a, i, end);
	}
	if (begin < j) {
		QuickSort(a, begin, j);
	}
}
