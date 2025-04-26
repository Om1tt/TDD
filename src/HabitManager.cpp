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

std::vector<std::string> HabitManager::getHabits() const {
    return {habits.begin(), habits.end()};
}

bool HabitManager::markHabitDone(const std::string& name) {
    if (!habits.count(name)) {
        return false;
    }
    doneToday.insert(name);
    streaks[name]++;
    return true;
}

int HabitManager::getStreak(const std::string& name) const {
    auto it = streaks.find(name);
    if (it != streaks.end()) {
        return it->second;
    }
    return 0;
}
