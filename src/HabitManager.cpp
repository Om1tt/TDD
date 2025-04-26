//
// Created by yakub on 27.04.2025.
//

#include "HabitManager.h"

bool HabitManager::addHabit(const std::string& name) {
    if (habits.count(name)) {
        return false;
    }
    habits.insert(name);
    return true;
}

bool HabitManager::removeHabit(const std::string& name) {
    return habits.erase(name) > 0;
}
