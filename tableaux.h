#include <iostream>
using namespace std;
#ifndef RATIONELS_H
    #define RATIONELS_H

//fonction pgcd
int pgcd(int x,int y){
    if(y==0){return x;}else{return pgcd(y,x%y);}
};

//DEFINITION DE NOMBRES RATIONELS
void Q_(int t[2]){
    cout<<"veuillez entrer la valeur numerateur votre nombre rationels: ";
    cin>>t[0];
    do{
        cout<<"veuillez entrer la valeur du denominateur de votre nombre rationels: ";
        cin>>t[1];
    }while(t[1]==0);
};

//fonction qui permettra de normaliser nos rationels
void normalisation(int table0[2]){
    int mul_g,num,den,r;
    mul_g=pgcd(table0[0],table0[1]);
    num=table0[0]/mul_g;
    den=table0[1]/mul_g;
    table0[0]=num;
    table0[1]=den;
};

//DEFINITION DE NOMBRES RATIONELS  NORMALISES
void Q_normalise(int t[2]){
  cout<<"veuillez entrer la valeur du numerateur de votre nombre rationels: ";
    cin>>t[0];

    do{
        cout<<"veuillez entrer la valeur du denominateur de votre nombre rationels: ";
        cin>>t[1];
    }while(t[1]<1);
//appel a la normalisation de la fraction
normalisation(t);
};


//Addition de deux nombres rationels
void add_ratio_ratio(){

//part1
    int table1[2];
    cout<<"ce qui suit concerne le premier nombre rationels !"<<endl;
    Q_(table1);
//part2
    int table2[2];
    cout<<"Maintenant vous entrer les informations de votre deuxieme rationels !"<<endl;
    Q_(table2);
//part3
    int r,s;
    if(table1[1]==table2[1]){
        r=table1[0]+table2[0];
        s=table1[1];

        cout<<"l'addition des deux nombres rationels donne: "<<r<<" / "<<s<<endl;
    }else{
    r=(table1[0]*table2[1])+(table2[0]*table1[1]);
    s=table1[1]*table2[1];

    cout<<"l'addition des deux nombres rationels donne: "<<r<<" / "<<s<<endl;
    }
};


//addition d'un rationels et d'un entier

