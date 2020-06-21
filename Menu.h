#ifndef MENU_H
#define MENU_H

#include <iostream>
#include "fstream"

void show_main_menu()
{
	std::cout << "������� ����:" << std::endl;
	std::cout << "0. ����� �� ���������." << std::endl;
	std::cout << "1. ��������� ������ ������������ ������� �� �����." << std::endl;
	std::cout << "2. ��������� ������ ������������ ������� � ����." << std::endl;
	std::cout << "3. �������� ������������ ��������." << std::endl;
	std::cout << "4. ������� ����������� ��������." << std::endl;
	std::cout << "5. ����� ������ ������������ ������� �� �����." << std::endl;
	std::cout << "6. ����� ������������� ��������." << std::endl;
	std::cout << std::endl;
}

void loadData() {
	//std::cout << "YEAH!!!, It's load data";
	std::ifstream file("test_file.txt");
	char buff[100];
	file.getline(buff, 100);
	std::cout << buff;
	file.close();
}

void saveDataToFile() {
	//std::cout << "YEAH!!!, It's save data";
	std::ofstream file_to_write("test_file.txt");
	char str[100];
	std::cin >> str;
	file_to_write << str;
	file_to_write.close();
}

void addData() {
	std::cout << "YEAH!!!, It's add data";
}

void removeData() {
	std::cout << "YEAH!!!, It's remove data";
}

void showDataInformation() {
	std::cout << "YEAH!!!, It's show data";
}

void searchData() {
	std::cout << "YEAH!!!, It's search data";
}

void routing(int point) {
	switch (point) {
	case 1:
		loadData();
		break;
	case 2:
		saveDataToFile();
		break;
	case 3:
		addData();
		break;
	case 4:
		removeData();
		break;
	case 5:
		showDataInformation();
		break;
	case 6:
		searchData();
		break;
	default:
		std::cout << "������ �� ���������� ����� ����";
		break;
	}
}

void show_menu() {
	int point=-98;

	while (point != 0) {
		show_main_menu();

		std::cout << "������� ����� ������ ����: ";
		std::cin >> point;

		routing(point);
	}
}
#endif