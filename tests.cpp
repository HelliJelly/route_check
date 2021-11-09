#include "route_check.h"
#include <gtest/gtest.h>

TEST(route_check, Route_1)
{
    std::vector<std::vector<int>> Route_1 = {
        {1, 1, 0, 1, 0},
        {0, 1, 0, 1, 0},
        {1, 1, 0, 1, 1},
        {1, 0, 1, 0, 0},
        {1, 1, 1, 1, 1}};    

    EXPECT_TRUE(route_check(Route_1));
}

TEST(route_check, Route_2)
{
    std::vector<std::vector<int>> Route_2 = {
        {1, 1, 1, 1, 1},
        {1, 1, 1, 1, 1},
        {1, 1, 1, 1, 1},
        {1, 1, 1, 1, 1},
        {1, 1, 1, 1, 1}};

    

    EXPECT_TRUE(route_check(Route_2));
}
TEST(route_check, Route_3)
{
    std::vector<std::vector<int>> Route_3 = {
        {0, 0, 0, 1, 1},
        {1, 1, 1, 1, 1},
        {1, 1, 1, 1, 1},
        {1, 1, 1, 1, 1},
        {0, 0, 0, 0, 0}};    

    EXPECT_FALSE(route_check(Route_3));
}

TEST(route_check, Route_4)
{
    std::vector<std::vector<int>> Route_4 = {
        {1, 1, 1, 0, 1},
        {1, 0, 1, 1, 1},
        {0, 1, 1, 1, 0},
        {0, 0, 1, 1, 1},
        {0, 0, 0, 1, 0}};   

    EXPECT_FALSE(route_check(Route_4));
}

TEST(route_check, Route_5)
{
    std::vector<std::vector<int>> Route_5 = {
        {1, 1, 1, 0, 1},
        {1, 0, 1, 1, 1},
        {0, 1, 1, 1, 0},
        {0, 0, 1, 1, 1},
        {0, 0, 0, 1, 1}};

   

    EXPECT_TRUE(route_check(Route_5));
}
TEST(route_check, Route_6)
{
    std::vector<std::vector<int>> Route_6 = {
        {1, 0, 0, 0, 0},
        {0, 1, 0, 0, 0},
        {0, 0, 1, 0, 0},
        {0, 0, 0, 1, 0},
        {0, 0, 0, 0, 1}};    

    EXPECT_FALSE(route_check(Route_6));
}

TEST(route_check, Route_7)
{
    std::vector<std::vector<int>> Route_7 = {
        {1, 1, 0, 0, 0},
        {0, 1, 0, 0, 0},
        {0, 1, 1, 0, 0},
        {0, 0, 1, 1, 0},
        {0, 0, 0, 1, 1}};    

    EXPECT_TRUE(route_check(Route_7));
}
TEST(route_check, Route_8)
{
    std::vector<std::vector<int>> Route_8 = {
        {1, 1, 0, 0, 0},
        {0, 1, 0, 0, 0},
        {0, 1, 1, 0, 0},
        {0, 0, 1, 1, 0},
        {0, 0, 0, 1, 0}};

    EXPECT_FALSE(route_check(Route_8));
}

TEST(route_check, Route_9)
{
    std::vector<std::vector<int>> Route_9 = {
        {0, 1, 0, 0, 0},
        {0, 1, 0, 0, 0},
        {0, 1, 1, 0, 0},
        {0, 0, 1, 1, 0},
        {0, 0, 0, 1, 1}};

    

    EXPECT_FALSE(route_check(Route_9));
}
TEST(route_check, Route_10)
{
    std::vector<std::vector<int>> Route_10 = {
        {1, 1, 1, 1, 1},
        {1, 0, 0, 0, 1},
        {1, 0, 1, 0, 1},
        {1, 0, 0, 0, 1},
        {1, 1, 1, 1, 1}};    

    EXPECT_TRUE(route_check(Route_10));
}
TEST(route_check, Route_11)
{
    std::vector<std::vector<int>> Route_11 = {
        {1, 0, 0, 0, 1},
        {0, 1, 0, 1, 0},
        {0, 0, 1, 0, 0},
        {0, 1, 0, 1, 0},
        {1, 0, 0, 0, 1}};
   
    EXPECT_FALSE(route_check(Route_11));
}

