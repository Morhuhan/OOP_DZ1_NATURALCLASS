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




    // ����� ��� ��������� �������� �����
    void set_value(unsigned int n) {
        value = n;
    }

    // ����� ��� ������ ����� �� �����
    void print() const {
        cout << value << endl;
    }

    // ���������� ��������� ������������
    Natural& operator=(const Natural& other) {
        if (this != &other) {
            value = other.value;
        }
        return *this;
    }

    // �������� ���������� � ���� int
    operator int() const {
        return static_cast<int>(value);
    }

    // ���������� ��������� ���������� ����  string
    operator string() const {
        return  to_string(value);
    }

    // �������� ���������� � ���� double
    operator double() const {
        return static_cast<double>(value);
    }

    // ���������� ��������� ��������
    Natural operator+(const Natural& other) const {
        return Natural(value + other.value);
    }

    Natural operator+(unsigned int n) const {
        return Natural(value + n);
    }

    friend Natural operator+(unsigned int n, const Natural& num) {
        return num + n;
    }

    // ���������� ��������� ���������
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

    // ���������� ��������� ���������
    Natural operator*(const Natural& other) const {
        return Natural(value * other.value);
    }

    Natural operator*(unsigned int n) const {
        return Natural(value * n);
    }

    friend Natural operator*(unsigned int n, const Natural& num) {
        return num * n;
    }

    // ���������� ��������� �������
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

    // ���������� ��������� ������� �� �������
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


    // ���������� ���������� ���������
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

    // ���������� �������� �������������� []
    unsigned int operator[](int i) const {
        string str_value = to_string(value);
        return str_value[i] - '0';
    }


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
Natural::unsigned int get_value() const {
    return value;
}