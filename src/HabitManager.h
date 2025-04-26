//
// Created by yakub on 27.04.2025.
//

#ifndef HABITMANAGER_H
#define HABITMANAGER_H

#include <string>

class HabitManager {
public:
    HabitManager() = default;
    bool addHabit(const std::string& name);
};

#endif //HABITMANAGER_H
