// bai19-songuyento.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
/// <sumary>
/// ham kiem tra so nguyen to hay khong
/// </summary>
/// <param name= "s">so can kiem tra</param>
/// retunrn>
/// true la so nguyen to
/// false khong phai so nguyen to
/// </retunrn>
bool kiemtraSNT(int s) {
	int dem = 0;
	for (int i = 1; i <= s; i++)
	{
		if (s % i == 0)
		{
			dem++;
		}
	}
	if (dem == 2) {
		return true;
	}
	else {
		return false;
	}
}

int main()
{
	cout << "KIEM TRA SO CO PHAI SO NGUYEN TO KHONG !\n";

	int so;
	cout << "nhap so: "; cin >> so;


	for (int m = 1; m <= so; m++)
	{
		if (kiemtraSNT(m) == true)  cout << m << " ";
	}
	return 0;
}