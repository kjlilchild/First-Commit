#include <iostream>



int main () {

	std::string name;
	
	std::cout << "\n";
	std::cout << "*********************************************TURN ON CAPS LOCK******************************************************\n";
	std::cout << "\n\n";
	std::cout << "'HELLO..............HELLO..................' Someone yells while shaking you in an attempt to wake you.\n\n";
	std::cout << "'HEY........HEY........HEY.............WAKE UP!.......COME ON!.......WE NEED YOU TO WAKE UP!\n\n";
	std::cout << "The aggressive nature of the yelling and shaking prompts you awake. You are extremely groggy......................\n";
	std::cout << "..................................................................................................................\n";
	std::cout << "..................................You attempt to open your eyes...................................................\n";
	std::cout <<  ".................................................................................................................\n"; 
	std::cout << "Your eyes struggle to adapt to the bright lighting of the room....................................................\n";
	std::cout << "............................................Your eyes slowly begin to adjust......................................\n";
	std::cout << "..................................................................................................................\n\n";
	std::cout << "Now with eyes wide open and the fog in your brain clearing, you see a person in a lab-coat standing above you.\n\n";
	std::cout << "'What is your name?' The person in the lab-coat asks you.\n\n";
	std::cout << "'Who are you?.......where am I?' You ask as you struggle to wake.\n\n";
	std::cout << "'I will ask you one more time. What is your name?'\n\n";
	std::cout << "****************PLEASE INPUT YOUR NAME*****************\n";
	std::cout << "=======================================================\n";
	std::cin >> name;
	std::cout << "\n\n";
	std::cout << "'Hello " << name << "............ I am glad you have not forgotten your name............'\n\n";
	std::cout << "'My name is Doctor Miller and you are at a Military hospital in the Province of British Alberta.' States Dr. Miller.\n\n";
	std::cout << "'Military hospital?.......Province of British Alberta?' you exclaim confused.........\n\n";
	std::cout << "'Yes a military hospital in British Alberta. states Doctor Miller.'\n\n";
	std::cout << "'The global pandemic of 2020 had devestating effects on the world. Canada was fractured, alliances were broken and\n";
	std::cout << "borders were redrawn. The Yukon merged with Alaska and B.C merged with Alberta. Eventually both provinces were annexed\n";
	std::cout << "by Russia. So the province of British Alberta is now under the Russian Federation. With the collapse of the west and\n";
	std::cout << "the collaps of the healthcare system. The Russian Federation deployed the military to oversee health and education.\n\n";
	std::cout << "You struggle to comprehend what Miller has said. 'I do not understand? What year is it? How long have I been here?\n\n"; 
	std::cout << "'All of your questions will be answered soon'. Declares Dr. Miller. 'Right now I need you to consent to the latest COVID\n";
	std::cout << "vaccine.......'\n\n";
	std::cout << "***************WHAT DO YOU CHOOSE?***************\n";
	std::cout << "=================================================\n";

	char choice1; 

	for (int i = 0; i < 3 && choice1 != 'A' && choice1 != 'B'; i++) {
		
		std::cout << "Enter A if you DO consent to the vaccine.\n";
		std::cout << "Enter B if you DO NOT consent to the vaccine\n\n";
		std::cin >> choice1;
	}

	if (choice1 != 'A' && choice1 != 'B') {	

		std::cout << "You have entered an Invalid answer.\n";
		std::cout << "Goodbye.\n\n";
		return 0;
	}
	else if (choice1 == 'A') {

		std::cout << "'Yes I will take it. I am just doing my part and we should not question medical science.' You exclaim happily.\n\n";
		std::cout << "Doctor Miller walks over to a large freezer. He extracts a small vile with the letters 'nWo' on the label. He\n";
		std::cout << "also grabs a needle. He fills the syringe with the mRNA vaccine and injects the toxins into your upper arm.\n";
		std::cout << "You feel the NANObots coursing through your veins and you realize the mistake you have made. You fall to the\n";
		std::cout << "floor as your soul leaves your body. Now your flesh a host for AI.\n\n";
		std::cout << "*************YOUR STORY ENDS HERE*******************\n";
		std::cout << "====================================================\n";
		return 0;
	}
		
	std::cout << "\n\n";
	std::cout << "'I will not consent to any vaccine. Especially the Covid vaccine. I may not know where I am, or how the hell I\n";
	std::cout << "got here, BUT! I remember what the mRNA vaccines did to the world.' You proclaim to Doctor Miller.\n\n";
	std::cout << "'The mRNA vaccines are effective. Both state media and healthcare agree they are indeed safe.' says Miller.\n\n";
	std::cout << "'The state says they are safe? The state has always said they are safe! Billions are dead! The vaccines caused\n";
	std::cout << "wide spread loss in 2020. I will refuse to take an experiment!' You passionately declare to Miller.\n\n";
	std::cout << "'The state does not recoginze that many losses due to vaccines in 2020. That really doesnt matter anyway.\n";
	std::cout << "The year is 2035. All citizens of earth are required to have a COVID vaccine. The state cares for your safety.\n";
	std::cout << "So I will ask you one more time. Do you consent to the vaccine? Please think carefully about your decision!'\n\n";
	

	std::cout << "***************WHAT DO YOU CHOOSE***************\n";
	std::cout << "================================================\n\n";
	
	
	char choice2;

	for (int i = 0; i < 3 && choice2 != 'A' && choice2 != 'B' && choice2 != 'C'; i++) {

		std::cout << "ENTER 'A': You have changed your mind and consent to Doctor Millers request to take the COVID vaccine?\n";
		std::cout << "ENTER 'B': You notice the door to the room is open. Attempt to escape through the open door?\n";
		std::cout << "ENTER 'C': You see the loaded vaccine syringe on the table. Stab Doctor Miller in the neck?\n\n";
		std::cin >> choice2;
	}		

	std::cout << "\n";

	switch (choice2) {

		case 'A':
	
			std::cout << "'Yes I will take it. I am just doing my part and we should not question medical science.' You declare.\n\n";
			std::cout << "Doctor Miller walks over to a large freezer. He extracts a small vile with the letters 'nWo' on the label. He\n";
			std::cout << "also grabs a needle. He fills the syringe with the mRNA vaccine and injects the toxins into your upper arm.\n";
			std::cout << "You feel the NANObots coursing through your veins and you realize the mistake you have made. You fall to the\n";
			std::cout << "floor as your soul leaves your body. Now your flesh a host for AI.\n\n";
			std::cout << "*************YOUR STORY ENDS HERE*******************\n";
			std::cout << "====================================================\n";
			return 0;

		case 'B':
			std::cout << "You leap off of the bed and head for the door! On your way out of the room Doctor Miller attempts to stop you.\n";
			std::cout << "You crash into him causing him to stumble. He falls backward, his head smashing through a glass window. The\n";
			std::cout << "glass collapses and cuts through Doctor Millers juggular. You can hear Doctor Millers dying breaths as you\n";
			std::cout << "run through the doorway and enter the hallway of the military hospital.\n\n";
			break;

		case 'C':
			std::cout << "You grab the syringe from the table and stab Doctor Miller in the neck. You inject him with the COVID vaccine.\n";
			std::cout << "He begins screaming in pain. He drops to the floor and begins shaking violently. The NANObots coursing through\n";
			std::cout << "his veins. You hear his last dying breath as you enter the hallway of the military hospital.\n\n";
			break;

		default:
			
			std::cout << "Invalid Answer.\n";
			std::cout << "Goodbye.\n";
			return 0;
			
	}

	std::cout << "The hallway is dimly lit and you can hear a mixture of english and russian dialects coming from other rooms. You slowly \n";
	std::cout << "creep down the hallway. Your senses tell you that the hospital has not been maintained. There are lights flickering and \n";
	std::cout << "pools of water collecting on the floor.\n\n";
	std::cout << "'What the hell is going on here? This looks like a hospital from a horror movie.' you exclaim to yourself.\n\n";
	std::cout << "You continue down the hallway. Your breathing is heavy and each step you take carefully, so as not to make noise. You round\n";
	std::cout << "the corner. About 20 feet down the hallway you see two armed guards. They both notice you.\n\n";
	std::cout << "'HEY YOU THERE! STOP WHERE YOU ARE!' One of the guards yells.......\n\n";
	std::cout << "Your impulse is to turn around, but you also notice a doorway on both your left and right side..................\n\n";

	char choice3;

	std::cout << "***************WHAT DO YOU CHOOSE***************\n";
	std::cout << "================================================\n\n";
	
	for (int i = 0; i < 3 && choice3 != 'A' && choice3 != 'B' && choice3 != 'C'; i++) {

		std::cout << "Enter 'A': To turn around and go back down the hallway you just came from.\n";
		std::cout << "Enter 'B': To attempt to enter the door to your left.\n";
		std::cout << "Enter 'C': To attempt to enter the door to your right.\n\n";
		std::cin >> choice3;

	}

	std::cout << "\n";

	if (choice3 != 'A' && choice3 != 'B' && choice3 != 'C') {

		std::cout << "Invalid answer.\n";
		std::cout << "Goodbye.\n\n";
		return 0;
	}
	else if (choice3 == 'A') {

		std::cout << "You turn around and begin to run back down the hallway in which you had just came. As you are nearing the room \n";
		std::cout << "Doctor Miller died, two armed guards emerge.You begin to run faster and manage to run by the two guards. At that moment\n";
		std::cout << "an alarm bell rings throughout the hospital. A woman's voice comes over the intercom and announces a 'CODE YELLOW.'\n";
		std::cout << "As you run down the hallway with four guards in persuit you hear gunshots. One of the guards opens fire, shooting you\n";
		std::cout << "in the back multiple times. You fall to the floor and feel little pain as the world goes black..............\n\n";
		std::cout << "*************YOUR STORY ENDS HERE*******************\n";
		std::cout << "====================================================\n";
		return 0;
	}
	else if (choice3 == 'B') {

		std::cout << "You make a hard left turn and run to the door. You can hear the guards continue to yell from down the hallway. Your hand\n";
		std::cout << "reaches for the doorknob and you attempt to turn the handle. Your heart sinks as you realize the door is locked. An alarm\n";
		std::cout << "begins to ring and a woman's voice can be heard over the hospital intercom....CODE YELLOW, I REPEAT, CODE YELLOW. At that\n";
		std::cout << "moment you hear gunshots. You feel a sharp stabbing pain in your back and legs. You fall to the floor and are unable to move.\n";
		std::cout << "Your vision start to tunnel. You can hear a mixture of english and russian as you fade away into the darkness.\n\n";
		std::cout << "*************YOUR STORY ENDS HERE*******************\n";
		std::cout << "====================================================\n";
		return 0;

	}
	else if (choice3 == 'C') {

		std::cout << "You make a hard right turn and run to the door. You can hear the guards continue to yell from down the hallway. Your hand\n";
		std::cout << "reaches for the doorknob and you attempt to turn the handle. The handle turns and the door flies open as you burst through.\n";
		std::cout << "You are inside a stairwell. You realize you are in a building fire escape. You begin to descend the stairs. You find the exit\n";
		std::cout << "and run out of the hospital.  You enter a busy city street. All of the people are wearing full safety suits and respirators.\n";
		std::cout << "People stop and stare at you. You do the same to them. They are amazed that you are not wearing your suit and respirator. They\n";
		std::cout << "become enraged by your failure to comply. They proceed to attack you in a mob-rage. The last thing you hear are their enraged\n";
		std::cout << "screams as they must eliminate you. Seeing you outside breathing without a respirator, has proving the government is lying to\n";
		std::cout << "them, but the state knows best and if we just do our part a little longer it will all go away!\n\n";
		std::cout << "*************YOUR STORY ENDS HERE*******************\n";
		std::cout << "====================================================\n";
		return 0;
	}

}

