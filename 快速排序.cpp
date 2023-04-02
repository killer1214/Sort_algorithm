//#include<iostream>
//using namespace std;
//
//
///*时间复杂度nlogn，最好也是
//* 最坏是n^2
//* 空间复杂度logn
//* 不稳定
//*/
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
//void Quick_sort(int arr[],int left,int right)
//{
//	if (left >= right)//不需要排序直接返回
//		return;
//	static int len = right+1;
//	int i = left, j = right;
//	int pivot = arr[left];
//	while (i < j) {
//		//从右向左找到比pivot小的数字放入左端
//		while (i<j && arr[j]>pivot) {
//			j--;
//		}
//		if (i < j) {
//			arr[i++] = arr[j];
//		}
//		//从左向右找到比pivot大的数字放右边
//		while (i < j && arr[i] < pivot) {
//			i++;
//		}
//		if (i < j) {
//			arr[j] = arr[i];
//		}
//		//直到左右下标重合，将pivot放入该位置
//		if (i >= j) {
//			arr[i] = pivot;
//		}
//		//cout << "pivot = " << pivot << endl;
//		//cout << "Arr : " << endl;
//		//printArr(arr, len);
//	}
//	Quick_sort(arr, left, i - 1);//左半排序
//	Quick_sort(arr, i + 1, right);//右半排序
//}
//
//void test01()
//{
//	int arr[] = { 5,3,6,7,8,2,6,8,9,4,10,15,26 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	printArr(arr,len);
//
//	Quick_sort(arr, 0, len-1);
//	printArr(arr,len);
//}
//
//int main()
//{
//	test01();
//	return 0;
//}