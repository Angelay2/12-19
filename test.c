#include<stdio.h>
#include<stdlib.h>
void BubbleSort(int arr[],int size){
	//每次找最小的方式来实现
	//bound 表示边界
	//[0, bound] 已排序区间
	//[bound, size] 待排序区间
	//第一重循环, 找 size 次最小元素;
	for (int bound = 0; bound < size; bound++){
		//第二重循环,帮我们找到这趟比较中的最小元素
		for (int cur = size - 1; cur > bound; cur--){
			if(arr[cur - 1] > arr[cur]){
				//说明不符合升序排序,就交换元素
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
