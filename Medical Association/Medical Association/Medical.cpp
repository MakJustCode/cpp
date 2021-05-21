#include <iostream>
#include <string>

int main()
{
	//Medical Program 

	std::string answer; 

	std::cout << "Enter Y for Yes and N for No " << std::endl <<std::endl;

	std::cout << "Do you have a fever ? " << std::endl; 
	std::cin >> answer; 

	if (answer == "Y" || answer == "y")
	{
		std::cout << "Are you coughing ? " << std::endl;
		std::cin >> answer;
		
		if (answer == "Y" || answer == "y")
		{
			std::cout << "Are you short of breath or wheezing or coughing up phelgm ? " << std::endl;
			std::cin >> answer;
			
			if (answer == "Y" || answer == "y")
			{
				std::cout << "Possibilities include pneomonia or infection of airways "; 
			}

			else if (answer == "N" || answer == "n")
			{
				std::cout << "Do you have a headache ? " << std::endl;
				std::cin >> answer;

				if (answer == "Y" || answer == "y")
				{
					std::cout << " Possibilities include viral infection "; 
				}

				else if (answer == "N" || answer == "n")
				{
					std::cout << "Do you have aching bones or aching joints ? " << std::endl;
					std::cin >> answer;

					if (answer == "Y" || answer == "y")
					{
						std::cout << "Possibilities intclude viral infection ";
					}

					else if (answer == "N" || answer == "n")
					{
						std::cout << "Do you have a rash ?" << std::endl;
						std::cin >> answer;

						if (answer == "Y" || answer == "y")
						{
							std::cout << "Insufficient information to list possibilities ";
						}
					
						else if (answer == "N" || answer == "n")
						{
							std::cout << "Do you have a sore throat ?" << std::endl; 
							std::cin >> answer;

							if (answer == "Y" || answer == "y")
							{
								std::cout << "Possibilities include throat infection ";
							}

							else if (answer == "N" || answer == "n")
							{
								std::cout << "Do you have back pain just above the waist with chills and fever ?" << std::endl;
								std::cin >> answer;

								if (answer == "Y" || answer == "y")
								{
									std::cout << "Possibilities include kidney infection "; 
								}

								else if (answer == "N" || answer == "n")
								{
									std::cout << "Do you have pains urinating or are you urinating more often ?" << std::endl; 
									std::cin >> answer;

									if (answer == "Y" || answer == "y")
									{
										std::cout << "Possibilities include urinary tract infection ";
									}

									else if (answer == "N" || answer == "n")
									{
										std::cout << "Have you spent the day in the sun or in hot conditions ?" << std::endl;
										std::cin >> answer;

										if (answer == "Y" || answer == "y")
										{
											std::cout << "Possibilties include sunstroke or heat exhaustion ";
										}

										else if (answer == "N" || answer == "n")
										{
											std::cout << "Insufficiant  informations to list possibilities ";
										}
									}
								}
							}
						}
					}
				}
			}
		}

		else if (answer == "N" || answer == "n")
		{
			std::cout << "Do you have a headache?" << std::endl; 
			std::cin >> answer;
			
			if (answer == "Y" || answer == "y")
			{
				std::cout << "Are you experiencing any of the following pain when bending your head forward, nausea or vomitting, bright light hurting your eyes drowsiness or confusion ?" << std::endl;
				std::cin >> answer;

				if (answer == "Y" || answer == "y")
				{
					std::cout << "Possibilities include maningitis ";
				}

				else if (answer == "N" || answer == "n")
				{
					std::cout << "Are you vomiting or have you had diarrhea ?" << std::endl;
					std::cin >> answer;

					if (answer == "Y" || answer == "y")
					{
						std::cout << "Possibilities include digestive tract infection ";
					}
				}
			}

			else if (answer == "N" || answer == "n")
			{
				std::cout << "Are you vomiting or have you had diarrhea ?" << std::endl;
				std::cin >> answer;

				if (answer == "Y" || answer == "y")
				{
					std::cout << "Possibilities include digestive tract infection ";
				}
			}
		}
	}

	else
	{
		std::cout << "Insufficent information to list possibilities " << std::endl;
	}


	system("Pause"); 

	return 0;
}