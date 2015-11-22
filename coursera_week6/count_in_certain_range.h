//
//  count_in_certain_range.h
//  coursera_week6
//
//  Created by 安田洋介 on 11/21/15.
//  Copyright © 2015 安田洋介. All rights reserved.
//

#ifndef count_in_certain_range_h
#define count_in_certain_range_h

#include <iostream>
#include <set>
#include <functional>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>


int count_in_certain_range(std::vector<long> sorted_vec, int min, int max);
bool check_sum(std::vector<long> sorted_vec, long sum);
std::vector<long> exec_check_sum(std::string file_name);

#endif /* count_in_certain_range_h */
