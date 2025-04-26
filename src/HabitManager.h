//
// Created by yakub on 27.04.2025.
//

#ifndef HABITMANAGER_H
#define HABITMANAGER_H

#include <string>
#include <set>
#include <vector>
#include <map>

class HabitManager {
private:
    std::set<std::string> habits;
    std::map<std::string, int> streaks; // сколько дней подряд выполнено
    std::set<std::string> doneToday;
public:
    HabitManager() = default;
    bool addHabit(const std::string& name);
    bool removeHabit(const std::string& name);
    std::vector<std::string> getHabits() const;
    bool markHabitDone(const std::string& name);
};

#endif //HABITMANAGER_H
