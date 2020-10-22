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

	cout << "\nTong :" << tong << ",hieu" << hieu << ",nhan" << nhan << ",chia" << chia;

	// 2.0.0
	// chu vi hinh vuong
	int canhHv,chuviHv;
	cout << "\nTinh chu vi hinh vuong, Nhap vao canh a hinh vuong:";
	chuviHv = canhHv * 4;
	cout << "\nket qua =" << chuviHv;
	// chu vi hinh chu nhat
	int daiHCN, rongHCN, chuViHCN;
	cout << "\nTinh chu vi hinh chu nhat, nhap vao chieu dai, chieu rong hinh chu nhat:";
	cin >> daiHCN;
	cin >> rongHCN;
	chuViHCN = (daiHCN + rongHCN) * 2;
	cout << "\nket qua  =" << chuViHCN;
	// chu vi hinh tron
	int duongKinh; float chuViHinhTron;
	cout << "\nTinh chu vi hinh tron, nhap vao chieu dai, chieu rong hinh chu nhat:";
	cin >> daiHCN;
	cin >> rongHCN;


}