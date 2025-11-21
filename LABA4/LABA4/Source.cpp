#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>

using namespace std;

int main() {

    setlocale(LC_ALL, "russian");

    std::vector<int> massiv1;
    int numElements1;
    cout << "Введите количество элементов массива 1: ";
    cin >> numElements1;

    cout << "Введите элементы массива 1:" << std::endl;
    for (int i = 0; i < numElements1; ++i) {
        int value1;
        cin >> value1;
        massiv1.push_back(value1); // Добавляем элемент в конец вектора
    }
    std::vector<int> massiv2;
    int numElements2;
    cout << "Введите количество элементов массива 2: ";
    cin >> numElements2;

    cout << "Введите элементы массива 2:" << std::endl;
    for (int i = 0; i < numElements2; ++i) {
        int value2;
        cin >> value2;
        massiv2.push_back(value2); // Добавляем элемент в конец вектора
    }

    int min_val = std::numeric_limits<int>::max();

    for (int x : massiv1) {
        // Ищем элемент x в massiv2
        if (std::find(massiv2.begin(), massiv2.end(), x) == massiv2.end()) {
            // Элемент x не найден в massiv2
            if (x < min_val) {
                min_val = x;
            }
        }
    }

    if (min_val == std::numeric_limits<int>::max()) {
        std::cout << "Все элементы массива1 есть в массиве2." << std::endl;
    }
    else {
        std::cout << "Наименьший элемент из массива1, которого нет в массиве2: " << min_val << std::endl;
    }

    return 0;
}
