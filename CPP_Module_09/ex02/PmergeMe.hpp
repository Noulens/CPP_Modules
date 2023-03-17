/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnoulens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 13:31:49 by tnoulens          #+#    #+#             */
/*   Updated: 2023/03/17 13:31:51 by tnoulens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP_MODULES_PMERGEME_HPP
# define CPP_MODULES_PMERGEME_HPP


# include <exception>
# include <vector>
# include <iostream>
# include <sstream>
# include <string>
# include <list>
# include <ctime>

class PmergeMe
{
	private:
		std::vector<int> _v;
		std::list<int> _l;
		double _timeV;
		double _timeL;
		std::string _line;
		void VMIsort();
		void LMIsort();
	public:
		PmergeMe();
		~PmergeMe();
		PmergeMe(const PmergeMe &copy);
		PmergeMe &operator=(const PmergeMe &copy);

		std::vector<int> getV() const;
		std::list<int> getL() const;
		double getTimeV() const;
		double getTimeL() const;
		std::string getLine() const;
		void VsortMI(const int &argc, const char **argv);
		void LsortMI(const int &argc, const char **argv);
		void display(const int &argc, const char **argv);

		class	PmergeMeException : public std::exception
		{
			public:
				virtual const char *what() const throw();
		};
};

#endif
