#include <iostream>
#include <Windows.h>
#include<string>
#include<fstream>

//���� ����� � ������ �������� �����. ϳ���������, ������ ���� � �����
//���������� �����, �� ����������� ������, �������� �� ���������.
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    char letter;
    int count = 0;
    string word;
    ifstream file("text.txt"); 
    cout << "������ �����: ";
    cin >> letter;
    while (file >> word) {
        if (word[0] == letter) {
            count++;
        }
    }
    file.close();
    cout << "ʳ������ ���, �� ����������� �� ����� " << letter << ": " << count << endl;
    return 0;
}
