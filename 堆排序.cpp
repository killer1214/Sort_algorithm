//#include<iostream>
//using namespace std;
//
///*堆排序
//时间复杂度nlogn
//最好最坏都是nlogn
//空间复杂度1
//不稳定*/
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
///*建堆和维护堆，维护i节点，比较他与两个孩子之间的最大值
//并替换
//如果进行了替换，则对目标节点更新为替换的下标*/
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
//		heapify(arr, target, len);//更新维护替换的节点
//	}
//}
//
//template<typename T>
//void heap_sort(T arr[], int n)
//{
//	//建堆
//	for (int i = n / 2 - 1; i >= 0; i--) {
//		heapify(arr, i, n);
//	}
//	//printArr(arr, n);
//	//排序
//	for (int i = n - 1; i >= 0; i--) {
//		swap(arr[0], arr[i]);
//
//		//cout << "第" << n - i << "趟：" << endl;
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