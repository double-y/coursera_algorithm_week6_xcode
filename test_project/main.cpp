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
#include "median_search.h"

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

TEST_CASE("count exec"){
    exec_check_sum("algo1-programming_prob-2sum.txt");
}

TEST_CASE("median"){
    int test_vec1_array[] = {1, 100, -50};
    vector<int> test_vec1 (test_vec1_array, test_vec1_array+sizeof(test_vec1_array)/sizeof(int));
    int sorted_test_vec1_array[] = {-50, 1, 100};
    vector<int> sorted_test_vec1 (sorted_test_vec1_array, sorted_test_vec1_array+sizeof(sorted_test_vec1_array)/sizeof(int));
    std::sort(test_vec1.begin(), test_vec1.end());
    REQUIRE(test_vec1 == sorted_test_vec1);
    
    vector<int> result1 = insert_vec(test_vec1, 3);
    
    int result1_expect_array[] = {-50, 1, 3, 100};
    vector<int> result1_expect (result1_expect_array, result1_expect_array+sizeof(result1_expect_array)/sizeof(int));
    
    REQUIRE(result1 == result1_expect);
    
    vector<int> empty_vec;
    vector<int> result2 = insert_vec(empty_vec, -1);
    vector<int> expect_vec2;
    expect_vec2.push_back(-1);
    REQUIRE(result2 == expect_vec2);
}

TEST_CASE("median exec"){
    exec_median_search("Median.txt");
}
