#include<stdio.h>
#include<stdlib.h>
void BubbleSort(int arr[],int size){
	//ÿ������С�ķ�ʽ��ʵ��
	//bound ��ʾ�߽�
	//[0, bound] ����������
	//[bound, size] ����������
	//��һ��ѭ��, �� size ����СԪ��;
	for (int bound = 0; bound < size; bound++){
		//�ڶ���ѭ��,�������ҵ����˱Ƚ��е���СԪ��
		for (int cur = size - 1; cur > bound; cur--){
			if(arr[cur - 1] > arr[cur]){
				//˵����������������,�ͽ���Ԫ��
				int tmp = arr[cur - 1];
				arr[cur - 1] = arr[cur];
				arr[cur] = tmp;
			}
		}
	}
}
int main(){
	int arr[] = { 1, 9, 2, 7 };
	int size = sizeof(arr) / sizeof(arr[0]);
	BubbleSort(arr, size);
	for (int i = 0; i < size; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}