TEST(route_check, Route_12)
{
    std::vector<std::vector<int>> Route_12 = {
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        {1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
        {1, 1, 1, 1, 0, 1, 1, 1, 1, 0},
        {0, 1, 1, 1, 1, 1, 1, 0, 1, 1},
        {1, 1, 1, 0, 1, 1, 1, 1, 1, 1},
        {1, 1, 1, 1, 1, 1, 0, 1, 1, 1},
        {1, 1, 1, 1, 1, 1, 1, 1, 0, 1},
        {1, 1, 1, 1, 1, 1, 1, 1, 0, 1},
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        {1, 1, 1, 1, 1, 1, 1, 1, 0, 1}};

   

    EXPECT_TRUE(route_check(Route_12));
}
TEST(route_check, Route_13)
{
    std::vector<std::vector<int>> Route_13 = {
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        {1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
        {1, 1, 1, 1, 0, 1, 1, 1, 1, 0},
        {0, 1, 1, 1, 1, 1, 1, 0, 0, 1},
        {1, 1, 0, 0, 1, 1, 1, 0, 1, 1},
        {1, 1, 1, 1, 1, 1, 0, 1, 0, 1},
        {1, 1, 1, 1, 1, 1, 1, 1, 0, 1},
        {1, 1, 1, 1, 1, 1, 1, 1, 0, 1},
        {1, 1, 1, 1, 1, 1, 1, 1, 0, 1},
        {1, 1, 1, 1, 1, 1, 1, 1, 0, 1}};

    
    EXPECT_FALSE(route_check(Route_13));
}

TEST(check_matrix_size, min_size)
{
    std::vector<std::vector<int>> Route = {};
    EXPECT_THROW(check_matrix_size(Route), std::logic_error);
}

TEST(check_matrix_size, max_size)
{
    std::vector<std::vector<int>> Route(51, std::vector<int>(51, 1));
    EXPECT_THROW(check_matrix_size(Route), std::logic_error);
}

TEST(check_matrix_size, square_matrix)
{
    std::vector<std::vector<int>> Route = {
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        {1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
        {1, 1, 1, 1, 0, 1, 1, 1, 1, 0},
        {0, 1, 1, 1, 1, 1, 1, 0, 0},
        {1, 1, 0, 0, 1, 1, 1, 0, 1, 1},
        {1, 1, 1, 1, 1, 1, 0, 1, 0, 1},
        {1, 1, 1, 1, 1, 1, 1, 1, 0, 1},
        {1, 1, 1, 1, 1, 1, 1, 1, 0, 1},
        {1, 1, 1, 1, 1, 1, 1, 1, 0, 1},
        {1, 1, 1, 1, 1, 1, 1, 1, 0, 1}};

    EXPECT_THROW(check_matrix_size(Route), std::logic_error);
}

TEST(check_matrix_data, data_1)
{
    std::vector<std::vector<int>> Route = {
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        {1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
        {1, 1, 1, 1, 0, 1, 1, 1, 1, 0},
        {0, 1, 1, 1, 1, 1, 1, 0, 0, 9},
        {1, 1, 0, 0, 1, 1, 1, 0, 1, 1},
        {1, 1, 1, 1, 1, 1, 0, 1, 0, 1},
        {1, 1, 1, 1, 1, 1, 1, 1, 0, 1},
        {1, 1, 1, 1, 1, 1, 1, 1, 0, 1},
        {1, 1, 1, 1, 1, 1, 1, 1, 0, 1},
        {1, 1, 1, 1, 1, 1, 1, 1, 0, 1}};

    EXPECT_THROW(check_matrix_data(Route), std::logic_error);
}

TEST(check_matrix_data, data_2)
{
    std::vector<std::vector<int>> Route = {
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        {1, 0, 0, 0, 0, 0, 0, 0, 0, 1},
        {1, 1, 1, 1, 0, 1, 1, 1, 1, 0},
        {0, 1, 1, 1, 1, 10, 1, 0, 0, 0},
        {1, 1, 0, 0, 1, 1, 1, 0, 1, 1},
        {1, 1, 1, 1, 1, 1, 0, 1, 0, 1},
        {1, 1, 1, 1, 1, 1, 1, 1, 0, 1},
        {1, 1, 1, 1, 1, 1, 1, 1, 0, 1},
        {1, 1, 1, 1, 1, 1, 1, 1, 0, 1},
        {1, 1, 1, 1, 1, 1, 1, 1, 0, 1}};

    EXPECT_THROW(check_matrix_data(Route), std::logic_error);
}