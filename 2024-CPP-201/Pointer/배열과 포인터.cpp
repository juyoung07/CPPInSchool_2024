#include <stdio.h>

int main(void) {
	int arr[4];
	char str[4];

	// 4바이트 차이 (x86으로 설정하기)
	printf("%d %d \n", &arr[0], &arr[1]);

	// 4바이트 차이 (위와 결과가 동일)
	printf("%d %d", arr, arr+1);
}