#include <iostream>
#include <vector>

int main()
{
    int array1[50];
    std::vector<int> array2;
    int n;
    int counter = 0;
    while(std::cin >> array1[counter])
    {
        counter++;
        if (std::cin.get() == '\n')
				break;
    }
    while(std::cin >> n)
    {
        array2.push_back(n);
        if (std::cin.get() == '\n')
				break;
    }
    int sum = 0;
    for(int i = 0; i < counter; ++i)
    {
        sum += array1[i];
    }
    for(auto iter = array2.begin(); iter != array2.end(); ++iter)
    {
        sum += *iter;
    }
    float average = 0.0;
    average = (float)sum / (counter + array2.size());
    std::cout << counter << " " << array2.size() <<std::endl;
    std::cout << "sum: " << sum << ", average: " << average << std::endl;
    return 0;
}
