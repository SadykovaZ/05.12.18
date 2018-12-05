#include <iostream>
#include <vector>
#include <list>
#include <map>
#include <algorithm>
#include <iterator>
#include <ctime>
#include <cmath>
using namespace std;
//generate_n(it, size, func);
//void bubbleSort(vector<int>&v)
//{
//	for (size_t i = 1; i < v.size(); i++)
//	{
//		for (size_t j = 1; j < v.size(); j++)
//		{
//			if (v[j] < v[j - 1])
//			{
//				swap(v[j], v[j - 1]);
//				
//			}
//
//		}
//
//	}
//	for (size_t i = 0; i < v.size(); i++)
//	{
//		cout << v[i] << endl;
//	}
//}
//void sort1(vector<int>&v)
//{
//	sort(rbegin(v), rend(v));
//	ostream_iterator<int> os(cout, "\n");
//	copy(begin(v), end(v), os);
//}
void main()
{
	/*int size = 10;
	vector<vector<int>> arr(size);
	int y = 1;
	for_each(begin(arr), end(arr), [size, &y](auto&i) {
		i.resize(size);
		int x = 1;

		generate_n(begin(i), size, [&x, &y]() {

			return y * x++;
		});
		ostream_iterator<int> os(cout, "\t");
		copy(begin(i), end(i), os);
		y++;
		cout << endl;
	});*/
	/*srand(time(0));
	int size = 10;
	vector<int> v(size);
	generate_n(begin(v), v.size(), []() {

		return rand() % 1000;
	});
	auto v2 = v;
	bubbleSort(v);
	cout << endl;
	sort1(v2);*/

	/*vector<double> v(10);

	generate_n(begin(v), v.size(), []() {

		return (double)-50 + rand() % 100;
	});
	ostream_iterator<double> os(cout, " ");
	copy(begin(v), end(v), os);
	double x = v.at(0);
	double y = v.at(9);
	double res=sqrt(x*y);
	cout << endl;
	cout << res;
	cout << endl;
	for_each(begin(v), end(v), [&res](auto&i)
	{
		i += res;
	});

	copy(begin(v), end(v), os);*/

	srand(time(NULL));
	int size = 10;
	vector<double>	v(size);

	generate_n(begin(v), v.size(), []() {
		return  rand() % 100 - 50;
	});

	/*double x = v.front();
	double y = v.back();
	double res = sqrt(x*1. * y*1.);
	copy(begin(v), end(v), ostream_iterator<double>(cout, " "));
	cout << endl;
	cout << res;
	cout << endl;

	for_each(begin(v), end(v), [&res](auto&i) {
		i += res;
	});

	copy(begin(v), end(v), ostream_iterator<double>(cout, " "));*/
	cout << endl;
	copy(begin(v), end(v), ostream_iterator<double>(cout, " "));
	double res1=0 ;
	for_each(begin(v), end(v), [&res1, &v](auto&i) {
		if (i < 0 && res1 == 0)
		{
			res1 = i;
		}		
	});
	res1 += v.at(5);
	cout << endl;
	cout << res1;
	for_each(begin(v), end(v), [&res1](auto&i) {

		i /= res1;

	});
	cout << endl;
	copy(begin(v), end(v), ostream_iterator<double>(cout, " "));


	system("pause");
}