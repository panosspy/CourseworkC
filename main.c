#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define ARRAYLENGTH 20
//dimiourgia tou struct gia tis metablites.
typedef struct {
        char type[ARRAYLENGTH]; 
        char value[ARRAYLENGTH];
        char name[ARRAYLENGTH];
        } metablites;

//sinartisi me tin praksei add pernontas tis 2 metablites pou exei zitisei
void add(metablites m, metablites n){
     //elenxoi gia to ean oi tupoi pou exei dosei isxioun gia tin praksi add me analogo minima ean oxi
     if(((strcmp(m.type,"Boolean")==0) && (strcmp(n.type,"Boolean")!=0)) || ((strcmp(m.type,"Boolean")!=0) && (strcmp(n.type,"Boolean")==0))){
        printf("To add pou zitisate na kanete me tis siggekrimenes metablites den ginete, gia na gini prepei kai oi dio metablites na einai tupou Boolean\n");          
        return;
     }
     //i praksei me taksi 2 boolean metabliton
     if((strcmp(m.type,"Boolean")==0) && (strcmp(n.type,"Boolean")==0)){
        if(m.value==n.value && m.value=="True"){
           printf("Apotelesma tis prakseis:True\n");
           printf("Tupos tis prakseis:String\n");
           return;
        }
        else{
           printf("Apotelesma tis prakseis:False\n");
           printf("Tupos tis prakseis:String\n");
           return;                     
        }                       
     }
     //i praksi metaksi 2 string metabliton   
     if((strcmp(m.type,"String")==0) && (strcmp(n.type,"String")==0)){
        printf("Apotelesma tis prakseis:%s %s\n",m.value,n.value);
        printf("Tupos tis prakseis:String\n");
        return;
     }
     //i praksi metaksi Integer kai Decimal
     if((strcmp(m.type,"Integer")==0) && (strcmp(n.type,"Integer")==0)){
        int i = atoi(m.value);
        int j = atoi(n.value);
        printf("Apotelesma tis prakseis:%d\n",i+j);
        printf("Tupos tis prakseis:Integer\n");
        return;
     }
     else{
        if((strcmp(m.type,"Integer")==0) && (strcmp(n.type,"Decimal")==0)){
            int i = atoi(m.value);
            double j = atof(n.value);
            printf("Apotelesma tis prakseis:%f\n",i+j);
            printf("Tupos tis prakseis:Decimal\n");
            return;
        }
        if(m.type=="Decimal" && (strcmp(n.type,"Integer")==0)){
            double i = atof(m.value);
            int j = atoi(n.value);
            printf("Apotelesma tis prakseis:%f\n",i+j);
            printf("Tupos tis prakseis:Decimal\n");
            return;
        }
        if((strcmp(m.type,"Decimal")==0) && (strcmp(n.type,"Decimal")==0)){
            double i = atof(m.value);
            double j = atof(n.value);
            printf("Apotelesma tis prakseis:%f\n",i+j);
            printf("Tupos tis prakseis:Decimal\n");
            return;
        }
     }
}
//i praksi sub se sinartisi
void sub(metablites m, metablites n){
     //elenxos gia tin praksi sub ean oi tupoi upostirizonte se auti
     if((strcmp(m.type,"String")==0) || (strcmp(m.type,"Boolean")==0) || (strcmp(n.type,"String")==0) || (strcmp(n.type,"Boolean")==0)){
         printf("I aferesi pou zitisate na kanete me tis siggekrimenes metablites den ginete , i aferesi ginete mono apo tupous Integer kai Decimal kai oxi String kai Boolean!!\n");
         return;
     }
     //oi prakseis me Integer kai Decimal
     else{
        if((strcmp(m.type,"Integer")==0) && (strcmp(n.type,"Integer")==0)){
           int i = atoi(m.value);
           int j = atoi(n.value);
           printf("Apotelesma tis prakseis:%d\n",i-j);
           printf("Tupos tis prakseis:Integer\n");
           return;
        }
        if((strcmp(m.type,"Integer")==0) && (strcmp(n.type,"Decimal")==0)){
            int i = atoi(m.value);
            double j = atof(n.value);
            printf("Apotelesma tis prakseis:%f\n",i-j);
            printf("Tupos tis prakseis:Decimal\n");
            return;
        }
        if((strcmp(m.type,"Decimal")==0) && (strcmp(n.type,"Integer")==0)){
            double i = atof(m.value);
            int j = atoi(n.value);
            printf("Apotelesma tis prakseis:%f\n",i-j);
            printf("Tupos tis prakseis:Decimal\n");
            return;
        }
        if((strcmp(m.type,"Decimal")==0) && (strcmp(n.type,"Decimal")==0)){
            double i = atof(m.value);
            double j = atof(n.value);
            double sum=i+j;
            printf("Apotelesma tis prakseis:%f\n",sum);
            printf("Tupos tis prakseis:Decimal\n");
            return;
        }
     }
}     
//i praksi multiple se sinartisi
void multiple(metablites m, metablites n){
     //elenxoi ean oi tupoi upostirizonte gia autin tin praksi
     if((strcmp(m.type,"Boolean")==0) || (strcmp(n.type,"Boolean")==0) || (strcmp(m.type,"String")==0)){
         printf("O pollaplasiasmos pou zitisate na kanete me tis siggekrimenes metablites den ginete , o pollaplasiasmos ginete mono apo Integer kai Decimal metaksi tous kai apo tin proti metabliti na einai tupou Integer kai i deuteri tupou String!!\n");
         return;
     }
     //i praksi me Integer ke Decimal
     if((strcmp(m.type,"Integer")==0) && (strcmp(n.type,"String")==0)){
         int i = atoi(m.value);
         printf("Apotelesma tis prakseis:");
         int j;
         for(j=0;j<=i;j++){
                 printf("%s ",n.value);
         }
         printf("\n");
         printf("Tupos tis prakseis:String\n");
         return;                     
     }
     else{
        if((strcmp(m.type,"Integer")==0) && (strcmp(n.type,"Integer")==0)){
           int i = atoi(m.value);
           int j = atoi(n.value);
           printf("Apotelesma tis prakseis:%d\n",i*j);
           printf("Tupos tis prakseis:Integer\n");
           return;
        }
        if((strcmp(m.type,"Integer")==0) && (strcmp(n.type,"Decimal")==0)){
            int i = atoi(m.value);
            double j = atof(n.value);
            printf("Apotelesma tis prakseis:%f\n",i*j);
            printf("Tupos tis prakseis:Decimal\n");
            return;
        }
        if((strcmp(m.type,"Decimal")==0) && (strcmp(n.type,"Integer")==0)){
            double i = atof(m.value);
            int j = atoi(n.value);
            printf("Apotelesma tis prakseis:%f\n",i*j);
            printf("Tupos tis prakseis:Decimal\n");
            return;
        }
        if((strcmp(m.type,"Decimal")==0) && (strcmp(n.type,"Decimal")==0)){
            double i = atof(m.value);
            double j = atof(n.value);
            printf("Apotelesma tis prakseis:%f\n",i*j);
            printf("Tupos tis prakseis:Decimal\n");
            return;
        }
     }
}
//i praksi divide se sinartisi
void divide(metablites m, metablites n){
     //elenxoi ean oi tupoi upostirizonte gia autin tin praksi
     if((strcmp(m.type,"Boolean")==0) || (strcmp(m.type,"String")==0) || (strcmp(n.type,"Boolean")==0) || (strcmp(n.type,"String")==0)){
         printf("I dieresi pou zitisate na kanete me tis siggekrimenes metablites den ginete, i dieresi ginete mono apo tupous Decimal kai Integer!!\n");
         return;
     }
     //i praksi me Integer ke Decimal
     else{
        if((strcmp(m.type,"Integer")==0) && (strcmp(n.type,"Integer")==0)){
           int i = atoi(m.value);
           int j = atoi(n.value);
           printf("Apotelesma tis prakseis:%d\n",i/j);
           printf("Tupos tis prakseis:Integer\n");
           return;
        }
        if((strcmp(m.type,"Integer")==0) && (strcmp(n.type,"Decimal")==0)){
            int i = atoi(m.value);
            double j = atof(n.value);
            printf("Apotelesma tis prakseis:%f\n",i/j);
            printf("Tupos tis prakseis:Decimal\n");
            return;
        }
        if((strcmp(m.type,"Decimal")==0) && (strcmp(n.type,"Integer")==0)){
            double i = atof(m.value);
            int j = atoi(n.value);
            printf("Apotelesma tis prakseis:%f\n",i/j);
            printf("Tupos tis prakseis:Decimal\n");
            return;
        }
        if((strcmp(m.type,"Decimal")==0) && (strcmp(n.type,"Decimal")==0)){
            double i = atof(m.value);
            double j = atof(n.value);
            printf("Apotelesma tis prakseis:%f\n",i/j);
            printf("Tupos tis prakseis:Decimal\n");
            return;
        }
     }
}
//i praksi equal
void equal(metablites m, metablites n){
     if(strcmp(m.type,n.type)==0){
         if(strcmp(m.value,n.value)==0){
             printf("Apotelesma tis prakseis:True\n");
             return;
         }
         else{
              printf("Apotelesma tis prakseis:False\n");
              return;
         }
     }
     else{    
         printf("Apotelesma tis prakseis:False\n");
         return;
     }
}
//i praksi assign
void assign(metablites m, metablites n){
     printf("%s,%s,%s",m.name,m.type,m.value);
     printf("\n");
     printf("%s,%s,%s",n.name,n.type,n.value);
     printf("\n");
     strcpy(m.type,n.type);
     strcpy(m.value,n.value);
     printf("%s,%s,%s",m.name,m.type,m.value);
     printf("\n");
     printf("%s,%s,%s",n.name,n.type,n.value);
     printf("\n");
     return;
}
//i dimiourgia ton metabliton se sinartisi
metablites create_metablites(metablites m[]){
  metablites a;
  //elenxos gia to ean to onoma iparxi ksana
  do{
     printf("Dose to onoma tis metablitis pou thes na dimiourgisis\n");
     scanf("%s",&a.name);
     int i;
     int count=0;
     for(i=0;i<8;i++){
        if(strcmp(a.name,m[i].name)==0){
           count++;
        }
     }
     if(count==0){
        break;
     }
     else{
          printf("To onoma pou dosate xrisimopoiite idi!!!\n");
     }
  }while(1);
  //elenxos gia to ean einai sostos o tupos metablitis pou edose
  do{
     printf("Dose ton tupo tis metablitis. I metabliti bori na einai mia apo tis parakato: Integer, Decimal, String, Boolean\n");
     scanf("%s",&a.type);
     if((strcmp(a.type,"Integer")==0) || (strcmp(a.type,"Decimal")==0) || (strcmp(a.type,"String")==0) || (strcmp(a.type,"Boolean")==0)){
            break;
     }
     else{
          printf("O tupos metablitis pou dosate den ipostirizete se auto to programma!! Dokimaste ksana\n");
     }
  }while(1);
  //elenxoi gia tin timi tis metablitis analoga me ton tupo tis
  do{
     printf("Dose tin timi tis metablitis. Ean thes na doseis timi Boolean tote prepei na einai True i False alios einai lathos\n");
     scanf("%s",&a.value);
     if(strcmp(a.type,"Boolean")==0){
         if((strcmp(a.value,"True")==0) || (strcmp(a.value,"False")==0)){
            break;
         }
         else{
            printf("I timi tis metablitis pou dosate den antistixei me ton tupo tis\n");      
         }                  
     }
     if(strcmp(a.type,"Integer")==0){
         int count=0;
         int sizestring=strlen(a.value);
         int j;
         for(j=0;j<sizestring;j++){
             if(isdigit(a.value[j])){
                 count++;
             }
         }
         if(count==sizestring){
             break;                          
         }
         else{
             printf("I timi pou dosate den einai Integer gia na dosete Integer prepei na apoteleite mono apo arithmous!!\n");
         }
     }
     if(strcmp(a.type,"Decimal")==0){
         int count=0;
         int sizestring=strlen(a.value);
         char temp[ARRAYLENGTH];
         strcpy(temp,a.value);
         int j;
         char token[]=".", *c;
         for(j=0;j<sizestring;j++){
            if(isdigit(temp[j])){
                count++;
            }
         }
         c=strtok(temp,token);
         if(((count+1)==sizestring) && (c!=NULL)){
             break;                          
         }
         else{
             printf("I timi pou dosate den einai Decimal gia na dosete Decimal prepei na apoteleite mono apo arithmous kai apo .!!\n");
         }
          
     }
     if(strcmp(a.type,"String")==0){
         if(isalpha(a.value[0])){
             break;
         }
         else{
             printf("I timi pou dosate den einai String gia na einai String prepei na ksekinaei me gramma kai oxi arithmo!!\n");
         }
     }
  }while(1);
  return a;
}


