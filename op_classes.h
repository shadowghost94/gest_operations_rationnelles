#include <iostream>
using namespace std;

#ifndef OP_CLASSES_H
#define OP_CLASSES_H

//definition d'une structure pour pouvoir plus tard creer des objets structure
struct rational{
    int j,c;
};

//class pour manipuler les nombres rationnels
class my_Qrational{
private:

public:
    int num,den;
    //definition de simple rationnel, transmission de tableaux.
    my_Qrational(int table1[2]){
        cout<<"Veuillez entrer la valeur du numerateur de votre rationnel: ";
        cin>>table1[0];
        do{
            cout<<"Veuillez entrer la valeur du denominateur de votre rationnel: ";
            cin>>table1[1];
        }while(table1[1]==0);
    };

    //definition de simple rationnels, transmission d'objet structure
    my_Qrational(rational &p){
        cout<<"Veuillez entrer la valeur du numerateur de votre rationnel: ";
        cin>>p.j;
        do{
            cout<<"Veuillez entrer la valeur du denominateur de votre rationnel: ";
            cin>>p.c;
        }while(p.c==0);
    };
    friend void add_ratio_ratio_prime_c_a();
    friend void add_ratio_ratio_prime_c_b();


};

//class pour manipuler les nombres rationnels normalisés
class my_Qrational_normalize{
private:
    int num;
    int den;
public:
    my_Qrational_normalize(int table3[2]){
        cout<<"Veuillez entrer la valeur du numerateur de votre rationnel: ";
        cin>>table3[0];
        do{
            cout<<"Veuillez entrer la valeur du denominateur de votre rationnel: ";
            cin>>table3[1];
        }while(table3[1]<1);
    }

    my_Qrational_normalize(rational &q){
        cout<<"Veuillez entrer la valeur du numerateur de votre rationnel: ";
        cin>>q.j;
        do{
            cout<<"Veuillez entrer la valeur du denominateur de votre rationnel: ";
            cin>>q.c;
        }while(q.c<1);
    }


};

//------------------------------------------------OPERATIONS simple------------------------------------------------------------

        //addition tableaux
void add_ratio_ratio_prime_c_a(){

//part1
    int tablo1[2];
    cout<<"ce qui suit concerne le premier nombre rationels !"<<endl;
    my_Qrational oject0{tablo1};
//part2
    int tablo2[2];
    cout<<"Maintenant vous entrer les informations de votre deuxieme rationels !"<<endl;
    my_Qrational oject1{tablo2};
//part3
    int r,s;
    if(tablo1[1]==tablo2[1]){
        r=tablo1[0]+tablo2[0];
        s=tablo1[1];

        cout<<"l'addition des deux nombres rationels donne: "<<r<<" / "<<s<<endl;
    }else{
    r=(tablo1[0]*tablo2[1])+(tablo2[0]*tablo1[1]);
    s=tablo1[1]*tablo2[1];

    cout<<"l'addition des deux nombres rationels donne: "<<r<<" / "<<s<<endl;
    }
};
        //addition structures
void add_ratio_ratio_prime_c_b(){

//part1
    rational tabo1;
    cout<<"ce qui suit concerne le premier nombre rationels !"<<endl;
    my_Qrational {tabo1};
//part2
    rational tabo2;
    cout<<"Maintenant vous entrer les informations de votre deuxieme rationels !"<<endl;
    my_Qrational {tabo2};
//part3
    int r,s;
    if(tabo1.c==tabo2.c){
        r=tabo1.j+tabo2.j;
        s=tabo1.c;

        cout<<"l'addition des deux nombres rationels donne: "<<r<<" / "<<s<<endl;
    }else{
    r=(tabo1.j*tabo2.c)+(tabo2.j*tabo1.c);
    s=tabo1.c*tabo2.c;

    cout<<"l'addition des deux nombres rationels donne: "<<r<<" / "<<s<<endl;
    }
};

//addition d'un rationels et d'un entier
        //tableaux
