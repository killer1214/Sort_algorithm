//#include<iostream>
//using namespace std;
//#include<vector>
//
//void printVector(vector<int>& vec)
//{
//	for (vector<int>::iterator it = vec.begin(); it != vec.end(); it++) {
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void shell_sort(vector<int>& vec)
//{
//	for (int inc = vec.size() / 2; inc > 0; inc /= 2) {
//		//以增量inc进行插入排序，注意这里不是先进行一个分组插入排序再进行下一个分组
//		//而是从inc最为起始位置，不断向后遍历数据进行对应分组插入排序
//		for (int i = inc; i < vec.size(); i++) {
//			for (int j = i; j >= inc && vec[j] < vec[j - inc]; j -= inc) {
//				swap(vec[j], vec[j - inc]);
//			}
//		}
//		//cout << "inc = " << inc << endl;
//		//printVector(vec);
//	}
//}
//
//void test01()
//{
//	vector<int> vec = { 9,8,7,6,5,4,3,2,1 };
//	printVector(vec);
//	shell_sort(vec);
//	printVector(vec);
//}
//
//int main()
//{
//	test01();
//	return 0;
//}