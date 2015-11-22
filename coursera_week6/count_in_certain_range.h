//
//  count_in_certain_range.hpp
//  coursera_week6
//
//  Created by 安田洋介 on 11/21/15.
//  Copyright © 2015 安田洋介. All rights reserved.
//

#ifndef count_in_certain_range_hpp
#define count_in_certain_range_hpp

#include <iostream>
#include <set>
#include <functional>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>


int count_in_certain_range(std::vector<long> sorted_vec, int min, int max);
bool check_sum(std::vector<long> sorted_vec, long sum);
std::vector<long> exec_file(std::string file_name);

#endif /* count_in_certain_range_hpp */
