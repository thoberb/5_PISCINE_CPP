/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberthod <bberthod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 20:47:42 by bberthod          #+#    #+#             */
/*   Updated: 2024/04/18 14:15:45 by bberthod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include <iostream>
#include <stdlib.h>
#include "Intern.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	try {
		Intern	someRandomIntern;
		AForm*	form;
		Bureaucrat Charles("Charles", 30);

		form = someRandomIntern.makeForm("robotomy request", "Bender");
		form->beSigned(Charles);
		form->execute(Charles);

		delete form;
	}
	catch (std::exception & e) {
		std::cerr << "Exception caught : " << e.what() << std::endl;
	}
}


