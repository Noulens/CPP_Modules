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

#include "include/PmergeMe.hpp"

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

void PmergeMe::mergeVE(std::vector<int> &vec, int left, int mid, int right)
{
	int i, j, k;
	int n1 = mid - left + 1;
	int n2 = right - mid;

	// create temporary arrays
	std::vector<int> L(n1), R(n2);
	// copy data to temporary arrays
	for (i = 0; i < n1; i++)
		L[i] = vec[left + i];
	for (j = 0; j < n2; j++)
		R[j] = vec[mid + 1 + j];
	// merge the temporary arrays back into vec[left..right]
	i = 0; // initial index of first subarray
	j = 0; // initial index of second subarray
	k = left; // initial index of merged subarray
	while (i < n1 && j < n2)
	{
		if (L[i] <= R[j])
		{
			vec[k] = L[i];
			i++;
		}
		else
		{
			vec[k] = R[j];
			j++;
		}
		k++;
	}
	// copy the remaining elements of L[], if there are any
	while (i < n1)
	{
		vec[k] = L[i];
		i++;
		k++;
	}
	// copy the remaining elements of R[], if there are any
	while (j < n2)
	{
		vec[k] = R[j];
		j++;
		k++;
	}
}

void PmergeMe::merge_insertion_sortVE(std::vector<int> &vec, int left, int right)
{
	// sort the sublist lst[left..right] recursively
	if (right - left > KINSERTIONSORTTHRESHOLD)
	{
		int mid = (left + right) / 2;
		this->merge_insertion_sortVE(vec, left, mid);
		this->merge_insertion_sortVE(vec, mid + 1, right);
		this->mergeVE(vec, left, mid, right);
	}
	else
	{
		// use insertion sort for small subarrays
		for (int i = left + 1; i <= right; i++)
		{
			int key = vec[i];
			int j = i - 1;
			while (j >= left && vec[j] > key)
			{
				vec[j + 1] = vec[j];
				j--;
			}
			vec[j + 1] = key;
		}
	}
}

void PmergeMe::VsortMI(const int &argc, const char **argv)
{
	std::string			line;
	int 				tmp;
	clock_t start;
	clock_t end;

	// A vos marques, prets ? PARTEZ !!!
	start = clock();
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
	// Duplicate
	size_t size = _v.size();
	for (size_t i = 0; i < size; i++)
		for (size_t j = i + 1; j < size; j++)
			if (_v[i] == _v[j])
				throw PmergeMe::PmergeMeException();
	// Sort
	this->merge_insertion_sortVE(this->_v, 0, this->_v.size() - 1);
	end = clock();
	this->_timeV = ((double) (end - start) / CLOCKS_PER_SEC) * 1000000;
}

void PmergeMe::mergeL(std::list<int>::iterator left, std::list<int>::iterator mid, std::list<int>::iterator right)
{
	std::list<int> tmp;

	// move smaller element of two sublists to the temporary list
	std::list<int>::iterator i = left, j = mid;
	while (i != mid && j != right)
	{
		if (*i <= *j)
		{
			tmp.push_back(*i);
			++i;
		}
		else
		{
			tmp.push_back(*j);
			++j;
		}
	}
	// move remaining elements of left sublist to temporary list
	while (i != mid)
	{
		tmp.push_back(*i);
		++i;
	}
	// move remaining elements of right sublist to temporary list
	while (j != right)
	{
		tmp.push_back(*j);
		++j;
	}
	// move sorted elements from temporary list to original list
	i = left;
	std::list<int>::iterator tmp_iter = tmp.begin();
	while (i != right && tmp_iter != tmp.end()) {
		*i = *tmp_iter;
		++i;
		++tmp_iter;
	}
}

void PmergeMe::merge_insertion_sortL(std::list<int> &lst, std::list<int>::iterator left, std::list<int>::iterator right)
{
	// sort the sublist lst[left..right] recursively
	if (std::distance(left, right) > KINSERTIONSORTTHRESHOLD)
	{
		std::list<int>::iterator mid = left;
		std::advance(mid, std::distance(left, right) / 2);
		this->merge_insertion_sortL(lst, left, mid);
		this->merge_insertion_sortL(lst, mid, right);
		this->mergeL(left, mid, right);
	}
	else
	{
		// use insertion sort for small sublists
		for (std::list<int>::iterator i = left; i != right; ++i)
		{
			int key = *i;
			std::list<int>::iterator j = i;
			std::list<int>::iterator h = j;
			--h;
			while (j != left && *h > key)
			{
				*j = *h;
				--j;
				--h;
			}
			*j = key;
		}
	}
}

void	PmergeMe::LsortMI(const int &argc, const char **argv)
{
	std::string			line;
	int 				tmp;
	clock_t start;
	clock_t end;

	// A vos marques, prets ? PARTEZ !!!
	start = clock();
	// Data mgmt
	for (int i = 1; i < argc; i++)
	{
		line += argv[i];
		if (i != argc - 1)
		{
			line += " ";
		}
	}
	for (size_t i = 0; i < line.length(); i++)
		if (!std::isspace(line[i]) && !std::isdigit(line[i]))
			throw PmergeMe::PmergeMeException();
	std::stringstream ss(line);
	while (ss >> tmp)
		this->_l.push_back(tmp);
	// Duplicate
	std::list<int>::iterator it1, it2;
	for (it1 = _l.begin(); it1 != _l.end(); it1++)
		for (it2 = it1; ++it2 != _l.end(); )
			if (*it1 == *it2)
				throw PmergeMe::PmergeMeException();
	// Sort
	this->merge_insertion_sortL(this->_l, this->_l.begin(), this->_l.end());
	end = clock();
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
