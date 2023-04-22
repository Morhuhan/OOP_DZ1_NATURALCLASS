// ����� ����� friend?
// ������ � ����������� � ����� ������ ������� ���� ��������, � � ������ 2?


#include <iostream>
#include <string>

using namespace std;


class Natural {
private:
    unsigned int value; // �������� �����
public:
    Natural();
    Natural(unsigned int n);
    Natural(string str);
    Natural(const Natural& other);
    unsigned int get_value() const;
    void set_value(unsigned int n);
    void print() const;
    Natural& operator=(const Natural& other);
    operator int() const;
    operator string() const;
    operator double() const;
    Natural operator+(const Natural& other) const;
    Natural operator+(unsigned int n) const;
    friend Natural operator+(unsigned int n, const Natural& num);
    Natural operator-(const Natural& other) const;
    Natural operator-(unsigned int n) const;
    friend Natural operator-(unsigned int n, const Natural& num);
    Natural operator*(const Natural& other) const;
    Natural operator*(unsigned int n) const;
    friend Natural operator*(unsigned int n, const Natural& num);
    Natural operator/(const Natural& other) const;
    Natural operator/(unsigned int n) const;
    friend Natural operator/(unsigned int n, const Natural& num);
    Natural operator%(const Natural& other) const;
    Natural operator%(unsigned int n) const;
    friend Natural operator%(unsigned int n, const Natural& num);
    Natural operator-() const;
    bool operator<(const Natural& other) const;
    bool operator<(unsigned int n) const;
    friend bool operator<(unsigned int n, const Natural& num);
    bool operator>(const Natural& other) const;
    bool operator>(unsigned int n) const;
    friend bool operator>(unsigned int n, const Natural& num);
    bool operator<=(const Natural& other) const;
    bool operator<=(unsigned int n) const;
    friend bool operator<=(unsigned int n, const Natural& num);
    bool operator>=(const Natural& other) const;
    bool operator>=(unsigned int n) const;
    friend bool operator>=(unsigned int n, const Natural& num);
    bool operator==(const Natural& other) const;
    bool operator==(unsigned int n) const;
    friend bool operator==(unsigned int n, const Natural& num);
    bool operator!=(const Natural& other) const;
    bool operator!=(int n) const;
    bool operator!=(unsigned int n) const;
    friend bool operator!=(unsigned int n, const Natural& num);
    unsigned int operator[](int i) const;
};


// ������������
Natural::Natural() : value(0) {}

Natural::Natural(unsigned int n) : value(n) {}

Natural::Natural(string str) {
    unsigned int n = stoi(str);
    if (n < 0) {
        exit(1);
    }
    value = n;
}

// ����������� �����
Natural::Natural(const Natural& other) {
    value = other.value;
}

// ����� ��� ��������� �������� �����
unsigned int Natural::get_value() const {
    return value;
}

// ����� ��� ��������� �������� �����
void Natural::set_value(unsigned int n) {
    value = n;
}

// ����� ��� ������ ����� �� �����
void Natural::print() const {
    cout << value << endl;
}

// ���������� ��������� ������������
Natural& Natural::operator=(const Natural& other) {
    if (this != &other) {
        value = other.value;
    }
    return *this;
}

// �������� ���������� � ���� int
Natural::operator int() const {
    return static_cast<int>(value);
}

// ���������� ��������� ���������� ����  string
Natural::operator string() const {
    return  to_string(value);
}

// �������� ���������� � ���� double
Natural::operator double() const {
    return static_cast<double>(value);
}

// ���������� ��������� ��������
Natural Natural::operator+(const Natural& other) const {
    return Natural(value + other.value);
}

Natural Natural::operator+(unsigned int n) const {
    return Natural(value + n);
}

// ����������� ���������� �������-��������� +
Natural operator+(unsigned int n, const Natural& num) {
    return Natural(n + num.value);
}

// ���������� ��������� ���������
Natural Natural::operator-(const Natural& other) const {
    if (value < other.value) {
        exit(1);
    }
    return Natural(value - other.value);
}

Natural Natural::operator-(unsigned int n) const {
    if (value < n) {
        exit(1);
    }
    return Natural(value - n);
}

Natural operator-(unsigned int n, const Natural& num) {
    if (num.value < n) {
        exit(1);
    }
    return Natural(n - num.value);
}

// ���������� ��������� ���������
Natural Natural::operator*(const Natural& other) const {
    return Natural(value * other.value);
}

Natural Natural::operator*(unsigned int n) const {
    return Natural(value * n);
}

Natural operator*(unsigned int n, const Natural& num) {
    return num * n;
}

// ���������� ��������� �������
Natural Natural::operator/(const Natural& other) const {
    if (other.value == 0) {
        exit(1);
    }
    return Natural(value / other.value);
}

Natural Natural::operator/(unsigned int n) const {
    if (n == 0) {
        exit(1);
    }
    return Natural(value / n);
}

Natural operator/(unsigned int n, const Natural& num) {
    if (num.value == 0) {
        exit(1);
    }
    return Natural(n / num.value);
}

// ���������� ��������� ������� �� �������
Natural Natural::operator%(const Natural& other) const {
    if (other.value == 0) {
        exit(1);
    }
    return Natural(value % other.value);
}

Natural Natural::operator%(unsigned int n) const {
    if (n == 0) {
        exit(1);
    }
    return Natural(value % n);
}

Natural operator%(unsigned int n, const Natural& num) {
    if (num.value == 0) {
        exit(1);
    }
    return Natural(n % num.value);
}

Natural Natural::operator-() const {
    throw  invalid_argument("Attempt to negate a natural number");
}


// ���������� ���������� ���������
bool Natural::operator<(const Natural& other) const {
    return value < other.value;
}

bool Natural::operator<(unsigned int n) const {
    return value < n;
}

bool operator<(unsigned int n, const Natural& num) {
    return n < num.value;
}

bool Natural::operator>(const Natural& other) const {
    return value > other.value;
}

bool Natural::operator>(unsigned int n) const {
    return value > n;
}

bool operator>(unsigned int n, const Natural& num) {
    return n > num.value;
}

bool Natural::operator<=(const Natural& other) const {
    return value <= other.value;
}

bool Natural::operator<=(unsigned int n) const {
    return value <= n;
}

bool operator<=(unsigned int n, const Natural& num) {
    return n <= num.value;
}

bool Natural::operator>=(const Natural& other) const {
    return value >= other.value;
}

bool Natural::operator>=(unsigned int n) const {
    return value >= n;
}

bool operator>=(unsigned int n, const Natural& num) {
    return n >= num.value;
}

bool Natural::operator==(const Natural& other) const {
    return value == other.value;
}

bool Natural::operator==(unsigned int n) const {
    return value == n;
}

bool operator==(unsigned int n, const Natural& num) {
    return n == num.value;
}

bool Natural::operator!=(const Natural& other) const {
    return value != other.value;
}

bool Natural::operator!=(int n) const {
    return value != n;
}

bool Natural::operator!=(unsigned int n) const {
    return value != n;
}

bool operator!=(unsigned int n, const Natural& num) {
    return n != num.value;
}

// ���������� �������� �������������� []
unsigned int Natural::operator[](int i) const {
    string str_value = to_string(value);
    return str_value[i] - '0';
}

