// Copyright A.T. Chamillard. All Rights Reserved.

#pragma once

#include "MutualFund.h"

// Remove the /* and */ as indicated below to make this
// work with the automated grader
// the code is commented out so the project compiles

/**
 * An employer-sponsored account
*/
class EmployerSponsoredAccount :
    public MutualFund
{
public:
    /**
     * Constructor
     * @param Deposit initial deposit
    */

    // remove the /* below
    
    EmployerSponsoredAccount(float Deposit);
    
    // remove the */ above

    /**
     * Adds money to the account, adding employer match 
     * @param Amount amount to add
    */
    virtual void AddMoney(float Amount) override;

    /**
     * Provides balance with account type caption
    * @return balance with caption
    */
    virtual std::string GetString() override;
};
