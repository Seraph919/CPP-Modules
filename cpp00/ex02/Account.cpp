/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 17:30:09 by asoudani          #+#    #+#             */
/*   Updated: 2025/06/02 17:56:09 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

Account::Account( int initial_deposit ){
    
}

int	Account::getNbAccounts( void ){
    return (Account::_nbAccounts);
}

int	Account::getTotalAmount( void ){
    return (Account::_totalAmount); 
}

int	Account::getNbDeposits( void ){
    return (Account::_totalNbDeposits);
}
int	Account::getNbWithdrawals( void ){
    return (Account::_totalNbWithdrawals);
}
void	Account::displayAccountsInfos( void ){
    
}

void	Account::_displayTimestamp( void ){
    
}

void	Account::makeDeposit( int deposit ){
    
}

bool	Account::makeWithdrawal( int withdrawal ){
    
}

int		Account::checkAmount( void ) const{
    
}

void	Account::displayStatus( void ) const{
    
}

void	Account::makeDeposit( int deposit ){

}

bool	Account::makeWithdrawal( int withdrawal ){

}

int		Account::checkAmount( void ) const{

}

void	Account::displayStatus( void ) const{
    
}

Account::~Account( void ){
    
}