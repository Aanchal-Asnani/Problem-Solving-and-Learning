#include<stdio.h>
#include<stdlib.h>

void binarysearch(int a[], int n)
{
	int item , beg , mid, last;
	printf("\nenter the item u wanna search => ");
	scanf("%d",&item);
	last = n-1;
	beg = 0;
	while(beg<=last) {
		mid = (beg+last)/2;
		if(item == a[mid]) {
			printf("\nitem found on %d position  \n",mid+1);
			return;
		}
		else if(item > a[mid]) {
			beg = mid+1;
		}
		else {
			last = mid-1;
		}
	}
	printf("\nitem not found\n");
}
int main() {
	int n,i;
	printf("enter the size of array=>\n");
	scanf("%d",&n);
	int a[n];
	printf("enter the array in ascending order => \n");
	for(i=0;i<n;i++) {
		scanf("%d",&a[i]);
	}
	binarysearch(a,n);
}
