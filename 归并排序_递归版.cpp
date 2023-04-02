//#include<iostream>
//using namespace std;
//#include<vector>
//
//void printVector(vector<int>& vec)
//{
//	//for (int i = 0; i < vec.size(); i++) {
//	//	cout << vec[i] << " ";
//	//}
//	for (vector<int>::iterator it = vec.begin(); it != vec.end(); it++) {
//		cout << *it << " ";
//	}
//	cout << endl;
//}
//
//void Merge(vector<int>& Array, int front, int mid, int end)
//{
//	vector<int> Left_Array(Array.begin() + front, Array.begin() + mid + 1);
//	vector<int> Right_Array(Array.begin() + mid + 1, Array.begin() + end + 1);
//
//	int idLeft = 0, idRight = 0;
//
//	Left_Array.insert(Left_Array.end(), numeric_limits<int>::max());
//	Right_Array.insert(Right_Array.end(), numeric_limits<int>::max());
//
//	//cout << front << mid << end << endl;
//	//cout << "Left: ";
//	//printVector(Left_Array);
//	//cout << "Right: ";
//	//printVector(Right_Array);
//	
//
//	for (int i = front; i <= end; i++) {
//		if (Left_Array[idLeft] < Right_Array[idRight]) {
//			Array[i] = Left_Array[idLeft];
//			idLeft++;
//		}
//		else {
//			Array[i] = Right_Array[idRight];
//			idRight++;
//		}
//	}
//	//printVector(Array);
//	//cout << endl;
//}
//
//void Merge_sort(vector<int>& Array, int front, int end)
//{
//	if (front >= end)
//		return;
//	int mid = (front + end) / 2;
//	Merge_sort(Array, front, mid);
//	Merge_sort(Array, mid + 1, end);
//	Merge(Array, front, mid, end);
//	//printVector(Array);
//}
//
//void test01()
//{
//	vector<int> v = { 9,8,7,6,5,4,3,2,1 };
//	printVector(v);
//	Merge_sort(v, 0, v.size()-1);//注意这里是下标
//	printVector(v);
//}
//
//
//int main()
//{
//	test01();
//	return 0;
//}