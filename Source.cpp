#include <iostream>
using namespace std;
int main() {
	//17
	/*float n,n1,sr;
	int sum = 0;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> n1;
		sum = sum + n1;
	}
	sr = sum / n;
	cout <<sr<< endl;*/
	//18
	/*int n;
	cin >> n;
	int sum = 0;
	for (int i = 1; i <= n; i++) {
		if (i % 2 != 0 and i % 3 != 0 and i%5 !=0) {
			sum++;
		}
	}
	cout << sum << endl;*/
	//24
	/*__int64 sum = 0;
	__int64 proizv = 1;
	for (int i = 1; i <= 10;i++) {
		sum = sum + i;
		proizv = proizv * sum;
	}
	cout << proizv;*/
	//25
	/*__int64 a,n,p=1;
	cin >> a >> n;
	for (int i = 0; i <= n-1; i++) {
		p = p * (a+i);
	}
	cout << p;*/
	//29
	/*int i = 1;
	 do{
		i++;
		cout << i << endl;
	 }while(i<100);*/
	//30
	/*int i = 0;
	do {
		i++;
		if (i % 2 != 0) {
			cout << i << endl;
		}
	} while (i < 99);*/
	return 0;
}