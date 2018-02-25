#include <iostream>

int main() {
	int s[]{9,6,4,2,3,5,7,0,1};//<---
	const int sizea = (sizeof(s) / 4) + 1;
	int sa[sizea]{};
	int a = 0, zero = 0, num = 0;

	for (int j = 0; j < sizea; j++) {
		for (int i = 0; i < sizea; i++)
			if (s[i] == a) sa[j] = s[i];
		if (sa[j] == 0) 
			zero++;
		if (zero == 2) {
			num = j;
			break;
		}
		a++;
	}
	std::cout << num << std::endl;

	system("pause");
	return 0;
}
