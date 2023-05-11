#ifndef PREFIXMATCHER_H
#define PREFIXMATCHER_H

#include <iostream>
#include <vector>
#include <string>

class PrefixMatcher {
    private:
        int i;

    public:
        int selectRouter(std::string networkAddress);
};

#endif