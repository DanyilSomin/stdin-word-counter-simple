#include <iostream>
#include <string>
#include <unordered_set>

int main()
{
    std::unordered_set<std::string> words{  };

    do {
        std::string tmpStr;
        std::cin >> tmpStr;

        if (tmpStr.size())
        {
            words.insert(tmpStr);
        }
    }
    while (std::cin.peek() == ' ');

    std::cout << words.size() << '\n';
}