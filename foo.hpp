#pragma once

#include "Human.hpp"

#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    std::vector< char > result;
    result.reserve(people.size());

    for (Human& h : people) {
        h.birthday();                       // inkrementacja wieku
        char c = h.isMonster() ? 'n' : 'y'; // isMonster() ? n/y
        result.push_back(c);
    }

    std::reverse(result.begin(), result.end()); // odwrócenie kolejnoœci
    return result;
}