void add_ratio_int_prime_c_a(){
    int t_int[2];
    my_Qrational object0(t_int);

//stockage de l'entier multiplicateur
    int y;
    cout<<"veuillez entrer ici l'entier qui multiplie votre rationels: ";
    cin>>y;
    int r,s;
    r=t_int[0]+(t_int[1]*y);
    s=t_int[1];

    //resultat final
cout<<"l'addition du rationel et de l'entier donne: "<<r<<" / "<<s<<endl;
};

        //structure
//addition d'un rationels et d'un entier

void add_ratio_int_prime_c_b(){
    rational t_int;
    my_Qrational{t_int};

//stockage de l'entier multiplicateur
    int y;
    cout<<"veuillez entrer ici l'entier qui multiplie votre rationels: ";
    cin>>y;
    int r,s;
    r=t_int.j+(t_int.c*y);
    s=t_int.c;

    //resultat final
cout<<"l'addition du rationel et de l'entier donne: "<<r<<" / "<<s<<endl;
};

//multiplication de deux rationels
        //tableaux
void multi_prime_c_a(){
    int m[2];
cout<<"ce qui suit concerne un premier rationel !"<<endl;
    my_Qrational object2{m};

    int m0[2];
cout<<"Maintenant vous entrez les informations de votre deuxieme rationels ! "<<endl;
    my_Qrational object3{m0};
    int r,s;
    r=m[0]*m0[0];
    s=m[1]*m0[1];
    //resultat final
cout<<"la multiplication des deux rationels que vous venez d'entrer donne le rationel: "<<r<<" / "<<s<<endl;
};
        //structure
void multi_prime_c_b(){
    rational m;
cout<<"ce qui suit concerne un premier rationel !"<<endl;
    my_Qrational{m};

    rational m0;
cout<<"Maintenant vous entrez les informations de votre deuxieme rationels ! "<<endl;
    my_Qrational{m0};
    int r,s;
    r=m.j*m0.c;
    s=m.c*m0.c;
    //resultat final
cout<<"la multiplication des deux rationels que vous venez d'entrer donne le rationel: "<<r<<" / "<<s<<endl;
};

//multiplication d'un rationel et d'un entier
        //tableaux
void multi_int_prime_c_a(){
    int mint[2];
    my_Qrational object4{mint};

cout<<"veuillez entrer l'entier qui multiplie le rationel: ";
int int_multi;
cin>>int_multi;
    //resultat final
cout<<"la multiplication donne le rationel: "<<(mint[0]*int_multi)<<" / "<<mint[1]<<endl;

};
        //structure
//multiplication d'un rationel et d'un entier

void multi_int_prime_c_b(){
    rational mint;
    my_Qrational{mint};

cout<<"veuillez entrer l'entier qui multiplie le rationel: ";
int int_multi;
cin>>int_multi;
    //resultat final
cout<<"la multiplication donne le rationel: "<<(mint.j*int_multi)<<" / "<<mint.c<<endl;

};

//divivion de deux rationels
        //tableaux
void div_prime_c_a(){
    int divi[2];
    cout<<"Ce qui suit concerne un premier rationel ! "<<endl;
    my_Qrational object5{divi};

    int divi0[2];
    cout<<"maintenant vous entrez les infos du deuxieme rationel !"<<endl;
    my_Qrational object6{divi0};

    int r,s;
    r=divi[0]*divi0[1];
    s=divi[1]*divi0[0];
    //resultat final
    cout<<"la division des deux rationels donne le rationel: "<<r<<" / "<<s<<endl;
};
        //structure
void div_prime_c_b(){
    rational divi;
    cout<<"Ce qui suit concerne un premier rationel ! "<<endl;
    my_Qrational{divi};

    rational divi0;
    cout<<"maintenant vous entrez les infos du deuxieme rationel !"<<endl;
    my_Qrational{divi0};

    int r,s;
    r=divi.j*divi0.c;
    s=divi.j*divi0.j;
    //resultat final
    cout<<"la division des deux rationels donne le rationel: "<<r<<" / "<<s<<endl;
};

