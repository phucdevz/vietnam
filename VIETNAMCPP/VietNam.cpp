#include <iostream>
#include <string>
#include <fstream>
#include <stdio.h>
#include <conio.h>
#include<ctime>
#include <vector>
#include "windows.h" 
using namespace std;

//Vào trang wed : https://www.ascii-art-generator.org/ để chuyển ảnh sang file .txt


void SetColor(WORD color)
{
	HANDLE hConsoleOutput;
	hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);

	CONSOLE_SCREEN_BUFFER_INFO screen_buffer_info;
	GetConsoleScreenBufferInfo(hConsoleOutput, &screen_buffer_info);

	WORD wAttributes = screen_buffer_info.wAttributes;
	color &= 0x000f;
	wAttributes &= 0xfff0;
	wAttributes |= color;

	SetConsoleTextAttribute(hConsoleOutput, wAttributes);
}


int main()
{
	string ngiu;
	while (true)
	{
	
			cout << "\t\t--Viet Nam Que Huong Ta Dep Lam---" << endl << endl;
			cout << "\t\tI LOVE VIET NAM " << endl;
			Sleep(1000);
			cout << "\t\tI LOVE VIET NAM" << endl; Sleep(1000);
			cout << "\t\tI LOVE VIET NAM" << endl; Sleep(1000);
			cout << "\t\tI LOVE VIET NAM" << endl; Sleep(1000);
			cout << "\t\tI LOVE VIET NAM" << endl; Sleep(1000);
			cout << "\t\tI LOVE VIET NAM" << endl; Sleep(1000);
			cout << "\t\tI LOVE VIET NAM" << endl; Sleep(1000);
			cout << "\t\tI LOVE VIET NAM" << endl; Sleep(1000);
			cout << "\t\tI LOVE VIET NAM" << endl; Sleep(1000);
			cout << "\t\tI LOVE VIET NAM" << endl; Sleep(1000);
			cout << "\t\tI LOVE VIET NAM" << endl << endl;

			vector <int> A;
			A.push_back(7);
			A.push_back(12);
			A.push_back(14);
			A.push_back(10);
			while (true)
			{
				int i = 0;
				SetColor(A.at(i++ % A.size()));

				ifstream file;
				file.open("1.txt", ios_base::in);
				string line;
				while (getline(file, line)) {
					cout << line << endl;
					Sleep(30);
				}
				file.close();

				SetColor(A.at(i++ % A.size()));

			
				ifstream file2;
				file2.open("2.txt", ios_base::in);
				string line2;
				while (getline(file2, line2)) {
					cout << line2 << endl;
					Sleep(30);
				}
				file2.close();
				SetColor(A.at(i++ % A.size()));
				ifstream file3;
				file3.open("3.txt", ios_base::in);
				string line3;
				while (getline(file3, line3)) {
					cout << line3 << endl;
					Sleep(30);
				}
				file3.close();


				SetColor(A.at(i++ % A.size()));
				ifstream file4;
				file4.open("4.txt", ios_base::in);
				string line4;
				while (getline(file4, line4)) {
					cout << line4 << endl;
					Sleep(30);
				}
				file4.close();

				SetColor(A.at(i++ % A.size()));
				ifstream file5;
				file5.open("5.txt", ios_base::in);
				string line5;
				while (getline(file5, line5)) {
					cout << line5 << endl;
					Sleep(30);
				}
				file5.close();

				SetColor(A.at(i++ % A.size()));
				ifstream file6;
				file6.open("6.txt", ios_base::in);
				string line6;
				while (getline(file6, line6)) {
					cout << line6 << endl;
					Sleep(30);
				}
				file6.close();

				SetColor(A.at(i++ % A.size()));
				ifstream file7;
				file7.open("7.txt", ios_base::in);
				string line7;
				while (getline(file7, line7)) {
					cout << line7 << endl;
					Sleep(30);
				}
				file7.close();

				SetColor(A.at(i++ % A.size()));
				ifstream file8;
				file8.open("8.txt", ios_base::in);
				string line8;
				while (getline(file8, line8)) {
					cout << line8 << endl;
					Sleep(30);
				}
				file8.close();

				SetColor(A.at(i++ % A.size()));
				ifstream file9;
				file9.open("9.txt", ios_base::in);
				string line9;
				while (getline(file9, line9)) {
					cout << line9 << endl;
					Sleep(30);
				}
				file9.close();

			}
			_getch();
		}
	
	}

