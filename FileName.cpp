#include<iostream>
#include<math.h>
#include<Windows.h>
using namespace std;
int main()
{

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	
	int arra1[2], arra2[2], arrb1[2], arrb2[2], arrc1[2], arrc2[2], arrd1[2], arrd2[2];
	float ab, bc,dc,ad, ab1, bc1, dc1,ad1, aa,bb,cc,dd;
	
	cout << "¬вед≥ть точку ј1  "<<endl;
	cin >> arra1[0];
	cin >> arra1[1];
    cout << "¬вед≥ть точку ј2  "<<endl;
	cin >> arra2[0];
	cin >> arra2[1];
	cout << "¬вед≥ть точку B1  "<<endl;
	cin >> arrb1[0];
	cin >> arrb1[1];
	cout << "¬вед≥ть точку B2  " << endl;
	cin >> arrb2[0];
	cin >> arrb2[1];
	cout << "¬вед≥ть точку C1  " << endl;
	cin >> arrc1[0];
	cin >> arrc1[1];
	cout << "¬вед≥ть точку C2  " << endl;
	cin >> arrc2[0];
	cin >> arrc2[1];
	cout << "¬вед≥ть точку D1  " << endl;
	cin >> arrd1[0];
	cin >> arrd1[1];
	cout << "¬вед≥ть точку D2  " << endl;
	cin >> arrd2[0];
	cin >> arrd2[1];
	
	ab = abs(sqrt(((arrb1[0] - arra1[0]) * (arrb1[0] - arra1[0])) + ((arrb1[1] - arra1[1])*(arrb1[1] - arra1[1]))));
	bc = abs(sqrt(((arrc1[0] - arrb1[0])) * ((arrc1[0] - arrb1[0])) + ((arrc1[1] - arrb1[1]) * (arrc1[1] - arrb1[1]))));
	dc = abs(sqrt(((arrc1[0] - arrd1[0]) * (arrc1[0] - arrd1[0])) + ((arrc1[1] - arrd1[1]) * (arrc1[1] - arrd1[1]))));
	ad = abs(sqrt(((arrd1[0]- arra1[0]) * (arrd1[0] - arra1[0])) + ((arrd1[1] - arra1[1]) * (arrd1[1] - arra1[1]))));
	ab1 = abs(sqrt(((arrb2[0] - arra2[0]) * (arrb2[0] - arra2[0])) + ((arrb2[1] - arra2[1]) * (arrb2[1] - arra2[1]))));
	bc1 = abs(sqrt(((arrc2[0] - arrb2[0]) * (arrc2[0] - arrb2[0])) + ((arrc2[1] - arrb2[1]) * (arrc2[1] - arrb2[1]))));
	dc1 = abs(sqrt(((arrc2[0] - arrd2[0]) * (arrc2[0] - arrd2[0])) + ((arrc2[1] - arrd2[1]) * (arrc2[1] - arrd2[1]))));
	ad1 = abs(sqrt(((arrd2[0] - arra2[0]) * (arrd2[0] - arra2[0])) + ((arrd2[1] - arra2[1]) * (arrd2[1] - arra2[1]))));
	aa= abs(sqrt(((arra2[0] - arra1[0]) * (arra2[0] - arra1[0])) + ((arra2[1] - arra1[1]) * (arra2[1] - arra1[1]))));
	bb = abs(sqrt(((arrb2[0] - arrb1[0]) * (arrb2[0] - arrb1[0])) + ((arrb2[1] - arrb1[1]) * (arrb2[1] - arrb1[1]))));
	cc = abs(sqrt(((arrc2[0] - arrc1[0]) * (arrc2[0] - arrc1[0])) + ((arrc2[1] - arrc1[1]) * (arrc2[1] - arrc1[1]))));
	dd = abs(sqrt(((arrd2[0] - arrd1[0]) * (arrd2[0] - arrd1[0])) + ((arrd2[1] - arrd1[1]) * (arrd2[1] - arrd1[1]))));
	
	
	if (ab != dc || ad != bc || ab1 != dc1 || ad1 != bc1 || ad != ad1 || bc != bc1 || ab != ab1 || dc != dc1 || aa != bb || aa != cc || aa != dd)
		cout << "ѕомилка" << endl;
	else
		cout << ab + bc + ad + dc + ab1 + ad1 + bc1 + dc1 + aa + bb + cc + dd;
	

	return 0;
}

