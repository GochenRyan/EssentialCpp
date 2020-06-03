#include <iostream>
#include <fstream>
#include <algorithm>

int main()
{
    std::ifstream inFile("in.txt");
    if (!inFile)
    {
        std::cerr << "The file can\'t be open!" << std::endl;
        return -1;
    }
    else
    {
        std::vector<std::string> nameContainer;
        std::string name;
        while (inFile >> name)
        {
            nameContainer.push_back(name);
        }
        for(auto iter = nameContainer.begin(); iter != nameContainer.end(); ++iter)
        {
            std::cout << *iter << std::endl;
        }
        sort(nameContainer.begin(), nameContainer.end());

        std::ofstream outFile("out.txt");
        if (!outFile)
        {
            std::cerr << "Oops! Unable to save session data!" << std::endl;
            return -1;
        }
        else
        {
            for(auto iter = nameContainer.begin(); iter != nameContainer.end(); ++iter)
            {
                outFile << *iter << ' ';
            }
            outFile << std::endl;
        }
    }
    return 0;
}
