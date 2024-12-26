/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/25 21:40:57 by samuele           #+#    #+#             */
/*   Updated: 2024/12/26 15:29:11 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
    std::vector<int> vect;
    vect.push_back(1);
    vect.push_back(2);
    vect.push_back(3);
    
    try
    {
        std::cout << easyfind(vect, 2) << std::endl;
        std::cout << easyfind(vect, 42) << std::endl;
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    
    return 0;
}
