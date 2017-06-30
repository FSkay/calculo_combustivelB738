/* All credits to Petras123450 to creation of code
 original file http://forums.x-plane.org/index.php?/files/file/38444-weightcalcpy/
Felipe Menegat (Skay) convert code to C#
Código para cálculo de combustível B738
*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Função para calcular combustivel no tanque do centro quando tanque das asas estiverem cheios (kg)
float fullkg (ffuel)
	center = ffuel - 7662.4;
	printf("Wing tanks - full (3831.2 kg in each), Center tank - ", center, "kg");
	input("Any key to exit...");

//Function to calc fuel in the wing tanks when center tanks is empty (kg)
float wingkg(wfuel):
    wings = wfuel / 2;
    printf("Wing tanks - ", wings, " kg in each, center tank - empty.");
    input("Any key to exit...");
    

//Function to calc fuel in the center tank when wing tanks are full (lbs)
float fulllbs(ffuel):
    center = ffuel - 17227.6
    printf("Wing tanks - full (8613.8 lbs in each), Center tank - ", center, "lbs");
    input("Any key to exit...");


//Function to calc fuel in the wing tanks when center tanks is empty (lbs)
float winglbs(wfuel)
    wings = wfuel / 2
    printf"Wing tanks - ", wings, " lbs in each, center tank - empty.");
    input("Any key to exit...");

main(){

float ffuel, center, wfuel, fuel, wings,  

//Begining of the program
printf("Weights calculator for X11 B738");
//Unit selection
selection = int(input('Select your units\n1. kg\n2. lbs\n'))
//If metric units are selected:
if selection == 1
    zfw = float(input('Enter ZFW in tonnes (e.g. 56.7): '))
    fuel = float(input('Enter fuel weight in kilograms (e.g. 6314): '))
    //Payload calculation by converting tonnes to kg and subtracting aircraft weight
    payload = zfw * 1000 - 41413
    printf("Your payload weight is ", payload, "kg");
    //Are wing tanks full?
    if fuel > 7662.4:
        fullkg(fuel)
    else if fuel == 7662.4:
        printf("Wing tanks - full (3831.2 kg in each), Center tank - empty.");
    else
        wingkg(fuel)
	else if selection == 2
    	zfw = float(input('Enter ZFW in pounds (e.g. 92800): '))
    	fuel = float(input('Enter fuel weight in pounds (e.g. 13926): '))
     //Payload calculation by subracting aircraft weight
    payload = zfw - 91300
    print("Your payload weight is ", payload, "lbs")
     //Are wing tanks full?
    if fuel > 17227.6
        fulllbs(fuel)
    else if fuel == 17227.6
        printf("Wing tanks - full (8613.8 lbs in each), Center tank - empty.");
    else
        winglbs(fuel)
	else
    	printf("what");
system("pause");
return 0;	
}
