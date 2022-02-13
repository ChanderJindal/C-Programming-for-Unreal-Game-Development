// Copyright A.T. Chamillard. All Rights Reserved.

#include "Digitizer.h"

#include <cctype>

/**
 * Constructor
*/
Digitizer::Digitizer()
{
	// populate your map here

}

/**
 * Converts the given word to the corresponding digit.
 * If the word isn't a valid digit name, returns -1
 * @param Word word to convert
 * @return corresponding digit or -1
*/
int Digitizer::ConvertWordToDigit(std::string word)
{
	// convert to lower case 
	// DO NOT use std::transform, which works fine in Visual
	// Studio and in Xcode, but doesn't work in g++ in the autograder
	// Instead, use a for loop to convert each character to
	// lower or upper case (depending on the case you used
	// in your map
  for(int i=0;i< word.length();i++)
  word[i] = std::toupper(word[i]);
if(word == "ONE"){
  return 1;
}else if(word == "TWO"){
  return 2;
}else if(word == "THREE"){
  return 3;
}else if(word == "FOUR"){
  return 4;
}else if(word == "FIVE"){
  return 5;
}else if(word == "SIX"){
  return 6;
}else if(word == "SEVEN"){
  return 7;
}else if(word == "EIGHT"){
  return 8;
}else if(word == "NINE"){
  return 9;
}else if(word == "ZERO"){
  return 0;
}else{
  return -1;
}

  

	// do the conversion
	// replace the code below with your code
	return -1;
}