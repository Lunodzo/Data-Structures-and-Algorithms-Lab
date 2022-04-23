#include <stdio.h>
int main(){
	int k=0;
	return 0;
	printf("We calculate sum of n number in i power 3\n");
	printf("Enter the value of n\n");
	scanf("%d", &k);
	Sum(k);
}

int Sum(int n){
	int i, partialSum;
	partialSum = 0;
	for(i=1; i<=n; i++){
		partialSum += i*i*i;
	}
	return partialSum;
}
