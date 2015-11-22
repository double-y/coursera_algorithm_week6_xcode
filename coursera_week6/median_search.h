//
//  median_search.h
//  coursera_week6
//
//  Created by 安田洋介 on 11/21/15.
//  Copyright © 2015 安田洋介. All rights reserved.
//

#ifndef median_search_h
#define median_search_h

#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <sstream>

std::vector<int> insert_vec(std::vector<int> sorted_vec, int value);

int exec_median_search(std::string file_name);

#endif /* median_search_h */
