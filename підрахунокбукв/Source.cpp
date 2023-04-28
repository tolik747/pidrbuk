#include <iostream>
#include <Windows.h>
#include<string>
#include<fstream>

//Дано текст у вигляді окремого файлу. Підрахувати, скільки разів у тексті
//стрічаються слова, які починаються буквою, введеною із клавіатури.
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    char letter;
    int count = 0;
    string word;
    ifstream file("text.txt"); 
    cout << "Введіть літеру: ";
    cin >> letter;
    while (file >> word) {
        if (word[0] == letter) {
            count++;
        }
    }
    file.close();
    cout << "Кількість слів, що починаються на літеру " << letter << ": " << count << endl;
    return 0;
}
