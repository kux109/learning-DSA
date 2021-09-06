#include <iostream>
using namespace std;

int main()
{
	for(int i=0;i<10;i++) {
		cout << "i: " << i << ": ";
		for(int j=0;j<i; j++) {
			if (j == 4) {
				break;
			}
			cout << j << " ";
		}
		cout << endl;
	}

	return 0;
}