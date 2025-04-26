#include <gtest/gtest.h>
#include "../src/HabitManager.h"

TEST(HabitManagerTest, CreationTest) {
    HabitManager manager;
    SUCCEED();
}

TEST(HabitManagerTest, AddHabitTest) {
    HabitManager manager;
    EXPECT_TRUE(manager.addHabit("Reading"));
}

TEST(HabitManagerTest, AddDuplicateHabitTest) {
    HabitManager manager;
    manager.addHabit("Reading");
    EXPECT_FALSE(manager.addHabit("Reading"));
}

TEST(HabitManagerTest, RemoveHabitTest) {
    HabitManager manager;
    manager.addHabit("Reading");
    EXPECT_TRUE(manager.removeHabit("Reading"));
    EXPECT_FALSE(manager.removeHabit("Reading")); // уже удалено
}

TEST(HabitManagerTest, ListHabitsTest) {
    HabitManager manager;
    manager.addHabit("Reading");
    manager.addHabit("Workout");
    auto list = manager.getHabits();
    EXPECT_EQ(list.size(), 2);
    EXPECT_NE(std::find(list.begin(), list.end(), "Reading"), list.end());
    EXPECT_NE(std::find(list.begin(), list.end(), "Workout"), list.end());
}

TEST(HabitManagerTest, MarkHabitDoneTest) {
    HabitManager manager;
    manager.addHabit("Reading");
    EXPECT_TRUE(manager.markHabitDone("Reading"));
    EXPECT_FALSE(manager.markHabitDone("Workout")); // нет такой привычки
}

TEST(HabitManagerTest, HabitStreakTest) {
    HabitManager manager;
    manager.addHabit("Workout");
    manager.markHabitDone("Workout");
    EXPECT_EQ(manager.getStreak("Workout"), 1);
}



