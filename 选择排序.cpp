//#include<iostream>
//using namespace std;
//#include<vector>
//
//
//void printVector(vector<int>& vec)
//{
//	for (vector<int>::iterator it = vec.begin(); it != vec.end(); it++) {
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
////ѡ������
//template<typename T>
//void selection_sort(vector<T>& vec)
//{
//	for (int i = 0; i < vec.size() - 1; i++) {
//		int min = i;
//		for (int j = i + 1; j < vec.size(); j++) {
//			if (vec[j] < vec[min])//����min�ǵ�ǰ��С�����±�
//				min = j;
//		}
//		//cout << vec[i] << " " << vec[min] << endl;
//		swap(vec[i], vec[min]);
//		//printVector(vec);
//		//cout << endl;
//	}
//}
//
////ð������
////void Bubble_sort(vector<int>& vec)
////{
////	for (int i = 0; i < vec.size()-1; i++) {
////		for (int j = 0; j < vec.size()-1-i; j++) {
////			if (vec[j] > vec[j + 1]) {
////				int temp = vec[j];
////				vec[j] = vec[j + 1];
////				vec[j + 1] = temp;
////			}
////		}
////		printVector(vec);
////	}
////}
//
//void test01()
//{
//	vector<int> vec = { 9,8,7,6,5,4,3,2,1 };
//	printVector(vec);
//	selection_sort(vec);
//	//Bubble_sort(vec);
//	printVector(vec);
//}
//
//int main()
//{
//	test01();
//	return 0;
//}