// Copyright A.T. Chamillard. All Rights Reserved.

#pragma once

#include <unordered_map>

/**
 * Converts words to digits
*/
class Digitizer
{
private:
	// declare your map variable here

public:
	/**
	 * Constructor
	*/
	Digitizer();

	/**
	 * Converts the given word to the corresponding digit.
     * If the word isn't a valid digit name, returns -1 
	 * @param Word word to convert
	 * @return corresponding digit or -1
	*/
	int ConvertWordToDigit(std::string Word);
};

