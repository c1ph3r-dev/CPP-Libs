#include <iostream>
#include <vector>

namespace palindrome
{

    bool isPalindrome(std::vector<char>& word, bool consoleOutput = false)
    {
        const int wordSize = word.size();

        int mid = 0;
        if (wordSize % 2 == 0)
        {
            mid = wordSize / 2;
        }
        else
        {
            mid = (wordSize + 1) / 2;
        }

        bool check = false;

        for (int i = 0, j = wordSize - 1; i <= mid && j >= mid; i++, j--)
        {
            if (i == j)
            {
                check = true; break;
            }

            if (!(word[i] == word[j]))
            {
                check = false; break;
            }
        }

        if (consoleOutput)
        {
            for (int i = 0; i < word.size() - 1; i++)
            {
                std::cout << word[i];
            }
            std::cout << " ";
        }

        if (!check)
        {
            if (consoleOutput)
                std::cout << "is not a palindrome" << std::endl;

            return false;
        }
        else
        {
            if (consoleOutput)
                std::cout << "is a palindrome" << std::endl;

            return true;
        }
    }

}