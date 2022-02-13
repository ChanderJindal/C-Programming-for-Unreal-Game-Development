// Copyright A.T. Chamillard. All Rights Reserved.

#include "EmployerSponsoredAccount.h"

#include <string>

/**
 * Constructor
 * @param Deposit initial deposit
*/

// provide constructor implementation here
EmployerSponsoredAccount::EmployerSponsoredAccount(float val) : MutualFund{val}{

}
/**
 * Adds money to the account, adding employer match
 * @param Amount amount to add
*/
void EmployerSponsoredAccount::AddMoney(float Amount)
{
	MutualFund::AddMoney(Amount*2);
}

/**
 * Provides balance with account type caption
* @return balance with caption
*/
std::string EmployerSponsoredAccount::GetString()
{
	return std::string{ "Employer-Sponsored Account Balance: " } +
		std::to_string(GetBalance());
}
