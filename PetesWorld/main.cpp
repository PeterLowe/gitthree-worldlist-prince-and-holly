// program to find countries in Pete's World
// date November 2022
// author Pete Lowe
// Holly Wilson
// Prince Novotna
// estimated time 120 minutes
// actual time ??
// version 1.0


#include <iostream>


int main()
{
	int region = 0; // user choosen region number
	char letter = ' '; // user choosen letter
	std::cout << "Pete's World select a region\n 1. Americas\n 2. Europe\n 3. Africa\n 4. Asia\n 5. Rest of the World" << std::endl;
	std::cin >> region;
	if (region < 1 || region > 5)
	{
		std::cout << "You need to select a number between 1 and 5" << std::endl;
		return 0;
	}
	std::cout << "Pick a letter from A to A or Z to Z" << std::endl; // change this line each iteration
	std::cin >> letter;
	if (letter < 'A' || letter > 'Z') // not a capital letter
	{
		if (letter < 'a' || letter > 'z') // not a lower case letter
		{
			std::cout << "You need to select a letter from A to Z" << std::endl;
			return 0;
		}
	}
	if (letter == 'a' || letter == 'A') // written by Pete
	{
		if (region == 1)
		{
			std::cout << "Argentina" << std::endl;
		}
		if (region == 2)
		{
			std::cout << "Albania, Austria" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "Algeria, Angola" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "Afghanistan, Armenia, Azerbaijan" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "Australia, Antarctica, Aruba, Anguilla Leeward Islands, Antigua and Barbuda, American Samoa" << std::endl;
		}
	}
	if (letter == 'b' || letter == 'B') //written by Prince
	{
		if (region == 1)
		{
			std::cout << "Bahamas, Barbados, Belize, Bermuda, Bolivia, Brazil" << std::endl;
		}
		if (region == 2)
		{
			std::cout << "Belarus, Belgium, Bosnia and Herzegovina, Bulgaria" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "Benin, Botswana, Burkina Faso, Burundi" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "Bangladesh, Brunei, Bahrain" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "There are no Bs in the rest of the world" << std::endl;
		}
	}
	if (letter == 'c' || letter == 'C') //written by Prince
	{
		if (region == 1)
		{
			std::cout << "Canada, Cayman Islands, Chile, Colombia, Costa Rica, Cuba" << std::endl;
		}
		if (region == 2)
		{
			std::cout << "Croatia, Czech Republic" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "Cameroon, Cape Verde, Central African Republic, Chad, Comoros, Congo, Ivory Coast" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "Cambodia, China, Cristmas Island, Cyprus" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "Cocos Islands, Cook Islands" << std::endl;
		}
	}
	if (letter == 'd' || letter == 'D') //written by Prince
	{
		if (region == 1)
		{
			std::cout << "Dominica, Dominican Republic" << std::endl;
		}
		if (region == 2)
		{
			std::cout << "Denmark" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "Djibouti" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "There are no Ds in Asia" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "There are no Ds in the rest of the world" << std::endl;
		}
	}
	if (letter == 'w' || letter == 'W') //written by Holly
	{
		if (region == 1)
		{
			std::cout << "There are no Ws in the Americas" << std::endl;
		}
		if (region == 2)
		{
			std::cout << "There are no Ws in Europe" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "There are no Ws in Africa" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "There are no Ws in Asia" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "Wallis and Futuna Islands" << std::endl;
		}
	}
	if (letter == 'x' || letter == 'X') // written by Holly
	{
		if (region == 1)
		{
			std::cout << "There are no Xs in the Americas" << std::endl;
		}
		if (region == 2)
		{
			std::cout << "There are no Xs in Europe" << std::endl;
		}
		if (region == 3)
		{
			std::cout << "There are no Xs in Africa" << std::endl;
		}
		if (region == 4)
		{
			std::cout << "There are no Xs in Asia" << std::endl;
		}
		if (region == 5)
		{
			std::cout << "There are no Xs in the rest of the world" << std::endl;
		}
		if (letter == 'y' || letter == 'Y') // written by Holly
		{
			if (region == 1)
			{
				std::cout << "There are no Ys in the Americas" << std::endl;
			}
			if (region == 2)
			{
				std::cout << "There are no Ys in Europe" << std::endl;
			}
			if (region == 3)
			{
				std::cout << "There are no Ys in Africa" << std::endl;
			}
			if (region == 4)
			{
				std::cout << "Yemen" << std::endl;
			}
			if (region == 5)
			{
				std::cout << "There are no Ys in the Rest of the World" << std::endl;
			}
		}
		if (letter == 'z' || letter == 'Z') // written by Pete
		{
			if (region == 1)
			{
				std::cout << "There are no Zs in the Americas" << std::endl; // default negative response
			}
			if (region == 2)
			{
				std::cout << "There are no Zs in Europe" << std::endl;
			}
			if (region == 3)
			{
				std::cout << "Zimbabwe, Zambia" << std::endl;
			}
			if (region == 4)
			{
				std::cout << "There are no Zs in Aisa" << std::endl;
			}
			if (region == 5)
			{
				std::cout << "There are no Zs in rest of the world" << std::endl;
			}

		}
	}


	return 1;
}