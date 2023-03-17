/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 13:31:40 by tnoulens          #+#    #+#             */
/*   Updated: 2023/03/17 13:31:43 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe() : _v(), _l(), _timeV(), _timeL()
{
}

PmergeMe::~PmergeMe()
{
}

PmergeMe::PmergeMe(const PmergeMe &copy) : _v(), _l(), _timeV(), _timeL()
{
	this->_v = copy._v;
	this->_l = copy._l;
}

PmergeMe &PmergeMe::operator = (const PmergeMe &copy)
{
	this->_v = copy._v;
	this->_l = copy._l;
	this->_timeV = copy._timeV;
	this->_timeL = copy._timeL;
	return (*this);
}

std::vector<int> PmergeMe::getV() const
{
	return (this->_v);
}

std::list<int> PmergeMe::getL() const
{
	return (this->_l);
}

double PmergeMe::getTimeV() const
{
	return (this->_timeV);
}

double PmergeMe::getTimeL() const
{
	return (this->_timeL);
}

std::string PmergeMe::getLine() const
{
	return (this->_line);
}

const char *PmergeMe::PmergeMeException::what() const throw()
{
	return ("Error");
}

void	PmergeMe::VsortMI(const int &argc, const char **argv)
{
	std::string			line;
	int 				tmp;
	clock_t start = clock();
	clock_t end = clock();

	// Data mgmt
	for (int i = 1; i < argc; i++)
	{
		line += argv[i];
		if (i != argc - 1)
			line += " ";
	}
	for (size_t i = 0; i < line.length(); i++)
		if (!std::isspace(line[i]) && !std::isdigit(line[i]))
			throw PmergeMe::PmergeMeException();
	std::stringstream ss(line);
	while (ss >> tmp)
		this->_v.push_back(tmp);
	// Sort

	this->_timeV = ((double) (end - start) / CLOCKS_PER_SEC) * 1000000;
}

void	PmergeMe::LsortMI(const int &argc, const char **argv)
{
	std::string			line;
	int 				tmp;
	clock_t start = clock();
	clock_t end = clock();

	// Data mgmt
	for (int i = 1; i < argc; i++)
	{
		line += argv[i];
		if (i != argc - 1)
			line += " ";
	}
	for (size_t i = 0; i < line.length(); i++)
		if (!std::isspace(line[i]) && !std::isdigit(line[i]))
			throw PmergeMe::PmergeMeException();
	std::stringstream ss(line);
	while (ss >> tmp)
		this->_l.push_back(tmp);
	// Sort

	this->_timeL = ((double) (end - start) / CLOCKS_PER_SEC) * 1000000;
}

void	PmergeMe::display(const int &argc, const char **argv)
{
	std::ostringstream oss;

	for (int i = 1; i < argc; i++)
	{
		this->_line += argv[i];
		if (i != argc - 1)
			this->_line += " ";
	}
	if (this->_l.size() != this->_v.size())
		throw PmergeMe::PmergeMeException();
	std::list<int>::iterator it = this->_l.begin();
	for (size_t i = 0; i < this->_v.size(); i++)
	{
		if (this->_v[i] != *it)
			throw PmergeMe::PmergeMeException();
		++it;
		oss << this->_v[i];
		if (i != this->_v.size() - 1)
			oss << " ";
	}
	std::cout << "Before: " << this->getLine() << std::endl;
	std::cout << "After: " << oss.str() << std::endl;
	std::cout << "Time to process a range of " << this->_v.size() << " elements with std::vector: " << this->_timeV << " us" << std::endl;
	std::cout << "Time to process a range of " << this->_l.size() << " elements with std::list: " << this->_timeL << " us" << std::endl;
}
