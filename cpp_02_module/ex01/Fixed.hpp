/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmago <mmago@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 18:36:39 by mmago             #+#    #+#             */
/*   Updated: 2022/09/10 17:10:00 by mmago            ###   ########.fr       */
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
		Fixed& operator= (const Fixed &equals);
		~Fixed();
		float toFloat(void) const;
		int toInt(void) const;
		int getRawBits( void ) const;
		void setRawBits( int const raw );
};

std::ostream& operator<< (std::ostream &out, const Fixed &point);

#endif