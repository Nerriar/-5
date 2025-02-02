#include <iostream>
#include <string>
#include <Windows.h>

class Student {
private:
    std::string name;
    int age;
    double averageGrade;
    std::string specialisation;

public:
    // Конструктор с параметрами
    Student(std::string name, int age, double averageGrade, std::string specialisation) :
        name(name), age(age), averageGrade(averageGrade), specialisation(specialisation) {
    }

    // Методы для получения значений свойств
    std::string getName() { return name; }
    int getAge() { return age; }
    double getAverageGrade() { return averageGrade; }
    std::string getSpecialisation() { return specialisation; }

    // Методы для изменения значений свойств
    void setName(std::string newName) { name = newName; }
    void setAge(int newAge) { age = newAge; }
    void setAverageGrade(double newAverageGrade) { averageGrade = newAverageGrade; }
    void setAverageGrade(std::string newSpecialisation) { specialisation = newSpecialisation; }

    // Метод для вывода информации о студенте
    void printInfo() {
        std::cout << "Имя: " << name << "\n"
            << "Возраст: " << age << "\n"
            << "Средний балл: " << averageGrade << "\n"
            << "Факультет: " << specialisation << "\n";
    }

    // Метод для оценки успеваемости студента
    std::string evaluatePerformance() {
        if (averageGrade >= 8.0)
            return "Отлично";
        else if (averageGrade >= 6.0 && averageGrade < 8.0)
            return "Хорошо";
        else if (averageGrade >= 4.0 && averageGrade < 6.0)
            return "Удовлетворительно";
        else
            return "Неудовлетворительно";
    }
};

int main() {
    SetConsoleOutputCP(1251);

    // Создание нескольких студентов
    Student student1("Неуд Неудов", 20, 3.7, "Инженерия");
    Student student2("Иван Иванов", 20, 7.2, "Лингвистика");
    Student student3("Пётр Петров", 19, 5.4, "Математика");
    Student student4("Адигеев Илья", 22, 9.1, "Разработка");

    // Вывод информации о каждом студенте
    student1.printInfo();
    std::cout << "Оценка: " << student1.evaluatePerformance() << "\n\n";

    student2.printInfo();
    std::cout << "Оценка: " << student2.evaluatePerformance() << "\n\n";

    student3.printInfo();
    std::cout << "Оценка: " << student3.evaluatePerformance() << "\n\n";

    student4.printInfo();
    std::cout << "Оценка: " << student4.evaluatePerformance() << "\n\n";

    return 0;
}