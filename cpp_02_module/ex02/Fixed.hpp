/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmago <mmago@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 18:36:39 by mmago             #+#    #+#             */
/*   Updated: 2022/09/10 17:09:56 by mmago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>
# include <cstdlib>
# include <tgmath.h>

# define YELLOW		"\x1b[33m"
# define BLUE		"\x1b[34m"
# define MAGENTA	"\x1b[35m"
# define CYAN		"\x1b[36m"
# define RESET		"\x1b[0m"
# define RED		"\033[31m"

class Fixed{
	private:
		int _fixed;
		static const int _NumberFractBits = 8;
	public:
		Fixed();
		Fixed(int value);
		Fixed(float value);
		Fixed(const Fixed &copy);
		~Fixed();

		Fixed& operator= (const Fixed &equals);

		bool operator== (const Fixed &twoEquals) const;
		bool operator!= (const Fixed &notEquals) const;
		bool operator< (const Fixed &smaller) const;
		bool operator<= (const Fixed &smallerEquals) const;
		bool operator> (const Fixed &bigger) const;
		bool operator>= (const Fixed &biggerEquals) const;

		Fixed operator+ (const Fixed &plus);
		Fixed operator- (const Fixed &minus);
		Fixed operator* (const Fixed &multiplication);
		Fixed operator/ (const Fixed &division);

		Fixed &operator++ (void);
		Fixed operator++ (int);
		Fixed &operator-- (void);
		Fixed operator-- (int);

		static Fixed &min(Fixed &fp1, Fixed &fp2);
		static Fixed &max(Fixed &fp1, Fixed &fp2);
		static const Fixed &min(const Fixed &fp1, const Fixed &fp2);
		static const Fixed &max(const Fixed &fp1, const Fixed &fp2);

		float toFloat(void) const;
		int toInt(void) const;
		int getRawBits(void) const;
		void setRawBits(int const raw);
};

std::ostream& operator<< (std::ostream &out, const Fixed &point);

#endif