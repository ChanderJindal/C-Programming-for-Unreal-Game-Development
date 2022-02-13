// Copyright A.T. Chamillard. All Rights Reserved.

#include <iostream>
#include <string>

// IMPORTANT: Only add code in the section
// indicated below. The code I've provided
// makes your solution work with the
// automated grader on Coursera

/**
 * Programming Assignment 1
 * @param argc command-line argument count
 * @param argv command-line arguments
 * @return exit status
 */
int main(int argc, const char * argv[])
{
    // loop while there's more input
    std::string Input;
    std::getline(std::cin, Input);
    while (Input[0] != 'q')
    {
        // Add your code between this comment
        // and the comment below. You can of
        // course add more space between the
        // comments as needed

        std::cout<<"H\nHe\nLi\nBe\nB\nC\nN\nO\nF\nNe\n";

        // Don't add or modify any code below
        // this comment
        std::getline(std::cin, Input);
    }

    return 0;
}
