/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 17:30:09 by asoudani          #+#    #+#             */
/*   Updated: 2025/06/16 17:39:14 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

#include <iostream>
#include <ctime>
#include <iomanip>

using namespace std;

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

// [19920104_091532] index:0;amount:42;created
Account::Account( int initial_deposit )
{
    static int index = 0;
    
    this->_nbAccounts++;
    _totalAmount += initial_deposit;
    _accountIndex = index++;
    _amount = initial_deposit;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    
    _displayTimestamp();
    cout <<" index:"<< "\033[34m" <<index<< "\033[0m"
        <<";amount:"<< "\033[34m" <<initial_deposit
        << "\033[0m"<<";created\n";
}


int	Account::getNbAccounts( void )
{
    return (Account::_nbAccounts);
}

int	Account::getTotalAmount( void )
{
    return (Account::_totalAmount); 
}

int	Account::getNbDeposits( void )
{
    return (Account::_totalNbDeposits);
}
int	Account::getNbWithdrawals( void )
{
    return (Account::_totalNbWithdrawals);
}

void Account::_displayTimestamp()
{
    time_t now = time(0);
    tm* localTime = localtime(&now);

    std::cout << "[" <<(1900 + localTime->tm_year)
        << std::setfill('0') << std::setw(2) << (localTime->tm_mon + 1)
        << std::setfill('0') << std::setw(2) << localTime->tm_mday 
        << "_"
        << std::setfill('0') << std::setw(2) << localTime->tm_hour
        << std::setfill('0') << std::setw(2) << localTime->tm_min
        << std::setfill('0') << std::setw(2) << localTime->tm_sec << "]";
}

void	Account::displayAccountsInfos( void )
{

    _displayTimestamp();
    cout << " accounts:"<< "\033[34m" <<_nbAccounts
        << "\033[0m"<<";total:"<< "\033[34m" <<_totalAmount
        << "\033[0m"<<";deposits:"<< "\033[34m" <<_totalNbDeposits
        << "\033[0m"<<";withdrawals:"<< "\033[34m" <<_totalNbWithdrawals
        << "\033[0m"<<endl;
}


void	Account::makeDeposit( int deposit ){
    _nbDeposits++;
    _totalNbDeposits++;

    _displayTimestamp();
    cout << " index:"<< "\033[34m" <<_accountIndex<< "\033[0m"<<";p_amount:"
        << "\033[34m" <<_amount<< "\033[0m"<<";deposit:"
        << "\033[34m" <<deposit<< "\033[0m"<<";amount:"<< "\033[34m" 
        <<_amount + deposit<< "\033[0m"<<";nb_deposits:"<< "\033[34m" 
        <<_nbDeposits<<"\033[0m"<<endl;

    _amount += deposit;
    _totalAmount += deposit;
}

bool	Account::makeWithdrawal( int withdrawal )
{
    if (_amount > withdrawal)
    {
        _totalNbWithdrawals++;
        _nbWithdrawals++;
        _displayTimestamp();
        cout << " index:"<< "\033[34m" <<_accountIndex
            << "\033[0m"<<";p_amount:"<< "\033[34m" <<_amount<< "\033[0m"
            <<";withdrawal:"<< "\033[34m" <<withdrawal<< "\033[0m"<<";amount:"
            << "\033[34m"<<_amount - withdrawal<< "\033[0m"<<";nb_withdrawals:"
            << "\033[34m"<<_nbWithdrawals<<"\033[0m"<<endl;

        _amount -= withdrawal;
        _totalAmount -= withdrawal;
        return true;
    }
    // [19920104_091532] index:5;p_amount:23;withdrawal:refused
    _displayTimestamp();
    cout << " index:"<< "\033[34m" <<_accountIndex
        << "\033[0m"<<";p_amount:"<< "\033[34m" <<_amount
        << "\033[0m"<<";withdrawal:refused\n";
    return false;
}


void	Account::displayStatus( void ) const
{
    _displayTimestamp();
    cout << " index:"<< "\033[34m" <<_accountIndex<< "\033[0m"<<";amount:"
        << "\033[34m" <<_amount<< "\033[0m"<<";desposits:"<< "\033[34m" <<_nbDeposits
        <<  "\033[0m"<<";withdrawals:"<< "\033[34m" <<_nbWithdrawals<< "\033[0m"<<endl;
}


int		Account::checkAmount( void ) const
{
    return _amount;
}

Account::~Account( void )
{
    _displayTimestamp();
    cout <<" index:"<< "\033[34m" <<_accountIndex << "\033[0m"
        <<";amount:"<< "\033[34m" <<_amount<< "\033[0m"<<";closed\n";    
}