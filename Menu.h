#ifndef MENU_H
#define MENU_H

#include <iostream>
#include "fstream"

void show_main_menu()
{
	std::cout << "Главное меню:" << std::endl;
	std::cout << "0. Выход из программы." << std::endl;
	std::cout << "1. Загрузить список транспортных средств из файла." << std::endl;
	std::cout << "2. Сохранить список транспортных средств в файл." << std::endl;
	std::cout << "3. Добавить транспортное средство." << std::endl;
	std::cout << "4. Удалить транспорное средство." << std::endl;
	std::cout << "5. Вывод списка транспортных средств на экран." << std::endl;
	std::cout << "6. Поиск транспортного средства." << std::endl;
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
		std::cout << "Введен не корректный пункт меню";
		break;
	}
}

void show_menu() {
	int point=-98;

	while (point != 0) {
		show_main_menu();

		std::cout << "Введите номер пункта меню: ";
		std::cin >> point;

		routing(point);
	}
}
#endif