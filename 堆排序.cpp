//#include<iostream>
//using namespace std;
//
///*������
//ʱ�临�Ӷ�nlogn
//��������nlogn
//�ռ临�Ӷ�1
//���ȶ�*/
//
//void printArr(int arr[], int len)
//{
//	for (int i = 0; i < len; i++) {
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//}
//
//template<typename T>
//void heapify(T arr[], int i, int len)
//{
///*���Ѻ�ά���ѣ�ά��i�ڵ㣬�Ƚ�������������֮������ֵ
//���滻
//����������滻�����Ŀ��ڵ����Ϊ�滻���±�*/
//	int target = i;
//	int lson = target * 2 + 1;
//	int rson = target * 2 + 2;
//	
//	if (lson < len && arr[target] < arr[lson])
//		target = lson;
//	if (rson < len && arr[target] < arr[rson])
//		target = rson;
//	if (target != i) {
//		swap(arr[target], arr[i]);
//		heapify(arr, target, len);//����ά���滻�Ľڵ�
//	}
//}
//
//template<typename T>
//void heap_sort(T arr[], int n)
//{
//	//����
//	for (int i = n / 2 - 1; i >= 0; i--) {
//		heapify(arr, i, n);
//	}
//	//printArr(arr, n);
//	//����
//	for (int i = n - 1; i >= 0; i--) {
//		swap(arr[0], arr[i]);
//
//		//cout << "��" << n - i << "�ˣ�" << endl;
//		//printArr(arr, n);
//
//		heapify(arr, 0, i);
//	}
//}
//
//void test01()
//{
//	int arr[9] = { 1,2,3,4,5,6,7,8,9 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	printArr(arr, len);
//
//	heap_sort(arr, len);
//	//printArr(arr, len);
//}
//
//int main()
//{
//	test01();
//	return 0;
//}