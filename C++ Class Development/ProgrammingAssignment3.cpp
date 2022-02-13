// Copyright A.T. Chamillard. All Rights Reserved.

#include <iostream>
#include <string>
#include <array>

// IMPORTANT: Only add code in the section
// indicated below. The code I've provided
// makes your solution work with the 
// automated grader on Coursera

/**
 * Programming Assignment 3
 * @return exit status
*/
int main()
{
	std::string Input;

	// loop while there's more input
	std::getline(std::cin, Input);
	while (Input[0] != 'q')
	{
		// Add your code between this comment
		// and the comment below. You can of
		// course add more space between the
		// comments as needed
    std::array<int,26> arr;
		for(int i=0;i<26;i++)
		arr[i] = 0;
		for(int i =0;i<Input.length();i++){
			int idx = (int) Input[i];
			if(  idx > 96 && idx < 123  ){
				arr[idx-97]++;
			}else if(idx > 64 && idx < 91){
				arr[idx-65]++;
			}		
		}
      bool flag = false;
		for (int i = 0; i < 26; i++){
			if (arr[i] != 0){
				std::cout<<(char)('A' + i)<<arr[i]<<" ";
        flag = true;
      }
    }
    if(flag == false)
    std::cout<<" ";
		std::cout<<"\n";

		// Don't add or modify any code below
		// this comment
		std::getline(std::cin, Input);
	}
}
