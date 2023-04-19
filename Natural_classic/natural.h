class Natural {
private:
    unsigned int value; // значение числа
public:
    // конструктор без параметров
    Natural() : value(0) {}

    // конструктор с параметром
    Natural(unsigned int n) : value(n) {}

    // конструктор с параметром - строкой
    Natural(string str) {
        // преобразуем строку в число
        unsigned int n = stoi(str);
        // проверяем, что число является натуральным
        if (n < 0) {
            exit(1);
        }
        // присваиваем значение числа
        value = n;
    }

    // конструктор копий
    Natural(const Natural& other) {
        value = other.value;
    }

    // метод для получения значения числа
    unsigned int get_value() const {
        return value;
    }

    // метод для установки значения числа
    void set_value(unsigned int n) {
        value = n;
    }

    // метод для вывода числа на экран
    void print() const {
        cout << value << endl;
    }

    // Перегрузка оператора присваивания
    Natural& operator=(const Natural& other) {
        if (this != &other) {
            value = other.value;
        }
        return *this;
    }

    // Оператор приведения к типу int
    operator int() const {
        return static_cast<int>(value);
    }

    // перегрузка оператора приведения типа  string
    operator string() const {
        return  to_string(value);
    }

    // Оператор приведения к типу double
    operator double() const {
        return static_cast<double>(value);
    }

    // перегрузка оператора сложения
    Natural operator+(const Natural& other) const {
        return Natural(value + other.value);
    }

    Natural operator+(unsigned int n) const {
        return Natural(value + n);
    }

    friend Natural operator+(unsigned int n, const Natural& num) {
        return num + n;
    }

    // перегрузка оператора вычитания
    Natural operator-(const Natural& other) const {
        if (value < other.value) {
            exit(1);
        }
        return Natural(value - other.value);
    }

    Natural operator-(unsigned int n) const {
        if (value < n) {
            exit(1);
        }
        return Natural(value - n);
    }

    friend Natural operator-(unsigned int n, const Natural& num) {
        if (num.value < n) {
            exit(1);
        }
        return Natural(n - num.value);
    }

    // перегрузка оператора умножения
    Natural operator*(const Natural& other) const {
        return Natural(value * other.value);
    }

    Natural operator*(unsigned int n) const {
        return Natural(value * n);
    }

    friend Natural operator*(unsigned int n, const Natural& num) {
        return num * n;
    }

    // перегрузка оператора деления
    Natural operator/(const Natural& other) const {
        if (other.value == 0) {
            exit(1);
        }
        return Natural(value / other.value);
    }

    Natural operator/(unsigned int n) const {
        if (n == 0) {
            exit(1);
        }
        return Natural(value / n);
    }

    friend Natural operator/(unsigned int n, const Natural& num) {
        if (num.value == 0) {
            exit(1);
        }
        return Natural(n / num.value);
    }

    // перегрузка оператора остатка от деления
    Natural operator%(const Natural& other) const {
        if (other.value == 0) {
            exit(1);
        }
        return Natural(value % other.value);
    }

    Natural operator%(unsigned int n) const {
        if (n == 0) {
            exit(1);
        }
        return Natural(value % n);
    }

    friend Natural operator%(unsigned int n, const Natural& num) {
        if (num.value == 0) {
            exit(1);
        }
        return Natural(n % num.value);
    }

    Natural operator-() const {
        throw  invalid_argument("Attempt to negate a natural number");
    }


    // Перегрузка операторов сравнения
    bool operator<(const Natural& other) const {
        return value < other.value;
    }

    bool operator<(unsigned int n) const {
        return value < n;
    }

    friend bool operator<(unsigned int n, const Natural& num) {
        return n < num.value;
    }

    bool operator>(const Natural& other) const {
        return value > other.value;
    }

    bool operator>(unsigned int n) const {
        return value > n;
    }

    friend bool operator>(unsigned int n, const Natural& num) {
        return n > num.value;
    }

    bool operator<=(const Natural& other) const {
        return value <= other.value;
    }

    bool operator<=(unsigned int n) const {
        return value <= n;
    }

    friend bool operator<=(unsigned int n, const Natural& num) {
        return n <= num.value;
    }

    bool operator>=(const Natural& other) const {
        return value >= other.value;
    }

    bool operator>=(unsigned int n) const {
        return value >= n;
    }

    friend bool operator>=(unsigned int n, const Natural& num) {
        return n >= num.value;
    }

    bool operator==(const Natural& other) const {
        return value == other.value;
    }

    bool operator==(unsigned int n) const {
        return value == n;
    }

    friend bool operator==(unsigned int n, const Natural& num) {
        return n == num.value;
    }

    bool operator!=(const Natural& other) const {
        return value != other.value;
    }

    bool operator!=(int n) const {
        return value != n;
    }

    bool operator!=(unsigned int n) const {
        return value != n;
    }

    friend bool operator!=(unsigned int n, const Natural& num) {
        return n != num.value;
    }

    // Перегрузка операции индексирования []
    unsigned int operator[](int i) const {
        string str_value = to_string(value);
        return str_value[i] - '0';
    }


}; class Natural {
private:
    unsigned int value; // значение числа
public:
    // конструктор без параметров
    Natural() : value(0) {}

    // конструктор с параметром
    Natural(unsigned int n) : value(n) {}

    // конструктор с параметром - строкой
    Natural(string str) {
        // преобразуем строку в число
        unsigned int n = stoi(str);
        // проверяем, что число является натуральным
        if (n < 0) {
            exit(1);
        }
        // присваиваем значение числа
        value = n;
    }

    // конструктор копий
    Natural(const Natural& other) {
        value = other.value;
    }

    // метод для получения значения числа
    unsigned int get_value() const {
        return value;
    }

    // метод для установки значения числа
    void set_value(unsigned int n) {
        value = n;
    }

    // метод для вывода числа на экран
    void print() const {
        cout << value << endl;
    }

    // Перегрузка оператора присваивания
    Natural& operator=(const Natural& other) {
        if (this != &other) {
            value = other.value;
        }
        return *this;
    }

    // Оператор приведения к типу int
    operator int() const {
        return static_cast<int>(value);
    }

    // перегрузка оператора приведения типа  string
    operator string() const {
        return  to_string(value);
    }

    // Оператор приведения к типу double
    operator double() const {
        return static_cast<double>(value);
    }

    // перегрузка оператора сложения
    Natural operator+(const Natural& other) const {
        return Natural(value + other.value);
    }

    Natural operator+(unsigned int n) const {
        return Natural(value + n);
    }

    friend Natural operator+(unsigned int n, const Natural& num) {
        return num + n;
    }

    // перегрузка оператора вычитания
    Natural operator-(const Natural& other) const {
        if (value < other.value) {
            exit(1);
        }
        return Natural(value - other.value);
    }

    Natural operator-(unsigned int n) const {
        if (value < n) {
            exit(1);
        }
        return Natural(value - n);
    }

    friend Natural operator-(unsigned int n, const Natural& num) {
        if (num.value < n) {
            exit(1);
        }
        return Natural(n - num.value);
    }

    // перегрузка оператора умножения
    Natural operator*(const Natural& other) const {
        return Natural(value * other.value);
    }

    Natural operator*(unsigned int n) const {
        return Natural(value * n);
    }

    friend Natural operator*(unsigned int n, const Natural& num) {
        return num * n;
    }

    // перегрузка оператора деления
    Natural operator/(const Natural& other) const {
        if (other.value == 0) {
            exit(1);
        }
        return Natural(value / other.value);
    }

    Natural operator/(unsigned int n) const {
        if (n == 0) {
            exit(1);
        }
        return Natural(value / n);
    }

    friend Natural operator/(unsigned int n, const Natural& num) {
        if (num.value == 0) {
            exit(1);
        }
        return Natural(n / num.value);
    }

    // перегрузка оператора остатка от деления
    Natural operator%(const Natural& other) const {
        if (other.value == 0) {
            exit(1);
        }
        return Natural(value % other.value);
    }

    Natural operator%(unsigned int n) const {
        if (n == 0) {
            exit(1);
        }
        return Natural(value % n);
    }

    friend Natural operator%(unsigned int n, const Natural& num) {
        if (num.value == 0) {
            exit(1);
        }
        return Natural(n % num.value);
    }

    Natural operator-() const {
        throw  invalid_argument("Attempt to negate a natural number");
    }


    // Перегрузка операторов сравнения
    bool operator<(const Natural& other) const {
        return value < other.value;
    }

    bool operator<(unsigned int n) const {
        return value < n;
    }

    friend bool operator<(unsigned int n, const Natural& num) {
        return n < num.value;
    }

    bool operator>(const Natural& other) const {
        return value > other.value;
    }

    bool operator>(unsigned int n) const {
        return value > n;
    }

    friend bool operator>(unsigned int n, const Natural& num) {
        return n > num.value;
    }

    bool operator<=(const Natural& other) const {
        return value <= other.value;
    }

    bool operator<=(unsigned int n) const {
        return value <= n;
    }

    friend bool operator<=(unsigned int n, const Natural& num) {
        return n <= num.value;
    }

    bool operator>=(const Natural& other) const {
        return value >= other.value;
    }

    bool operator>=(unsigned int n) const {
        return value >= n;
    }

    friend bool operator>=(unsigned int n, const Natural& num) {
        return n >= num.value;
    }

    bool operator==(const Natural& other) const {
        return value == other.value;
    }

    bool operator==(unsigned int n) const {
        return value == n;
    }

    friend bool operator==(unsigned int n, const Natural& num) {
        return n == num.value;
    }

    bool operator!=(const Natural& other) const {
        return value != other.value;
    }

    bool operator!=(int n) const {
        return value != n;
    }

    bool operator!=(unsigned int n) const {
        return value != n;
    }

    friend bool operator!=(unsigned int n, const Natural& num) {
        return n != num.value;
    }

    // Перегрузка операции индексирования []
    unsigned int operator[](int i) const {
        string str_value = to_string(value);
        return str_value[i] - '0';
    }


};