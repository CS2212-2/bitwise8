#include <iostream>
#include <string>
#include <sstream>
#include <bitset>
#include <stdio.h>
using namespace std;

const int Max = 8*sizeof(int);

bool isPalindrome(int n)
{
	bool palindrome = true;
	bitset<Max> b = n;
	for(int i = 0; i < Max/2 - 1; i++) {
		if(b[i] ^ b[Max-1-i]) {
			palindrome = false;
			break;
		}
	}
	return palindrome;
}

int main()
{
	int myvariable;

	printf("Enter a number:");
		scanf("%d", &myvariable);
		printf("Output is %s", isPalindrome(myvariable)?"true":"false");


	return 0;
}
