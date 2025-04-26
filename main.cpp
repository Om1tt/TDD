#include <iostream>
#include "src/HabitManager.h"

void showMenu() {
    std::cout << "\n1. List habits\n";
    std::cout << "2. Add habit\n";
    std::cout << "3. Remove habit\n";
    std::cout << "4. Mark habit as done\n";
    std::cout << "5. Show streaks\n";
    std::cout << "0. Exit\n";
}

int main() {
    HabitManager manager;
    int choice;
    std::string name;

    while (true) {
        showMenu();
        std::cout << "Choose: ";
        std::cin >> choice;
        std::cin.ignore();

        if (choice == 0) break;
        if (choice == 1) {
            auto habits = manager.getHabits();
            for (const auto& h : habits) {
                std::cout << h << '\n';
            }
        } else if (choice == 2) {
            std::cout << "Enter habit name: ";
            std::getline(std::cin, name);
            if (manager.addHabit(name))
                std::cout << "Habit added.\n";
            else
                std::cout << "Habit already exists.\n";
        } else if (choice == 3) {
            std::cout << "Enter habit name: ";
            std::getline(std::cin, name);
            if (manager.removeHabit(name))
                std::cout << "Habit removed.\n";
            else
                std::cout << "Habit not found.\n";
        } else if (choice == 4) {
            std::cout << "Enter habit name: ";
            std::getline(std::cin, name);
            if (manager.markHabitDone(name))
                std::cout << "Habit marked as done.\n";
            else
                std::cout << "Habit not found.\n";
        } else if (choice == 5) {
            auto habits = manager.getHabits();
            for (const auto& h : habits) {
                std::cout << h << ": " << manager.getStreak(h) << " days\n";
            }
        }
    }

    return 0;
}
