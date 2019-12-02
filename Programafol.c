/******************************************************************************

Con este programa calculas todo lo necesario para un contrato

*******************************************************************************/

#include <stdio.h>
int sbase;
int antiguedad;
int plustrans;
int plusherr;
int hefm;
int herh;
float irpf;
int idioma;
float sbruto;
int ppe;
int bccc;
int bccp;
float cirpf;
float cct;
float cce;
float cpe;
float dmpt;
float dmpe;
float fpt;
float fpe;
float fgse;
float hefmt;
float hefme;
float herht;
float herhe;
flota liq;
int main()
{
    printf("Pon el salario base:");
    scanf("%d",&sbase);
    printf("Pon la antiguedad:");
    scanf("%d",&antiguedad);
    printf("Pon las hefm:");
    scanf("%d",&hefm);
    printf("Pon las otras he:");
    scanf("%d",&herh);
    printf("Pon el plus de transporte:");
    scanf("%d",&plustrans);
    printf("Pon el plus de herramientas:");
    scanf("%d",&plusherr);
    printf("Pon el complemento por idioma:");
    scanf("%d",&idioma);
    printf("Pon el porcentaje de irpf:");
    scanf("%f",&irpf);
    
    sbruto=sbase+idioma+antiguedad+hefm+herh+plusherr+plustrans;
    printf("\n \nEl salario bruto es:%f \n",sbruto);
    
    ppe=((sbase+antiguedad)*2)/12;
    printf("el prorateo de paga extra es:%d \n",ppe);
    
    bccc=(sbase+idioma+antiguedad+ppe);
    printf("La B.C.C.C es:%d \n",bccc);
    
    bccp=(bccc+hefm+herh);
    printf("La B.C.C.P es:%d \n",bccp);
    
    cirpf=sbruto*irpf;
    printf("El IRPF es:%f \n \n",cirpf);
    cct=bccc*0.047;
    cce=bccc*0.236;
    cpe=bccp*0.01;
    dmpt=bccp*0.0155;
    dmpe=bccp*0.055;
    fpt=bccp*0.01;
    fpe=bccp*0.06;
    fgse=bccp*0.02;
    hefmt=hefm*0.02;
    hefme=hefm*0.12;
    herht=herh*0.047;
    herhe=herh*0.256;
    
    printf("      Trabajador      Empresa  \n ");
    printf("cc     %f      %f \n",cct,cce);
    printf("cp             %f \n",cpe);
    printf("dmp    %f      %f \n",dmpt,dmpe);
    printf("fp     %f      %f \n",fpt,fpe);
    printf("fgs    %f \n",fgse);
    printf("hefm   %f      %f \n",hefmt,hefme);
    printf("herh   %f      %f \n \n",herht,herhe);
    liq=sbruto-cct-dmpt-fpt-hefmt-herht;
    printf("El liquido total es:%f",liq);
    return 0;
}
