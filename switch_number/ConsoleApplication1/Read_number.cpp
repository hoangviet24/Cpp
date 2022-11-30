#include <iostream>
using namespace std;

int main() {
	int n, t,c,dv;
	cout << "Input a: ";
	cin >> n;
	t = n / 100; 
	c = (n / 10) % 10;
	dv = (n % 10) % 10;
	if (c == 0 || dv == 0) {
		switch (t) {
		case 1:cout << "mot tram"; break;
		case 2:cout << "hai tram"; break;
		case 3:cout << "ba tram"; break;
		case 4:cout << "bon tram"; break;
		case 5:cout << "nam tram"; break;
		case 6:cout << "sau tram"; break;
		case 7:cout << "bay tram"; break;
		case 8:cout << "tam tram"; break;
		case 9:cout << "chin tram"; break;
		}
	}
	if (t == 0) {
		cout << "Khong tram ";
	}
	if (t !=0){
		switch (t) {
		case 1:cout << "mot tram "; break;
		case 2:cout << "hai tram "; break;
		case 3:cout << "ba tram "; break;
		case 4:cout << "bon tram "; break;
		case 5:cout << "nam tram "; break;
		case 6:cout << "sau tram "; break;
		case 7:cout << "bay tram "; break;
		case 8:cout << "tam tram "; break;
		case 9:cout << "chin tram "; break;
		}
	}
	if (c != 0) {
		switch (c) {
		case 1:cout << "muoi "; break;
		case 2:cout << "hai muoi "; break;
		case 3:cout << "ba muoi "; break;
		case 4:cout << "bon muoi "; break;
		case 5:cout << "nam muoi "; break;
		case 6:cout << "sau muoi "; break;
		case 7:cout << "bay muoi "; break;
		case 8:cout << "tam muoi "; break;
		case 9:cout << "chin muoi "; break;
		}
	}
	if (dv != 0) {
		switch (dv) {
		case 1:cout << "mot"; break;
		case 2:cout << "hai"; break;
		case 3:cout << "ba "; break;
		case 4:cout << "bon "; break;
		case 5:cout << "nam "; break;
		case 6:cout << "sau "; break;
		case 7:cout << "bay "; break;
		case 8:cout << "tam "; break;
		case 9:cout << "chin "; break;
		}
	}
	
	return 0;
}