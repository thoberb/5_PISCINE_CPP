/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bberthod <bberthod@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 18:55:06 by bberthod          #+#    #+#             */
/*   Updated: 2024/03/05 18:06:40 by bberthod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    int i = 0;
    const Animal* j[20];

    while (i < 20)
    {
        if (i < 10)
            j[i] = new Dog();
        else
            j[i] = new Cat();

        i++;  // Increment after assigning the value to avoid off-by-one error
    }

    j[5]->makeSound();
    j[16]->makeSound();

    // Clean up memory
    for (i = 0; i < 20; i++)
        delete j[i];

    return 0;
}

