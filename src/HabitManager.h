//
// Created by yakub on 27.04.2025.
//

#ifndef HABITMANAGER_H
#define HABITMANAGER_H

#include <string>
#include <set>

class HabitManager {
private:
    std::set<std::string> habits;
public:
    HabitManager() = default;
    bool addHabit(const std::string& name);
    bool removeHabit(const std::string& name);
};

#endif //HABITMANAGER_H
