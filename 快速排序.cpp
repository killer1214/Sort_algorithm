//#include<iostream>
//using namespace std;
//
//
///*ʱ�临�Ӷ�nlogn�����Ҳ��
//* ���n^2
//* �ռ临�Ӷ�logn
//* ���ȶ�
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
//	if (left >= right)//����Ҫ����ֱ�ӷ���
//		return;
//	static int len = right+1;
//	int i = left, j = right;
//	int pivot = arr[left];
//	while (i < j) {
//		//���������ҵ���pivotС�����ַ������
//		while (i<j && arr[j]>pivot) {
//			j--;
//		}
//		if (i < j) {
//			arr[i++] = arr[j];
//		}
//		//���������ҵ���pivot������ַ��ұ�
//		while (i < j && arr[i] < pivot) {
//			i++;
//		}
//		if (i < j) {
//			arr[j] = arr[i];
//		}
//		//ֱ�������±��غϣ���pivot�����λ��
//		if (i >= j) {
//			arr[i] = pivot;
//		}
//		//cout << "pivot = " << pivot << endl;
//		//cout << "Arr : " << endl;
//		//printArr(arr, len);
//	}
//	Quick_sort(arr, left, i - 1);//�������
//	Quick_sort(arr, i + 1, right);//�Ұ�����
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