void add_ratio_int(){
    int t_int[2];
    Q_(t_int);

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

//Addition de deux rationels normalisés
void add_two_ratio_norm(){
    int  t_add_two[2];
cout<<"Ce qui suit, concerne un premier rationels de l'addition !"<<endl;
    Q_normalise(t_add_two);

    int t_add_too[2];
cout<<"Maintenant vous entrez les informations de votre deuxieme rationels de l'addition !"<<endl;
    Q_normalise(t_add_too);

//operation pour additionner les rationels déja normalisés
int r,s;
r=(t_add_two[0]*t_add_too[1])+(t_add_too[0]*t_add_two[1]);
s=t_add_two[1]*t_add_too[1];
    //resultat final
cout<<"l'addition des deux rationels normalises donne le rationels normalises: "<<r<<" / "<<s<<endl;
};

//multiplication de deux rationels

void multi(){
    int m[2];
cout<<"ce qui suit concerne un premier rationel !"<<endl;
    Q_(m);

    int m0[2];
cout<<"Maintenant vous entrez les informations de votre deuxieme rationels ! "<<endl;
    Q_(m0);
    int r,s;
    r=m[0]*m0[0];
    s=m[1]*m0[1];
    //resultat final
cout<<"la multiplication des deux rationels que vous venez d'entrer donne le rationel: "<<r<<" / "<<s<<endl;
};

//multiplication d'un rationel et d'un entier

void multi_int(){
    int mint[2];
    Q_(mint);

cout<<"veuillez entrer l'entier qui multiplie le rationel: ";
int int_multi;
cin>>int_multi;
    //resultat final
cout<<"la multiplication donne le rationel: "<<(mint[0]*int_multi)<<" / "<<mint[1]<<endl;

};

// multiplication de deux rationels normalisés

void multi_ratio_ratio_norm(){
    int ratio1[2];
    cout<<"ce qui suit concerne un premier rationel normalise !"<<endl;
    Q_normalise(ratio1);

    int ratio2[2];
    cout<<"Maintenant vous entrez les informations du deuxieme rationels normalise !"<<endl;
    Q_normalise(ratio2);

    int r,s;
    r=ratio1[0]*ratio2[0];
    s=ratio1[1]*ratio2[1];
    //resultat final
    cout<<"la multiplication des deux rationels normlises donne le rationels normlises: "<<r<<" / "<<s<<endl;
};

//divivion de deux rationels
void div(){
    int divi[2];
    cout<<"Ce qui suit concerne un premier rationel ! "<<endl;
    Q_(divi);

    int divi0[2];
    cout<<"maintenant vous entrez les infos du deuxieme rationel !"<<endl;
    Q_(divi0);

    int r,s;
    r=divi[0]*divi0[1];
    s=divi[1]*divi0[0];
    //resultat final
    cout<<"la division des deux rationels donne le rationel: "<<r<<" / "<<s<<endl;
};

//divion d'un rationel et d'un entier
void div0(){
    int div01[2];
    Q_(div01);

    cout<<"veuillez entrer la valeur de l'entier qui divise le  rationel: ";
    int dv;
    cin>>dv;
    //resultat final
    cout<<"la division d'un rationel et d'un entier donne le rationel: "<<div01[0]<<" / "<<(div01[1]*dv)<<endl;
};

//division de deux rationels normalises
void div1(){
        int div_table1[2];
        cout<<"Ce qui suit concerne un premier rationel !"<<endl;
        Q_normalise(div_table1);

        int div_table2[2];
        cout<<"Maintenant vous entrez les infos du deuxieme rationel !"<<endl;
        Q_normalise(div_table2);

        int r,s;
    r=div_table1[0]*div_table2[1];
    s=div_table1[1]*div_table2[0];
    //resultat final
    cout<<"la division des deux rationels donne le rationel: "<<r<<" / "<<s<<endl;
};

//soustraction de deux rationnels
void Soustract1(){
    int sous1[2];
    cout<<"ce qui suit concerne un premier rationnels"<<endl;
    Q_(sous1);

    int sous2[2];
    cout<<"Maintenant vous devez entrer les informations du deuxieme rationnels"<<endl;
    Q_(sous2);

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

//soustraction d'un rationnel et d'un entier
void Soustract2(){
    int soust[2];
    Q_(soust);

    cout<<"veuillez entrer l'entier à soustraire: ";
    int soustraire;
    cin>>soustraire;

    int r,s;
    r=soust[0]+(soust[1]*soustraire);
    s=soust[1];
    //resultat final

    cout<<"la soustraction du rationnel et de l'entier donne le rationnel: "<<r<<" / "<<s<<endl;
};

//soustraction de deux rationnels normalisés
void Soustract3(){
    int soust1[2];
    cout<<"ce qui suit concerne le premier rationnel !"<<endl;
    Q_normalise(soust1);

    int soust2[2];
    cout<<"Maintenant le deuxieme rationnel a soustraire !"<<endl;
    Q_normalise(soust2);

    int r,s;
    if(soust1[1]==soust2[1]){
        r=soust1[0]-soust2[0];
        s=soust1[1];
        //resultat final
        cout<<"la soustraction de ses deux rationels selon l'ordre entre donne le rationnel normalise: "<<r<<" / "<<s<<endl;
    }else{
        r=(soust1[0]*soust2[1])+(soust2[0]*soust1[1]);
        s=soust1[1]*soust2[1];
        cout<<"la soustraction de ses deux rationels selon l'ordre entre donne le rationnel normalise: "<<r<<" / "<<s<<endl;
    }
};

void inverse(){
    int inv[2];
    Q_(inv);

    int r,s;
    r=inv[0];
    s=inv[1];
    //resultat final
    cout<<"l'inverse du nombre rationnel que vous venez d'entrer est: "<<s<<" / "<<r<<endl;
};

void normalise(){
    int norm[2];
    Q_normalise(norm);
cout<<"Apres normalisation on obtient le rationnel normalise: "<<norm[0]<<" / "<<norm[1]<<endl;
};

//Affichage d'un nombre rationel sous le format num / den
void affich(){
    int aff[2];
    Q_(aff);
    cout<<"l'affichage donne: "<<aff[0]<<" / "<<aff[1]<<endl;
}

void relation_ordre(){
    int r1[2];
    cout<<"Ce qui qui suit concerne le premier rationel !"<<endl;
    Q_(r1);
    cout<<endl;

    int r2[2];
    cout<<"Maintenant cela concerne les informations du deuxieme rationels "<<endl;
    Q_(r2);
    cout<<endl;

    //resultat final
    if((r1[0]/r1[1])<(r2[0]/r2[1])){
        cout<<" 1 "<<endl;
    }else{
        cout<<" 0 "<<endl;
    };
}

#endif
