/*Given a non-empty array of integers, every element appears twice except for one. Find that single one.

Note:

Your algorithm should have a linear runtime complexity. Could you implement it without using extra memory?

Example 1:

Input: [2,2,1]
Output: 1
Example 2:

Input: [4,1,2,1,2]
Output: 4
Bit Manipulation
Concept

If we take XOR of zero and some bit, it will return that bit
a \oplus 0 = aa?0=a
If we take XOR of two same bits, it will return 0
a \oplus a = 0a?a=0
a \oplus b \oplus a = (a \oplus a) \oplus b = 0 \oplus b = ba?b?a=(a?a)?b=0?b=b
So we can XOR all bits together to find the unique number.
*/
//time=o(n) space=o(1)
#include<stdio.h>
int single(int a[],int n)
{int x=0;
	for(int i=0;i<n;i++)
	{
		x^=a[i];
	}
	return x;
}

main()
{
	int a[1000],n,i;
	printf("enter the size of array");
	scanf("%d",&n);
	printf("enter the elements in array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf(" %d",single(a,n));
}
