// FallingDistance.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip> // For std::setw

int main() {  // corps principal du program
    const int Entries = 10; // Nombre de fois on va te demander d'entrer une valeur pour le temps
    int times[Entries];  // valeur entiere dans une matrice colone
    double distances[Entries];  // valeur avec decimal dans une matrice colone pour les distances en metre
    double distances2[Entries];  // valeur avec decimal dans une matrice coloe pour les distances en pieds
    const double g = 9.81;// valeur pour acceleration de la pesanteur
    const int minValue = 1;// valeur minimum pour le temps en seconds
    const int maxValue = 60;// valeur maximum pour le temps en seconds

    std::string title = "Fallinng distance"; // character en lettre pour titre du program
    std::string name = "Deo Mulumba";// character en lettre pour le nom de l utilisateur
    std::string course = "COSC-1436, FALL 2024";// character en lettre et chiffre pour le cours et le semestre



    std::cout << "program title: " << title << std::endl; // requisition du nom du program 
    std::cout << "your name: " << name << std::endl;// requisition du nom de l utilisateur
    std::cout << "course and semester: " << course << std::endl;// requisition du nom du cours et le semestre

    
    for (int i = 0; i < Entries; ++i) { // si i est inferieur a entries ajoute 1
        std::cout << "Enter value for time " << (i + 1) << ": ";// demande une valeur pour le nombre de seconde de chute libre
       // std::cin >> times[i];// place la le nombre de seconde dans times
        while (true) {    // pendant que ceci est vrai
            std::cin >> times[i];

            if (std::cin.fail() || times[i] < minValue || times[i] > maxValue) {     // compare la valeur contenue dans times avec le minimum et le maximum pour second
                std::cin.clear(); // efface l erreur
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // net la valeur erronee de cotE
                std::cout << "Error: Invalid input. Please enter a valid value for time " << minValue << " and " << maxValue << ": "; // demande une autre valeur pour le temps

            }
            else {     // sinon

                break; // saute en dehors des parentheses
            }

            
        }
        distances[i] = 0.5 * g * times[i] * times[i];// formule pour calculer la distance de la chute libre
        distances2[i] = 3.28084*0.5 * g * times[i] * times[i];// formule pour calculer la distance de la chute libre
        

        
    }
    int answer;
   // std::string answer; // cree un character en lettre
    std::cout << "what units do you want for your distances? (1 for meters/2 for feet): "; ///  pose la question en quelle unitE on veut exprimer la distance
    std::cin >> answer;  //  place la reponse dans answer
    if (answer==1) {   // si la reponse est en metre

        // cree le tableau avec les valeur pour distances en metre
        std::cout << "\n--- Table for times vs distances ---\n";
        std::cout << std::setw(15) << "times" << std::setw(15) << "distances(meters)" << std::endl;
        std::cout << std::string(30, '-') << std::endl;

        for (int i = 0; i < Entries; ++i) {
            std::cout << std::setw(15) << times[i] << std::setw(15) << distances[i] << std::endl;
        }
    }
    else if (answer==2) { /// ou si la reponse est en pieds 

        // cree le tableau avec valeur pour distance en pieds

        std::cout << "\n--- Table for times vs distances ---\n";
        std::cout << std::setw(15) << "times" << std::setw(15) << "distances(feet)" << std::endl;
        std::cout << std::string(30, '-') << std::endl;

        for (int i = 0; i < Entries; ++i) {
            std::cout << std::setw(15) << times[i] << std::setw(15) <<  distances2[i] << std::endl;
        }
    }
    else {   // si aucun des deux
        std::cout << "Invalid input. Please enter 'meters' or 'feet'." << std::endl;  // repose la question pour savoir l unitE de mesure
    }

    

    return 0; // termine le program
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
