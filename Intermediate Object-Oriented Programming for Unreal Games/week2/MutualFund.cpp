// Copyright A.T. Chamillard. All Rights Reserved.

#include "MutualFund.h"

#include <string>

/**
  * Constructor
  * @param Deposit initial deposit
 */
MutualFund::MutualFund(float val) :  InvestmentAccount{val}{

}
// provide constructor implementation here

/**
 * Adds money to the account, deducting a
 * service charge
 * @param Amount amount to add
*/
void MutualFund::AddMoney(const float Amount)
{
	InvestmentAccount::AddMoney( Amount*(1.00 - ServiceChargePercent ) );
}

/**
 * Updates the balance by adding 6%
*/
void MutualFund::UpdateBalance()
{
	InvestmentAccount::AddMoney( GetBalance()*0.06 );
}

/**
 * Provides balance with account type caption
 * @return balance with caption
*/
std::string MutualFund::GetString()
{
	return std::string {"Mutual Fund Balance: "}  +
		std::to_string(GetBalance());
}

