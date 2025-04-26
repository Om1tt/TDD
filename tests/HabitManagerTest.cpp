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

