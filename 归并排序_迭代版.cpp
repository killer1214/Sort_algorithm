//#include<iostream>
//using namespace std;
//
///*迭代实现归并排序*/
//
////归并排序时间复杂度nlogn
////最好和最坏都是nlogn
////空间复杂度n
////稳定
//
//void printArr(int arr[], int len)
//{
//	//int len = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0; i < len; i++) {
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//}
//
//template<typename T>
//void merge_sort(T arr[], int len)
//{
//	T* a = arr;
//	T* b = new T[len];
//	for (int seg = 1; seg < len; seg += seg) {
//		for (int start = 0; start < len; start += seg * 2) {
//			int low = start, mid = min(start + seg, len), high = min(start + seg + seg, len);
//			int k = low;
//			int start1 = low, end1 = mid;
//			int start2 = mid, end2 = high;
//			while (start1 < end1 && start2 < end2) {
//				//b[k++] = min(a[start1++], a[start2++]);//这个是错的,两个下标都会自增
//				b[k++] = a[start1] < a[start2] ? a[start1++] : a[start2++];//对的，只会取到的下标会自增
//			}
//			while (start1 < end1) {
//				b[k++] = a[start1++];
//			}
//			while (start2 < end2) {
//				b[k++] = a[start2++];
//			}
//			//printArr(b, len);
//		}//合并分组
//		//将第一次分组排序之后的结果由a指向
//		T* temp = a;
//		a = b;
//		b = temp;
//	}
//	//printArr(a, len);
//	if (a != arr) {
//		for (int i = 0; i < len; i++) {
//			b[i] = a[i];
//		}
//		b = a;
//	}
//	//printArr(b, len);
//	delete[] b;
//	//printArr(a, len);
//}
//
//void test01()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	printArr(arr, len);
//	merge_sort(arr, len);
//	printArr(arr, len);
//}
//
//int main()
//{
//	test01();
//	return 0;
//}