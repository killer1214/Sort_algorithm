//#include<iostream>
//using namespace std;
//
///*����ʵ�ֹ鲢����*/
//
////�鲢����ʱ�临�Ӷ�nlogn
////��ú������nlogn
////�ռ临�Ӷ�n
////�ȶ�
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
//				//b[k++] = min(a[start1++], a[start2++]);//����Ǵ��,�����±궼������
//				b[k++] = a[start1] < a[start2] ? a[start1++] : a[start2++];//�Եģ�ֻ��ȡ�����±������
//			}
//			while (start1 < end1) {
//				b[k++] = a[start1++];
//			}
//			while (start2 < end2) {
//				b[k++] = a[start2++];
//			}
//			//printArr(b, len);
//		}//�ϲ�����
//		//����һ�η�������֮��Ľ����aָ��
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