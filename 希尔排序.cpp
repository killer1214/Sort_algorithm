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
//		//������inc���в�������ע�����ﲻ���Ƚ���һ��������������ٽ�����һ������
//		//���Ǵ�inc��Ϊ��ʼλ�ã��������������ݽ��ж�Ӧ�����������
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