//divion d'un rationel et d'un entier
        //tableaux
void div0_prime_c_a(){
    int div01[2];
    my_Qrational{div01};

    cout<<"veuillez entrer la valeur de l'entier qui divise le  rationel: ";
    int dv;
    cin>>dv;
    //resultat final
    cout<<"la division d'un rationel et d'un entier donne le rationel: "<<div01[0]<<" / "<<(div01[1]*dv)<<endl;
};
        //structure
//divion d'un rationel et d'un entier
void div0_prime_c_b(){
    rational div01;
    my_Qrational{div01};

    cout<<"veuillez entrer la valeur de l'entier qui divise le  rationel: ";
    int dv;
    cin>>dv;
    //resultat final
    cout<<"la division d'un rationel et d'un entier donne le rationel: "<<div01.j<<" / "<<(div01.c*dv)<<endl;
};

//soustraction de deux rationnels
        //tableaux
void Soustract1_prime_c_a(){
    int sous1[2];
    cout<<"ce qui suit concerne un premier rationnels"<<endl;
    my_Qrational{sous1};

    int sous2[2];
    cout<<"Maintenant vous devez entrer les informations du deuxieme rationnels"<<endl;
    my_Qrational{sous2};

    int r,s;
    if(sous1[1]==sous2[1]){
        r=sous1[0]-sous2[0];
        s=sous1[1];
        //resultat final
        cout<<"la soustraction de ses deux rationels selon l'ordre entre donne le rationnel: "<<r<<" / "<<s<<endl;
    }else{
        r=(sous1[0]*sous2[1])+(sous2[0]*sous1[1]);
        s=sous1[1]*sous2[1];
        cout<<"la soustraction de ses deux rationels selon l'ordre entre donne le rationnel: "<<r<<" / "<<s<<endl;
    }
};
        //structure
void Soustract1_prime_c_b(){
    rational sous1;
    cout<<"ce qui suit concerne un premier rationnels"<<endl;
    my_Qrational{sous1};

    rational sous2;
    cout<<"Maintenant vous devez entrer les informations du deuxieme rationnels"<<endl;
    my_Qrational{sous2};

    int r,s;
    if(sous1.c==sous2.c){
        r=sous1.j-sous2.j;
        s=sous1.c;
        //resultat final
        cout<<"la soustraction de ses deux rationels selon l'ordre entre donne le rationnel: "<<r<<" / "<<s<<endl;
    }else{
        r=(sous1.j*sous2.c)+(sous2.j*sous1.c);
        s=sous1.c*sous2.c;
        cout<<"la soustraction de ses deux rationels selon l'ordre entre donne le rationnel: "<<r<<" / "<<s<<endl;
    }
};

//soustraction d'un rationnel et d'un entier
        //tableaux
void Soustract2_prime_c_a(){
    int soust[2];
    my_Qrational{soust};

    cout<<"veuillez entrer l'entier à soustraire: ";
    int soustraire;
    cin>>soustraire;

    int r,s;
    r=soust[0]+(soust[1]*soustraire);
    s=soust[1];
    //resultat final

    cout<<"la soustraction du rationnel et de l'entier donne le rationnel: "<<r<<" / "<<s<<endl;
};
        //structure
//soustraction d'un rationnel et d'un entier
void Soustract2_prime_c_b(){
    rational soust;
    my_Qrational{soust};

    cout<<"veuillez entrer l'entier à soustraire: ";
    int soustraire;
    cin>>soustraire;

    int r,s;
    r=soust.j+(soust.c*soustraire);
    s=soust.c;
    //resultat final

    cout<<"la soustraction du rationnel et de l'entier donne le rationnel: "<<r<<" / "<<s<<endl;
};


//--------------------------------------------OPERATIONS NORMALIZE------------------------------------------------------------

#endif
