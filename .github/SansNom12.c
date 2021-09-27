#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void main()
{
	//bamba hamed
/* int entier1,entier2,lon ,larg,p,aire;
 printf("************exercice1*********\n");
 printf("donner deuxnombres\n");
 scanf("%d%d",&entier1,&entier2);   
 if(entier1>entier2)   // on compare les deux nombres
 {
     printf("le plus grand est:\t %d\n",entier1);
	 	
	 }	
else if(entier1==entier2)
printf("les deux nombres sont egaux");
else if(entier1<entier2)
{  printf("le plus grand est:\t %d\n",entier2);
	}			
	
*/

  
/*  printf("************exercice2*********\n");
printf("donner la longueur du rectangle");
scanf("%d",&lon);
	
printf("donner la largeur du rectangle");
scanf("%d",&larg);	
	
p=( lon +larg)*2;	// on utilise la formule  du perimetre du rectangle
aire= lon*larg;	
printf("le perimetre est\t %d l aire est:\t %d\n",p,aire);	*/

/*  int nz;
printf("************exercice3*********\n"); 
  scanf("%d",&nz);
   if(nz%3==0&&nz>10)  // on utilise une condition if car elle est la plus adaptée ici
   {
   	printf("%d\t est un multiple de trois et est superieur a 10");
   }
   else if(nz%3==0 &&nz<10)
   {	printf("%d\t est un multiple de trois mais n est superieur a 10");
   }
   else if(nz%3!=0&&nz<10)
   	printf("%d\t n''est un multiple de trois et est inferieur a 10");
   */
		
/*	 int age,statut;
  printf("************exercice4*********\n");
   #define Age_Utilisateur 12 //macro
    printf("entrer l age de la personne\n");
    scanf("%d",&age);
    
    printf("entrer votre statut taper 1 si vous etes etudiant et 0 si non\n");
    scanf(" %d",&statut);

        if(age<12)
    printf("le tarif est de 4euros");
   else if((age>=12&&age<17)||(age>=17&& age<27&& statut==1))
    printf("le tarif est de 6euros");
    else if(age>=17 &&age<65&& statut==0)
    printf("le tarif est de 9euros");
 else if (age>=65)
  printf("le tarif est de 6euros");
   else if(age>=17 &&age<65&& statut==1)
    printf("le tarif est de 9euros");
*/
	
/* int i=0;
   printf("************exercice5*********\n");
   printf("donner le numero de la boisson\n");
   scanf("%d\n",&i);
   
   switch(i)   // le switch case est la condition la plus adaptée
   {
      case 1 : 
      	printf("la boisson choisie est la numero%d\n",i);break;
      case 2 : 
               printf("la boisson choisie est la numero%d\n",i);break;
      case 3 :
               printf("la boisson choisie est la numero%d\n",i);break;	
      case 10 : 
               printf("la boisson choisie est la numero%d\n",i);break;
      case 11 :
               printf("la boisson choisie est la numero%d\n",i);break;
      default :
               printf("il y a une erreur");	
   }*/	
	
/*	int note1,note2,note3;
  float moy;
   printf("*********exercice6********\n");
  do{printf("donner la premiere note\n");
   scanf("%d",&note1);
       }while(note1<0||note1>20);
       do{  printf("donner la deuxieme note\n");
   scanf("%d",&note2);
       }while(note2<0||note2>20);
     do{  printf("donner la troisieme note\n");
   scanf("%d",&note3);
     }while(note3<0||note3>20);
 moy=(note1+note2+note3)/3;	
printf("la moyenne est: %f",moy);*/	
	
/*	int classe,x,Nombre_Eleve[15],Eleve_Total=0;
printf("*****exercice7*****\n");
printf("donner le nombre de classe\n");
scanf("%d",&classe);
for(x=0;x<classe;x++)
{ 
   printf("donner le nombre d eleve de la classe %d\n",i+1);
   scanf("%d",&Nombre_Eleve[x]);	
		
}
for(x=0;x<classe;x++)
{ 
  Eleve_Total= Eleve_Total+Nombre_Eleve[x];	
}
printf("le nombre d eleve total est: %d",Eleve_Total);*/

 /* int n;
   do{ printf("************exercice8*********\n");
       printf("donner un nombre entier");
       scanf("%d",&n);	
   }while(n%2!=0 || n%7!=0);
printf("%d est un multiple de 2 et de 7.");	*/

/*int ne,puissance=0,ir=1,etage=0;

     printf("************exercice9*********\n");	
     printf("donner le nombre de pierre disponible\n");
     scanf("%d",&ne);
    do{
          puissance= puissance+pow(ir,2) ;r	
      i=i+1;
      if (puissance<=ne)  
     etage=etage+1;
     else if (puissance>ne)
     break;	
 }while(puissance<ne);
 
    printf("on peut faire %d etages avec %d briques ",etage,ne);  */
	
/*	int ns,s=0;
    float moye=0;
    
    
   puts("*****exercice10******");
   do{	
     
   puts("donner un nombre positif, un nombre negatif indiquera la fin de la saisie");
   scanf("%d",&ns);
   if(ns>=0)
   {
   moye=moye+ns;
   s=s+1;}
   } while(ns>=0);
   moye=moye/s;
  printf("la moyenne est%f",moye);
	
*/

}