int main(int argc, char *argv[])
{
  int kleisimo;
  int elenxos;
  char nameof1[ARRAYLENGTH];
  char nameof2[ARRAYLENGTH];
  char act[ARRAYLENGTH];
  int count1=99;
  int count2=99;
  printf("Ksekiniste ftiaxnondas metablites!!\n");
  metablites m[8];
  int i=0;
  
  //ksekinima tis main me tin dimiourgia metabliton
  do{
       m[i]=create_metablites(m);
       printf("Ean thes na balis kai alli metabliti plhktrologise 1 allios 0\n");
       scanf("%d",&elenxos);
       if(elenxos==0){
          break;
       }
       i++;
  }while(1);
  //ksekinima gia tin prakseis dinontas prota to onoma ton 2 metabliton kai adistixoi elenxoi oti iparxoun autes oi metablites
  do{
        printf("Gia na kanis prakseis prepei na pliktrologisis ta onomata ton metabliton pou thes na kanis prakseis ke meta tin praksi\n");
        do{
           printf("Dose to onoma tis protis metablitis\n");
           scanf("%s",&nameof1);
           int i;
           for(i=0;i<8;i++){
                if(strcmp(m[i].name,nameof1)==0){
                   count1=i;
                }
           }
           if(count1==99){
                printf("I metabliti pou edoses den iparxi prospathise ksana!!!\n");
           }
           else{
                break;
           }
        }while(1);
        do{
           printf("Dose to onoma tis deuteris metablitis\n");
           scanf("%s",&nameof2);
           int i;
           for(i=0;i<8;i++){
                if(strcmp(m[i].name,nameof2)==0){
                   count2=i;
                }
           }
           if(count2==99){
                printf("I metabliti pou edoses den iparxi prospathise ksana!!!\n");
           }
           else{
                break;
           }
        }while(1);
        do{
           printf("Dose tin praksi pou thes na kaneis i praksei einai mia apo tis parakato:add,sub,multiple,divide,equal,assign\n");
           scanf("%s",&act);
           if((strcmp(act,"add")!=0) && (strcmp(act,"sub")!=0) && (strcmp(act,"multiple")!=0) && (strcmp(act,"divide")!=0) && (strcmp(act,"equal")!=0) && (strcmp(act,"assign")!=0)){
              printf("I praksi pou dosate einai lathos dokimaste ksana!!\n");
           }              
           else{
                if(strcmp(act,"add")==0){
                   add(m[count1],m[count2]);
                   break;
                }
                if(strcmp(act,"sub")==0){
                   sub(m[count1],m[count2]);
                   break;               
                }
                if(strcmp(act,"multiple")==0){
                   multiple(m[count1],m[count2]);  
                   break;
                }
                if(strcmp(act,"divide")==0){
                   divide(m[count1],m[count2]);
                   break;
                }
                if(strcmp(act,"equal")==0){
                   equal(m[count1],m[count2]);
                   break;
                }
                if(strcmp(act,"assign")==0){
                   assign(m[count1],m[count2]);  
                   break;
                }
           }
        }while(1);
        printf("Ean thes na telioseis me tis prakseis pliktrologise 0 allios 1\n");
        scanf("%d",&kleisimo);
        if(kleisimo==0){
           break;                  
        }  
  }while(1);
    
  system("PAUSE");	
  return 0;
}
