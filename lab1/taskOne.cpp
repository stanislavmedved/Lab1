/*
�) ����� main() � ������������ �������� �� ������� � �������� ������������ � � �++ ���
��������� �������(������ ������������ ������������� ����� � ���� �������) :
	1) strlen - string::length
	2) strcpy - ��� ������� (����� a=b)
	3) strcmp - �� ����� �������
	4) strcat - someString.append
	5) someString[index] - someString.at(index)
	6) �� ����� ������� ������� (�������� ������������ strcat/ctrncat) - push_back
	7) �� ����� ������� - pop_back
	������� ����� �� ����� ������� ������� � ���������� ������� �����.������ ? � ��������� �������
	������� ����� � � � �++.

	������ � C - ������ ��������� char � null-������ � ���������
	������ � C++ - ������ ������ String � ������������ �������

	�) ������ �������� ��������� �� �++, ������� ����� ����������� ����� � ���������� ������� �
	�������� ������������� ������.������ ��������� ������ ������� ������� � ��������������
	�����.
	NB: ����������� ������ ���������� <string>.
*/	

#include "taskOne.h"
#include <string>


// :D
extern "C"
{
	int printf(const char* format, ...);
}
//������ � ���������, ������� ���� ������
const std::string badCharacters = "( ) ` ~ ! @ # $ % ^ & * - + = | \\ { } [ ] : ; \" ' < > , . ? / _ � \n";

void taskOne() {
	char inputString[8192]; //����� �����

	//��������� ������
	printf("������� ������:\n");
	fgets(inputString, _countof(inputString), stdin);

	//�������������� ������ C � String
	std::string unfilteredString(inputString);

	//�������������
	std::string filteredString = "";
	for (int i = 0; i < unfilteredString.length(); i++) {
		if (!checkForBadSymbol(unfilteredString.at(i))) {
			filteredString += unfilteredString.at(i);
		}
	}

	//������������� ��������������� ������
	std::string sortedString = sortString(filteredString);

	//�������
	printf("��������������� ������:\n");
	printf(sortedString.c_str());
	printf("\n\n");
}

//����������, �������� �� ������ ������ (��������� ����������)
bool checkForBadSymbol(char testedChar) {
	//���������� ������ � ������ ��������� ������� badSymbols
	for (int i = 0; i < badCharacters.length(); i++) {
		if (testedChar == badCharacters[i])
			return true;
	}
	return false;
}
//��������� ������� ������, ��������� ���������� ���������
std::string sortString(std::string s) {
	std::string sortedString = s;
	bool swapped;

	for (int i = 0; i < sortedString.length(); i++) {
		swapped = false;

		for (int j = 0; j < sortedString.length() - i - 1; j++) {
			if (sortedString.at(j) < sortedString.at(j + 1)) continue;

			char buf = sortedString.at(j);
			sortedString.at(j) = sortedString.at(j + 1);
			sortedString.at(j + 1) = buf;
			swapped = true;
		}
		if (!swapped) break;
	}

	return sortedString;
}