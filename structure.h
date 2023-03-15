#include <iostream>

#ifndef STRUCTURE_H
    #define STRUCTURE_H
struct ration{
    int a,b;
};

int Pgcd(int x,int y){
    if(y==0){return x;}else{return Pgcd(y,x%y);}
};

//DEFINITION DE NOMBRES RATIONELS
void Q_prime(ration &q){
    cout<<"veuillez entrer la valeur numerateur votre nombre rationels: ";
    cin>>q.a;
    do{
        cout<<"veuillez entrer la valeur du denominateur de votre nombre rationels: ";
        cin>>q.b;
    }while(q.b==0);
};

//fonction qui permettra de normaliser nos rationels
void normalisation_prime(ration &q0){
    int mul_g,num,den,r;
    mul_g=Pgcd(q0.a,q0.b);
    num=q0.a/mul_g;
    den=q0.b/mul_g;
    q0.a=num;
    q0.b=den;
};

//DEFINITION DE NOMBRES RATIONELS  NORMALISES
void Q_normalise_prime(ration &t){
  cout<<"veuillez entrer la valeur du numerateur de votre nombre rationels: ";
    cin>>t.a;

    do{
        cout<<"veuillez entrer la valeur du denominateur de votre nombre rationels: ";
        cin>>t.b;
    }while(t.b<1);
//appel a la normalisation de la fraction
normalisation_prime(t);
};


//Addition de deux nombres rationels
void add_ratio_ratio_prime(){

//part1
    ration table1;
    cout<<"ce qui suit concerne le premier nombre rationels !"<<endl;
    Q_prime(table1);
//part2
    ration table2;
    cout<<"Maintenant vous entrer les informations de votre deuxieme rationels !"<<endl;
    Q_prime(table2);
//part3
    int r,s;
    if(table1.b==table2.b){
        r=table1.a+table2.a;
        s=table1.b;

        cout<<"l'addition des deux nombres rationels donne: "<<r<<" / "<<s<<endl;
    }else{
    r=(table1.a*table2.b)+(table2.a*table1.b);
    s=table1.b*table2.b;

    cout<<"l'addition des deux nombres rationels donne: "<<r<<" / "<<s<<endl;
    }
};


//addition d'un rationels et d'un entier

void add_ratio_int_prime(){
    ration t_int;
    Q_prime(t_int);

//stockage de l'entier multiplicateur
    int y;
    cout<<"veuillez entrer ici l'entier qui multiplie votre rationels: ";
    cin>>y;
    int r,s;
    r=t_int.a+(t_int.b*y);
    s=t_int.b;

    //resultat final
cout<<"l'addition du rationel et de l'entier donne: "<<r<<" / "<<s<<endl;
};

//Addition de deux rationels normalisés
void add_two_ratio_norm_prime(){
    ration  t_add_two;
cout<<"Ce qui suit, concerne un premier rationels de l'addition !"<<endl;
    Q_normalise_prime(t_add_two);

    ration t_add_too;
cout<<"Maintenant vous entrez les informations de votre deuxieme rationels de l'addition !"<<endl;
    Q_normalise_prime(t_add_too);

//operation pour additionner les rationels déja normalisés
    if(t_add_two.b==t_add_too.b){
int r,s;
r=t_add_too.a+t_add_two.a;
s=t_add_too.b;
    }else{
int r,s;
r=(t_add_two.a*t_add_too.b)+(t_add_too.a*t_add_two.b);
s=t_add_two.b*t_add_too.b;
    //resultat final
cout<<"l'addition des deux rationels normalises donne le rationels normalises: "<<r<<" / "<<s<<endl;
}
    };

//multiplication de deux rationels

void multi_prime(){
    ration m;
cout<<"ce qui suit concerne un premier rationel !"<<endl;
    Q_prime(m);

    ration m0;
cout<<"Maintenant vous entrez les informations de votre deuxieme rationels ! "<<endl;
    Q_prime(m0);
    int r,s;
    r=m.a*m0.a;
    s=m.b*m0.b;
    //resultat final
cout<<"la multiplication des deux rationels que vous venez d'entrer donne le rationel: "<<r<<" / "<<s<<endl;
};

//multiplication d'un rationel et d'un entier

void multi_int_prime(){
    ration mint;
    Q_prime(mint);

cout<<"veuillez entrer l'entier qui multiplie le rationel: ";
int int_multi;
cin>>int_multi;
    //resultat final
cout<<"la multiplication donne le rationel: "<<(mint.a*int_multi)<<" / "<<mint.b<<endl;

};

// multiplication de deux rationels normalisés

void multi_ratio_ratio_norm_prime(){
    ration ratio1;
    cout<<"ce qui suit concerne un premier rationel normalise !"<<endl;
    Q_normalise_prime(ratio1);

    ration ratio2;
    cout<<"Maintenant vous entrez les informations du deuxieme rationels normalise !"<<endl;
    Q_normalise_prime(ratio2);

    int r,s;
    r=ratio1.a*ratio2.a;
    s=ratio1.b*ratio2.b;
    //resultat final
    cout<<"la multiplication des deux rationels normlises donne le rationels normlises: "<<r<<" / "<<s<<endl;
};

