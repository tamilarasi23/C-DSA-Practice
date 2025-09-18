#include<stdio.h>

struct Point {
    int x, y;
};

void foo(struct Point *p, int n) {
    for (int i = 0; i < n; i++) {
        	printf("%d %d\n", (*p).x, (*p).y);
   		p++;
	}
}

int main() {
	struct Point arr[5] = {{1,2},{3,4},{5,6},{7,8},{9,10}};
	foo(arr,5);
	return 0;
}
