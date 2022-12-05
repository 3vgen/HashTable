

#include <iostream>
using namespace std;
//class HashTable
//{
//    static const int default_size = 8; // начальный размер нашей таблицы
//    constexpr static const double rehash_size = 0.75; // коэффициент, при котором произойдет увеличение таблицы
//    struct Node
//    {
//        string value;
//        bool state; // если значение флага state = false, значит элемент массива был удален (deleted)
//        Node(const string& value_) : value(value_), state(true) {}
//    };
//    Node** arr; // соответственно в массиве будут хранится структуры Node*
//    int size; // сколько элементов у нас сейчас в массиве (без учета deleted)
//    int buffer_size; // размер самого массива, сколько памяти выделено под хранение нашей таблицы
//    int size_all_non_nullptr; // сколько элементов у нас сейчас в массиве (с учетом deleted)
//public:
//    HashTable() {
//        buffer_size = default_size;
//        size = 0;
//        size_all_non_nullptr = 0;
//        arr = new Node * [buffer_size];
//        for (size_t i = 0; i < buffer_size; i++)
//        {
//            arr[i] = nullptr;
//        }
//
//    }
//    ~HashTable()
//    {
//        for (int i = 0; i < buffer_size; ++i)
//            if (arr[i])
//                delete arr[i];
//        delete[] arr;
//    }
//};
//struct Node // ячейка хеш-таблицы
//{
//    // "N/A" символизирует пустоту поля 
//    string key = "N/A";
//    string value = "N/A";
//
//    bool isEmpty() const // ячейка пустая?
//    {
//        return key == "N/A" && value == "N/A";
//    }
//    void output() // вывести поля ячейки
//    {
//        cout << " " << key << endl;
//        cout << " " << value << endl;
//        cout << "-------------------------" << endl;
//    }
//};
//
//int hashIndex(string key, int hashLen) // хеш-функция
//{ // алгоритм взял из гарвардского видео-курса
//    int sum = 0;
//    for (int i = 0; i < key.length(); i++)
//        sum += key[i];
//    return sum % hashLen;
//}
//
//struct HashTable // хеш-таблица
//{
//    const int startLength = 10; // максимальный размер
//    Node* hashNodes; // массив, что хранит элементы таблицы
//
//    HashTable() // конструктор
//    {
//        hashNodes = new Node[startLength];
//    }
//    ~HashTable() // деструктор
//    {
//        delete[] hashNodes;
//    }
//    void add(Node cell) // добавить новый элемент
//    {
//        int index = hashIndex(cell.key, startLength); // находим его индекс
//
//        // сдвигаемся, если место занято
//        int i;
//        for (i = index; i < startLength && !hashNodes[i].isEmpty(); i++);
//
//        if (!hashNodes[i].isEmpty()) return; // если найденное место не пустое, значит мы дошли до конца 
//
//        hashNodes[i] = cell; // даем значение элементу по найденному индексу
//    }
//    int find(string key) // найти индекс элемента с заданным ключом
//    {
//        int index = hashIndex(key, startLength); // находим его индекс
//
//        for (int i = index; i < startLength; i++) // начинаем сдвигаться с указанного места, 
//            if (hashNodes[i].key == key) // пока не найдем элемент с таким же ключом
//                return i;
//        return -1; // -1 значит, что мы не нашли такой элемент
//    }
//    string ext(string key) // извлечь элемент по заданному ключу (по сути, удалить его)
//    {
//        int index = find(key); // ищем такой элемент в таблице
//        if (index == -1) return "error"; // если не нашли вернуть строку "ошибка"
//        string phoneNo = hashNodes[index].value; // вытаскиваем значение
//
//        hashNodes[index].key = hashNodes[index].value = "N/A"; // "обнуляем" элемент
//
//        return phoneNo;
//    }
//    void output() // вывести не пустые элементы
//    {
//        for (int i = 0; i < startLength; i++)
//            if (!hashNodes[i].isEmpty()) // если элемент не пустой
//            {
//                cout << " i: " << i << endl;
//                hashNodes[i].output();
//            }
//    }
//};
class Item {
	string key;
	string value;
public:
	Item(string &Key, string &Value) {
		key = Key;
		value = Value;
	}
};
class HashTable {
	int startCapacity = 4;
	int currentCapacity;
	int size;
	double loadFactor = 0.75;
	Item* KeyValuePairs;
	Item* Buffer;

public:
	HashTable() {
		currentCapacity = startCapacity;
		KeyValuePairs = new Item[startCapacity];
	}
};
int main()
{
}


