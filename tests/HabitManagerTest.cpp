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