//divivion de deux rationels
void div_prime(){
    ration divi;
    cout<<"Ce qui suit concerne un premier rationel ! "<<endl;
    Q_prime(divi);

    ration divi0;
    cout<<"maintenant vous entrez les infos du deuxieme rationel !"<<endl;
    Q_prime(divi0);

    int r,s;
    r=divi.a*divi0.b;
    s=divi.b*divi0.a;
    //resultat final
    cout<<"la division des deux rationels donne le rationel: "<<r<<" / "<<s<<endl;
};

//divion d'un rationel et d'un entier
void div0_prime(){
    ration div01;
    Q_prime(div01);

    cout<<"veuillez entrer la valeur de l'entier qui divise le  rationel: ";
    int dv;
    cin>>dv;
    //resultat final
    cout<<"la division d'un rationel et d'un entier donne le rationel: "<<div01.a<<" / "<<(div01.b*dv)<<endl;
};

//division de deux rationels normalises
void div1_prime(){
        ration div_table1;
        cout<<"Ce qui suit concerne un premier rationel !"<<endl;
        Q_normalise_prime(div_table1);

        ration div_table2;
        cout<<"Maintenant vous entrez les infos du deuxieme rationel !"<<endl;
        Q_normalise_prime(div_table2);

        int r,s;
    r=div_table1.a*div_table2.b;
    s=div_table1.b*div_table2.a;
    //resultat final
    cout<<"la division des deux rationels donne le rationel: "<<r<<" / "<<s<<endl;
};

//soustraction de deux rationnels
void Soustract1_prime(){
    ration sous1;
    cout<<"ce qui suit concerne un premier rationnels"<<endl;
    Q_prime(sous1);

    ration sous2;
    cout<<"Maintenant vous devez entrer les informations du deuxieme rationnels"<<endl;
    Q_prime(sous2);

    int r,s;
    if(sous1.b==sous2.b){
        r=sous1.a-sous2.a;
        s=sous1.b;
        //resultat final
        cout<<"la soustraction de ses deux rationels selon l'ordre entre donne le rationnel: "<<r<<" / "<<s<<endl;
    }else{
        r=(sous1.a*sous2.b)+(sous2.a*sous1.b);
        s=sous1.b*sous2.b;
        cout<<"la soustraction de ses deux rationels selon l'ordre entre donne le rationnel: "<<r<<" / "<<s<<endl;
    }
};

//soustraction d'un rationnel et d'un entier
void Soustract2_prime(){
    ration soust;
    Q_prime(soust);

    cout<<"veuillez entrer l'entier à soustraire: ";
    int soustraire;
    cin>>soustraire;

    int r,s;
    r=soust.a+(soust.b*soustraire);
    s=soust.b;
    //resultat final

    cout<<"la soustraction du rationnel et de l'entier donne le rationnel: "<<r<<" / "<<s<<endl;
};

//soustraction de deux rationnels normalisés
void Soustract3_prime(){
    ration soust1;
    cout<<"ce qui suit concerne le premier rationnel !"<<endl;
    Q_normalise_prime(soust1);

    ration soust2;
    cout<<"Maintenant le deuxieme rationnel a soustraire !"<<endl;
    Q_normalise_prime(soust2);

    int r,s;
    if(soust1.b==soust2.b){
        r=soust1.a-soust2.a;
        s=soust1.b;
        //resultat final
        cout<<"la soustraction de ses deux rationels selon l'ordre entre donne le rationnel normalise: "<<r<<" / "<<s<<endl;
    }else{
        r=(soust1.a*soust2.b)+(soust2.a*soust1.b);
        s=soust1.b*soust2.b;
        cout<<"la soustraction de ses deux rationels selon l'ordre entre donne le rationnel normalise: "<<r<<" / "<<s<<endl;
    }
};

void inverse_prime(){
    ration inv;
    Q_prime(inv);

    int r,s;
    r=inv.a;
    s=inv.b;
    //resultat final
    cout<<"l'inverse du nombre rationnel que vous venez d'entrer est: "<<s<<" / "<<r<<endl;
};

void normalise_prime(){
    ration norm;
    Q_normalise_prime(norm);
cout<<"Apres normalisation on obtient le rationnel normalise: "<<norm.a<<" / "<<norm.b<<endl;
};

//Affichage d'un nombre rationel sous le format num / den
void affich_prime(){
    ration aff;
    Q_prime(aff);
    cout<<"l'affichage donne: "<<aff.a<<" / "<<aff.b<<endl;
}

void relation_ordre_prime(){
    ration r1;
    cout<<"Ce qui qui suit concerne le premier rationel !"<<endl;
    Q_prime(r1);
    cout<<endl;

    ration r2;
    cout<<"Maintenant cela concerne les informations du deuxieme rationels "<<endl;
    Q_prime(r2);
    cout<<endl;

    //resultat final
    if((r1.a/r1.b)<(r2.a/r2.b)){
        cout<<" 1 "<<endl;
    }else{
        cout<<" 0 "<<endl;
    };
}


#endif
