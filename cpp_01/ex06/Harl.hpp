/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmago <mmago@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 19:39:43 by mmago             #+#    #+#             */
/*   Updated: 2022/09/05 16:53:41 by mmago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <string>
# include <cstdlib>

# define YELLOW		"\x1b[33m"
# define BLUE		"\x1b[34m"
# define MAGENTA	"\x1b[35m"
# define CYAN		"\x1b[36m"
# define RESET		"\x1b[0m"
# define RED		"\033[31m"

class Harl
{
	private:
	void         debug(void);
    void         info(void);
    void         warning(void);
    void         error(void);
    std::string  _index[4];
    typedef void (Harl:: * FLink)(void);
    FLink        methods[4];
public:
    void         complain(std::string level);
    void         initIndex(void);
    Harl(void);
    ~Harl();
};

#endif