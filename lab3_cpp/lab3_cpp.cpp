#include <pch.h>
#include <iostream>

using namespace std;

int main() {
	char s1[6] = { 'r','t','k','f','k' };
	int count = 0;
	for (int i = 0; i < 6; i++) {
		if ((s1[i] == 'k') || (s1[i] == 't') || (s1[i] == 'r'))
		{
			count++;
		}
	}
	cout << count;
}