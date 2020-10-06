/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Account.class.cpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: tblaudez <tblaudez@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/21 12:53:21 by tblaudez      #+#    #+#                 */
/*   Updated: 2020/10/06 15:02:14 by tblaudez      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Account.class.hpp"
#include <iostream> // cout
#include <ctime> // time, localtime
#include <iomanip> // setw, setfill

Account::Account(int initial_deposit) : _accountIndex(this->_nbAccounts), _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0)
{
	this->_nbAccounts += 1;
	this->_totalAmount += initial_deposit;

	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex
	<< ";amount:" << this->_amount
	<< ";created" << std::endl;
}

Account::Account(void) : _accountIndex(this->_nbAccounts), _amount(0), _nbDeposits(0), _nbWithdrawals(0)
{
	this->_nbAccounts += 1;

	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex
	<< ";amount:" << this->_amount
	<< ";created" << std::endl;
}

Account::~Account(void)
{
	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex
	<< ";amount:" << this->_amount
	<< ";closed"
	<< std::endl;
}

int	Account::getNbAccounts(void)
{
	return Account::_nbAccounts;
}

int	Account::getTotalAmount(void)
{
	return Account::_totalAmount;
}

int	Account::getNbDeposits(void)
{
	return Account::_totalNbDeposits;
}

int	Account::getNbWithdrawals(void)
{
	return Account::_totalNbWithdrawals;
}

void	Account::makeDeposit(int deposit)
{
	const int p_amount = this->_amount;

	this->_amount += deposit;
	this->_nbDeposits += 1;

	this->_totalAmount += deposit;
	this->_totalNbDeposits += 1;

	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex
	<< ";p_amount:" << p_amount
	<< ";deposit:" << deposit
	<< ";amount:" << this->_amount
	<< ";nb_deposits:" << this->_nbDeposits
	<< std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	const int p_amount = this->_amount;

	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex
	<< ";p_amount:" << p_amount
	<< ";withdrawal:";

	if (this->_amount < withdrawal) {

		std::cout << "refused" << std::endl;
		return false;
	}

	this->_amount -= withdrawal;
	this->_nbWithdrawals += 1;

	this->_totalAmount -= withdrawal;
	this->_totalNbWithdrawals += 1;

	std::cout << withdrawal
	<< ";amount:" << this->_amount
	<< ";nb_withdrawals:" << this->_nbWithdrawals
	<< std::endl;

	return true;
}

int		Account::checkAmount(void) const
{
	return this->_amount;
}

void	Account::displayStatus(void) const
{
	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex
	<< ";amount:" << this->_amount
	<< ";deposits:" << this->_nbDeposits
	<< ";withdrawals:" << this->_nbWithdrawals
	<< std::endl;
}


void	Account::_displayTimestamp(void)
{
	const time_t	now = time(0);
	const tm		*ltm = localtime(&now);

	std::cout << "["
	<< 1900 + ltm->tm_year
	<< std::setw(2) << std::setfill('0') << ltm->tm_mon + 1
	<< std::setw(2) << std::setfill('0') << ltm->tm_mday
	<< "_"
	<< std::setw(2) << std::setfill('0') << ltm->tm_hour
	<< std::setw(2) << std::setfill('0') << ltm->tm_min
	<< std::setw(2) << std::setfill('0') << ltm->tm_sec
	<< "] ";
}

void	Account::displayAccountsInfos(void)
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::_nbAccounts
	<< ";total:" << Account::_totalAmount
	<< ";deposits:" << Account::_totalNbDeposits
	<< ";withdrawals:" << Account::_totalNbWithdrawals
	<< std::endl;
}

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;
