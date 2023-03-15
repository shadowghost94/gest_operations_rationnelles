#include "tableaux.h"
#include "structure.h"
#include "op_classes.h"

using namespace std;


int main(){
    int op,recuper;

cout<<"1- Operation sur les nombres rationnels representes par des tableaux "<<endl<<endl;
cout<<"2- Operation sur les nombres rationnels representes par des structures "<<endl<<endl;
cout<<"3- Classes des expressions rationnelles "<<endl<<endl<<endl;
cout<<"Choisissez un numéro en fonction la represention que vous souhaitez: ";
cin>>op;

    if(op==1){
        cout<<"A- Operation standard (addition,multiplication,division, soustraction)"<<endl<<endl;
        cout<<"B- Autres operations "<<endl<<endl<<endl;
        cout<<"Choisissez une lettre: ";
        char letter;
        cin>>letter;

            if(letter=='A'){
                    cout<<"1- Addition de deux rationnels"<<endl;
                    cout<<"2- Addition d'un rationnels et d'un entier"<<endl;
                    cout<<"3- Addition de deux rationels normalises "<<endl;
                    cout<<"4- Multiplication de deux rationels "<<endl;
                    cout<<"5- Multiplication d'un rationel par un entier"<<endl;
                    cout<<"6- Multiplication de deux rationnels normalises"<<endl;
                    cout<<"7- Division de deux rationnels"<<endl;
                    cout<<"8- Division d'un rationel par un entier"<<endl;
                    cout<<"9- Division d'un rationel normalise par un autre rationel normalise"<<endl;
                    cout<<"10- Soustraction de deux rationnels"<<endl;
                    cout<<"11- Soustraction d'un rationnel et d'un entier "<<endl;
                    cout<<"12- soustraction de deux rationnel normalises"<<endl<<endl;
                    cout<<"Choisissez un chiffre: ";
                    cin>>recuper;

                    switch(recuper){
                        case 1: add_ratio_ratio();
                            break;

                        case 2: add_ratio_int();
                            break;

                        case 3: add_two_ratio_norm();
                            break;

                        case 4:multi();
                            break;

                        case 5: multi_int();
                            break;

                        case 6: multi_ratio_ratio_norm();
                            break;

                        case 7: div();
                            break;

                        case 8: div0();
                            break;

                        case 9: div1();
                            break;

                        case 10: Soustract1();
                            break;

                        case 11: Soustract2();
                            break;

                        case 12: Soustract3();
                            break;
                    }
            }else{
                if(letter=='B'){
                    cout<<"1- Inverse d'un nombre rationnel "<<endl;
                    cout<<"2- Normalisation d'un nombre rationel"<<endl;
                    cout<<"3- Somme et produit de n nombres rationnels"<<endl;
                    cout<<"4- Affichage d'un nombre rationnel sous le format (num / den) "<<endl;
                    cout<<"5- Comparaison de deux rationnels r1 et r2 "<<endl;
                    cout<<"6- Classement des representants reels de n nombres rationnels"<<endl;
                    int recuper;
                    cin>>recuper;

                    switch(recuper){
                        case 1: inverse();
                            break;

                        case 2: normalise();
                            break;

                        case 3: cout<<"desole nous n'avons pas trouve d'algorithme pour cette operation.";
                            break;

                        case 4: affich();
                            break;

                        case 5: relation_ordre();
                            break;

                        case 6: cout<<"desole nous n'avons pas trouve d'algorithme pour cette operation.";
                            break;
                }

                }else{
                    cout<<"vous devez utiliser la lettre A ou B (a ecrire en majuscule !). Reexecuter le code s'il vous plait !"<<endl;
                };
            };
    }else{
        if(op==2){
        cout<<"A- Operation standard (addition,multiplication,division, soustraction)"<<endl<<endl;
        cout<<"B- Autres operations "<<endl<<endl<<endl;
        cout<<"Choisissez une lettre: ";
        char letter;
        cin>>letter;

            if(letter=='A'){
                    cout<<"1- Addition de deux rationnels"<<endl;
                    cout<<"2- Addition d'un rationnels et d'un entier"<<endl;
                    cout<<"3- Addition de deux rationels normalises "<<endl;
                    cout<<"4- Multiplication de deux rationels "<<endl;
                    cout<<"5- Multiplication d'un rationel par un entier"<<endl;
                    cout<<"6- Multiplication de deux rationnels normalises"<<endl;
                    cout<<"7- Division de deux rationnels"<<endl;
                    cout<<"8- Division d'un rationel par un entier"<<endl;
                    cout<<"9- Division d'un rationel normalise par un autre rationel normalise"<<endl;
                    cout<<"10- Soustraction de deux rationnels"<<endl;
                    cout<<"11- Soustraction d'un rationnel et d'un entier "<<endl;
                    cout<<"12- soustraction de deux rationnel normalises"<<endl<<endl;
                    cout<<"Choisissez un chiffre: ";
                    cin>>recuper;

                    switch(recuper){
                        case 1: add_ratio_ratio_prime();
                            break;

                        case 2: add_ratio_int_prime();
                            break;

                        case 3: add_two_ratio_norm_prime();
                            break;

                        case 4:multi_prime();
                            break;

                        case 5: multi_int_prime();
                            break;

                        case 6: multi_ratio_ratio_norm_prime();
                            break;

                        case 7: div_prime();
                            break;

                        case 8: div0_prime();
                            break;

                        case 9: div1_prime();
                            break;

                        case 10: Soustract1_prime();
                            break;

                        case 11: Soustract2_prime();
                            break;

                        case 12: Soustract3_prime();
                            break;
                    }
            }else{
                if(letter=='B'){
                    cout<<"1- Inverse d'un nombre rationnel "<<endl;
                    cout<<"2- Normalisation d'un nombre rationel"<<endl;
                    cout<<"3- Somme et produit de n nombres rationnels"<<endl;
                    cout<<"4- Affichage d'un nombre rationnel sous le format (num / den) "<<endl;
                    cout<<"5- Comparaison de deux rationnels r1 et r2 "<<endl;
                    cout<<"6- Classement des representants reels de n nombres rationnels"<<endl;
                    int recuper;
                    cin>>recuper;

                    switch(recuper){
                        case 1: inverse_prime();
                            break;

                        case 2: normalise_prime();
                            break;

                        case 3: cout<<"desole nous n'avons pas trouve d'algorithme pour cette operation.";
                            break;

                        case 4: affich_prime();
                            break;

                        case 5: relation_ordre_prime();
                            break;

                        case 6: cout<<"desole nous n'avons pas trouve d'algorithme pour cette operation.";
                            break;
                }

                }else{
                    cout<<"vous devez utiliser la lettre A ou B (a ecrire en majuscule !). Reexecuter le code s'il vous plait !"<<endl;
                };
            }
        }else{
            if(op==3){
        cout<<"A- Operation standard (addition,multiplication,division, soustraction)"<<endl<<endl;
        cout<<"Choisissez une lettre: ";
        char letter;
        cin>>letter;

            if(letter=='A'){
                    int forme;
                    cout<<"1- Addition de deux rationnels"<<endl;
                    cout<<"2- Addition d'un rationnels et d'un entier"<<endl;
                    cout<<"3- Addition de deux rationels normalises "<<endl;
                    cout<<"4- Multiplication de deux rationels "<<endl;
                    cout<<"5- Multiplication d'un rationel par un entier"<<endl;
                    cout<<"6- Multiplication de deux rationnels normalises"<<endl;
                    cout<<"7- Division de deux rationnels"<<endl;
                    cout<<"8- Division d'un rationel par un entier"<<endl;
                    cout<<"9- Division d'un rationel normalise par un autre rationel normalise"<<endl;
                    cout<<"10- Soustraction de deux rationnels"<<endl;
                    cout<<"11- Soustraction d'un rationnel et d'un entier "<<endl;
                    cout<<"12- soustraction de deux rationnel normalises"<<endl<<endl;
                    cout<<"Choisissez un chiffre: ";
                    cin>>recuper;

                    switch(recuper){
                        case 1: cout<<"1-Rationnels sous forme de tableaux "<<endl;
                                cout<<"2- Rationnels sous forme de structure "<<endl;
                                cout<<"Quelle forme preferez-vous ?: ";

                                cin>>forme;
                                    if(forme==1){
                                            add_ratio_ratio_prime_c_a();
                                    }else{
                                      if(forme==2){
                                          add_ratio_ratio_prime_c_b();
                                    }else{
                                          cout<<"reexecuter le programme svp ! choisissez 1 ou 2"<<endl;
                                    };
                                    };
                            break;

                        case 2: cout<<"1-Rationnels sous forme de tableaux "<<endl;
                                cout<<"2- Rationnels sous forme de structure "<<endl;
                                cout<<"Quelle forme preferez-vous ?: ";

                                cin>>forme;
                                    if(forme==1){
                                        add_ratio_int_prime_c_a();
                                    }else{
                                      if(forme==2){add_ratio_int_prime_c_b();}else{
                                          cout<<"reexecuter le programme svp ! choisissez 1 ou 2"<<endl;
                                    };
                                    };
                            break;

                        case 3: cout<<"1-Rationnels sous forme de tableaux "<<endl;
                                cout<<"2- Rationnels sous forme de structure "<<endl;
                                cout<<"Quelle forme preferez-vous ?: ";

                                cin>>forme;
                                    if(forme==1){

                                    }else{
                                      if(forme==2){}else{
                                          cout<<"reexecuter le programme svp ! choisissez 1 ou 2"<<endl;
                                    };
                                    };
                            break;

                        case 4:cout<<"1-Rationnels sous forme de tableaux "<<endl;
                                cout<<"2- Rationnels sous forme de structure "<<endl;
                                cout<<"Quelle forme preferez-vous ?: ";

                                cin>>forme;
                                    if(forme==1){
                                            multi_prime_c_a();
                                    }else{
                                      if(forme==2){multi_prime_c_b();}else{
                                          cout<<"reexecuter le programme svp ! choisissez 1 ou 2"<<endl;
                                    };
                                    };
                            break;

                        case 5: cout<<"1-Rationnels sous forme de tableaux "<<endl;
                                cout<<"2- Rationnels sous forme de structure "<<endl;
                                cout<<"Quelle forme preferez-vous ?: ";
                                cin>>forme;
                                    if(forme==1){
                                            multi_int_prime_c_a();
                                    }else{
                                      if(forme==2){multi_int_prime_c_b();}else{
                                          cout<<"reexecuter le programme svp ! choisissez 1 ou 2"<<endl;
                                    };
                                    };
                            break;

                        case 6: cout<<"1-Rationnels sous forme de tableaux "<<endl;
                                cout<<"2- Rationnels sous forme de structure "<<endl;
                                cout<<"Quelle forme preferez-vous ?: ";

                                cin>>forme;
                                    if(forme==1){

                                    }else{
                                      if(forme==2){}else{
                                          cout<<"reexecuter le programme svp ! choisissez 1 ou 2"<<endl;
                                    };
                                    };
                            break;

                        case 7: cout<<"1-Rationnels sous forme de tableaux "<<endl;
                                cout<<"2- Rationnels sous forme de structure "<<endl;
                                cout<<"Quelle forme preferez-vous ?: ";

                                cin>>forme;
                                    if(forme==1){
                                        div_prime_c_a();
                                    }else{
                                      if(forme==2){div_prime_c_b();}else{
                                          cout<<"reexecuter le programme svp ! choisissez 1 ou 2"<<endl;
                                    };
                                    };
                            break;

                        case 8: cout<<"1-Rationnels sous forme de tableaux "<<endl;
                                cout<<"2- Rationnels sous forme de structure "<<endl;
                                cout<<"Quelle forme preferez-vous ?: ";

                                cin>>forme;
                                    if(forme==1){
                                        div0_prime_c_a();
                                    }else{
                                      if(forme==2){div0_prime_c_b();}else{
                                          cout<<"reexecuter le programme svp ! choisissez 1 ou 2"<<endl;
                                    };
                                    };
                            break;

                        case 9: cout<<"1-Rationnels sous forme de tableaux "<<endl;
                                cout<<"2- Rationnels sous forme de structure "<<endl;
                                cout<<"Quelle forme preferez-vous ?: ";

                                cin>>forme;
                                    if(forme==1){

                                    }else{
                                      if(forme==2){}else{
                                          cout<<"reexecuter le programme svp ! choisissez 1 ou 2"<<endl;
                                    };
                                    };
                            break;

                        case 10: cout<<"1-Rationnels sous forme de tableaux "<<endl;
                                cout<<"2- Rationnels sous forme de structure "<<endl;
                                cout<<"Quelle forme preferez-vous ?: ";

                                cin>>forme;
                                    if(forme==1){
                                        Soustract1_prime_c_a();
                                    }else{
                                      if(forme==2){Soustract1_prime_c_b();}else{
                                          cout<<"reexecuter le programme svp ! choisissez 1 ou 2"<<endl;
                                    };
                                    };
                            break;

                        case 11: cout<<"1-Rationnels sous forme de tableaux "<<endl;
                                cout<<"2- Rationnels sous forme de structure "<<endl;
                                cout<<"Quelle forme preferez-vous ?: ";

                                cin>>forme;
                                    if(forme==1){
                                        Soustract2_prime_c_a();
                                    }else{
                                      if(forme==2){Soustract2_prime_c_b();}else{
                                          cout<<"reexecuter le programme svp ! choisissez 1 ou 2"<<endl;
                                    };
                                    };
                            break;

                        case 12: cout<<"1-Rationnels sous forme de tableaux "<<endl;
                                cout<<"2- Rationnels sous forme de structure "<<endl;
                                cout<<"Quelle forme preferez-vous ?: ";

                                cin>>forme;
                                    if(forme==1){

                                    }else{
                                      if(forme==2){}else{
                                          cout<<"reexecuter le programme svp ! choisissez 1 ou 2"<<endl;
                                    };
                                    };
                            break;
                    }
            }else{

                cout<<"Veuillez entrer une valeur correcte ! Reexecuter"<<endl;
            };
    };
};
    };
}
