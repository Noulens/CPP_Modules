/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waxxy <waxxy@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 22:29:44 by waxxy             #+#    #+#             */
/*   Updated: 2022/12/12 22:29:48 by waxxy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SPAN__HPP__
# define __SPAN__HPP__

# include <iostream>
# include <string>
# include <algorithm>
# include <vector>

class Span
{
	private:
		unsigned int		_SpanSize;
		std::vector<int>	_integers;
	public:
		Span();
		~Span();
		Span(unsigned int N);
		Span &operator = (const Span &assign);
		Span(const Span &copy);

		class	SpanFull: public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("Span is full, nothing added\n");
				}
		};
		class	SpanEmpty: public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("Span is empty or contains only one element\n");
				}
		};
		unsigned int		shortestSpan(void) const;
		unsigned int		longestSpan(void) const;
		void				addNumber(unsigned int n);
		unsigned int		getSize(void) const;
		std::vector<int>	getIntegers(void)const;
		void				addMany(std::vector<int>::iterator begin,
									std::vector<int>::iterator end);
};

#endif
