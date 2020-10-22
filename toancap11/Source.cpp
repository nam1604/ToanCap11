#include <iostream>;
using namespace std;

int main() {
	
	cout << "\nHello word!!";
	cout << "\nHello word!!adasdaafasgasga";
	//1.0.0
	int a, b;
	cout << "\nNhap vao lan luot 2 so a , b :";
	cin >> a;
	cin >> b;
	
	int tong,hieu;
	float nhan,chia;

	tong = a + b;
	hieu = a - b;
	nhan = a * b;
	chia = float(a / b);

	cout << "Tong :" << tong << ",hieu" << hieu << ",nhan" << nhan << ",chia" << chia;

	
}