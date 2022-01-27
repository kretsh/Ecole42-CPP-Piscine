/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cowen <cowen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 20:28:20 by cowen             #+#    #+#             */
/*   Updated: 2022/01/24 16:47:29 by cowen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>
#include <iostream>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit){
	t::_displayTimestamp();	
	this->_accountIndex = t::_nbAccounts;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	this->_totalAmount += initial_deposit;
	t::_nbAccounts++;

	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "created" << std::endl;
};

Account:: ~Account(){
	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "closed" << std::endl;
};

void	Account::_displayTimestamp(void){
	std::time_t result = std::time(nullptr);
	struct tm *time_now = localtime(&result);

	std::cout << "[" << time_now->tm_year + 1900;
	if (time_now->tm_mon + 1 < 10)
		std::cout << "0";	
	std::cout << time_now->tm_mon + 1;
	if (time_now->tm_mday < 10)
		std::cout << "0";	
	std::cout << time_now->tm_mday;
	if (time_now->tm_hour < 10)
		std::cout << "0";
	std::cout << "_";
	std::cout << time_now->tm_hour;
	if (time_now->tm_min < 10)
		std::cout << "0";	
    std::cout << time_now->tm_min;
	if (time_now->tm_hour < 10)
		std::cout << "0";
	if (time_now->tm_sec < 10)
		std::cout << "0";
    std::cout << time_now->tm_sec << "] ";
};

void	Account::displayAccountsInfos(void){
	t::_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";";
	std::cout << "total:" << getTotalAmount() << ";";
	std::cout << "deposits:" << getNbDeposits() << ";";
	std::cout << "withdrawals:" << getNbWithdrawals() << ";";
	std::cout << std::endl;
};

void Account::displayStatus(void) const{
	t::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "deposits:" << this->_nbDeposits << ";";
	std::cout << "withdrawals:" << this->_nbWithdrawals << ";";
	std::cout << std::endl;
};

void Account::makeDeposit(int deposit){
	t::_displayTimestamp();
	this->_nbDeposits++;
	this->_totalNbDeposits++;
	this->_totalAmount += deposit;
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->_amount << ";";
	std::cout << "deposits:" << deposit << ";";
	this->_amount += deposit;
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "deposits:" << this->_nbDeposits << ";";
	std::cout << std::endl;
};

bool Account::makeWithdrawal(int withdrawal){
	t::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->_amount << ";";
	if (this->_amount < withdrawal){
		std::cout << "withdrawal:refused" << std::endl;
		return (false);
	}
	this->_nbWithdrawals++;
	this->_totalNbWithdrawals++;
	std::cout << "withdrawals:" << withdrawal << ";";
	this->_totalAmount -= withdrawal;
	this->_amount -= withdrawal;
	std::cout << std::endl;
	return (true);
};

int	Account::getNbAccounts(void){
	return (_nbAccounts);
};

int	Account::getTotalAmount(void){
	return (_totalAmount);
};

int Account::getNbDeposits(void){
	return (_totalNbDeposits);
};

int Account::getNbWithdrawals(void){
	return (_totalNbWithdrawals);
};