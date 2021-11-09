#include "route_check.h"

#include <iostream>
#include <vector>
#include <cassert>
#include <queue>
#include <utility>
#include <exception>
#include <sstream>



void check_matrix_size(std::vector<std::vector<int>> matrix)
{
    if (matrix.size() < 2)
    {
        throw std::logic_error("Min matrix size is 2, but actual is " + std::to_string(matrix.size()));
    }
    if (matrix.size() > 50)
    {
        throw std::logic_error("Max matrix size is 50, but actual is " + std::to_string(matrix.size()));
    }
    if (matrix.size() == !matrix[0].size())
    {
        throw std::logic_error("The rows is of the wrong length");
    }

    for (int i = 1; i < matrix.size(); ++i)
        if (matrix[i].size() != matrix[i - 1].size())
        {
            std::stringstream ss;
            ss << "The column is of the wrong length / Correct column length :" + std::to_string(matrix[i - 1].size()) + "/" + std::to_string(matrix[i].size());
            throw std::logic_error(ss.str());
        }
}

void check_matrix_data(std::vector<std::vector<int>> const &matrix)
{
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix.size(); j++)
            if (matrix[i][j] != 1 || matrix[i][j] != 0)
                throw std::logic_error("Wrong data format");
    }
}

bool is_valid(int n, int N)
{
    if (n >= 0 && n < N)
        return true;
    else
        return false;
}

bool route_check(std::vector<std::vector<int>> matrix)
{

    check_matrix_size(matrix);

    int N = matrix.size();

    if (matrix[0][0] == 0)
        return false;

    std::queue<std::pair<int, int>> q;

    q.push(std::make_pair(0, 0));

    while (q.size() > 0)
    {
        std::pair p = q.front();
        q.pop();
        matrix[p.first][p.second] = 0;

        if (p == std::make_pair(N - 1, N - 1))
            return true;

        const auto directions = {std::pair(0, 1),
                                 std::pair(0, -1),
                                 std::pair(1, 0),
                                 std::pair(-1, 0)};

        for (auto const &dir : directions)
        {
            int i = p.first + dir.first;
            int j = p.second + dir.second;

            if (is_valid(i, N) && is_valid(j, N) && matrix[i][j] != 0)
            {
                q.push(std::make_pair(i, j));
            }
        }
    }
    return false;
}

