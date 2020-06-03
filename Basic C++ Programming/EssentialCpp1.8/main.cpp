/*
    猜数游戏
*/
#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h>

int main()
{
    std::vector<int> fibonacci = {1, 2, 3};
    std::vector<int> lucas = {1, 3, 4};
    std::vector<int> pell = {2, 5, 12};
    std::vector<int> triangular = {3, 6, 9};
    std::vector<int> square = {4, 9, 16};
    std::vector<int> pentagonal = {5, 12, 22};
    const int seqCnt = 6;
    std::vector<int> *seqAddrs[seqCnt] = {
        &fibonacci, &lucas, &pell,
        &triangular, &square, &pentagonal
    };
    const int statementSize = 4;
    std::string comfortStatement[statementSize] = {
        "别灰心，人生难免不如意！",
        "这局你肯定赢！",
        "我会默默支持你的！",
        "这是你的奖励！"
    };
    srand(statementSize);
    int rightCnt = 0;
    int answer;
    char tryAgain;
    do{
        int seqIndex = rand() % seqCnt;
        auto curSeq = seqAddrs[seqIndex];
        std::cout << "The first two elements of the sequence are: "
                  << (*curSeq)[0] << ' '
                  << (*curSeq)[1] << '\n'
                  << "The next element is: ";

        std::cin >> answer;
        if (std::cin.fail())
        {
            std::cin.clear(); //清除std::cin的错误状态
            std::cin.sync(); //清空输入缓冲区
        }

        if (answer == (*curSeq)[2])
        {
            rightCnt++;
            if (rightCnt % 3)
            {
                std::cout << "Wow, you are right!" << std::endl;
            }
            else
            {
                std::cout << "Wow, 三连!" << std::endl;
            }
        }
        else
        {
            int statementIndex = rand() % statementSize;
            std::cout << comfortStatement[statementIndex] << std::endl;
            /*switch(statementIndex)
            {
                case 0:
                    std::cout << comfortStatement[0] << std::endl;
                    break;
                case 1:
                    std::cout << comfortStatement[1] << std::endl;
                    break;
                case 2:
                    std::cout << comfortStatement[2] << std::endl;
                    break;
                case 3:
                    std::cout << comfortStatement[3] << std::endl;
                    break;
            }*/
        }
        std::cout << "Want to try another sequence? (Y/N) ";
        std::cin >> tryAgain;
        if (std::cin.fail())
        {
            std::cin.clear(); //清除std::cin的错误状态
            std::cin.sync(); //清空输入缓冲区
        }
    }while((tryAgain != 'N') && (tryAgain != 'n'));  //如果条件为真的话，就会重复do...while这个循环,直至while()为假

    return 0;
}
