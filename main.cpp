#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    string surname, name, patronymic;
    cout << "Введите фамилию, имя и отчество, разделенные пробелами: ";
    cin >> surname >> name >> patronymic;
    cout << surname << " " << name[0] << ". " << patronymic[0] << "." << endl;
    return 0;
}
