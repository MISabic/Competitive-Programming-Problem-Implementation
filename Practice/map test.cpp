#include <map>
#include <iostream>

int main()
{
    std::map<int, std::map<int, int> > mymap;
    std::map<int, int> my;

    mymap[9][2] = 7;
    my[1] = 8;
    std::cout << my[1] << std::endl;
    std::cout << mymap[9][2] << std::endl;

    if (mymap.find(9) != mymap.end() && mymap[9].find(2) != mymap[9].end()) {
                // we have to check if 9 exists and then if 9,2 exists
        std::cout << "My map contains a value for [9][2]" << std::endl;
    } else {
        std::cout << "My map does not contain a value for [9][2]" << std::endl;
    }

    return 0;
}

