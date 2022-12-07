#include <iostream>
using namespace std;
int main() {
#pragma region s = 1 +2 +n
	//int n, s = 0,i = 1;
	//cout << "Enter the number: ";
	//cin >>n;
	///*for (int i = 0; i <= n;i++ ) {
	//	s = s + i;
	//	cout << s  << endl;
	//}*/
	//while (i <= n) {
	//	s = s + i;
	//	i++;
	//}
	//cout << "Tong so S = 1 + 2 + ... +n = "<<s;
	//return 0;
#pragma endregion
		
#pragma region s = 1 ^ 2 + n ^ 2
	/*int n, s = 0;
	cout << "Enter the number: ";
	cin >> n;
	for (int i = 0; i <= n; i++)
		s = s + i*i;
		cout << s << endl;*/
	
#pragma endregion
		
#pragma region 1+1/2+1/n
	/*float s = 0, n, i;
	cout << "Enter the number: ";
	cin >> n;
	for (i = 1; i <= n; i++) {
		s = 1.0 / i;
		cout << s << endl;
	}*/

#pragma endregion

#pragma region s = 1*2*3*n
	int n, s = 1;
	cout << "Enter the number: ";
	cin >> n;
	for (int i = 1; i <= n; i++){
		s = s * i;
	}		
		cout << s;
#pragma endregion	
}
