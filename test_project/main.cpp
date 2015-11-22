//
//  main.cpp
//  test_project
//
//  Created by 安田洋介 on 11/21/15.
//  Copyright © 2015 安田洋介. All rights reserved.
//

#define CATCH_CONFIG_MAIN
#include "catch.hpp"

#include "count_in_certain_range.h"

using namespace std;

TEST_CASE("count"){
    vector<long> test_vec;
    test_vec.push_back(1);
    test_vec.push_back(100);
    test_vec.push_back(50);
    test_vec.push_back(5);
    test_vec.push_back(-3);
    test_vec.push_back(-53);
    int count = count_in_certain_range(test_vec, -5, 5);
    REQUIRE(count == 3);
}

TEST_CASE("exec"){
    exec_file("algo1-programming_prob-2sum.txt");
}