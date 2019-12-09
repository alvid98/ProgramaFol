/******************************************************************************
Con este programa calculas todo lo necesario para un contrato
*******************************************************************************/

#include <stdio.h>
int sbase,antiguedad,comp1,comp2,comp3,comp4,hefm,herh,idioma,ppe,bccc,bccp;
float sbruto,cirpf,cct,cce,cpe,dmpt,dmpe,fpt,fpe,fgse,hefmt,hefme,herht,herhe,dev,liq,atep,atp,irpf,pext;

int main()
{
    printf("Pon el salario base:");
    scanf("%d",&sbase);w
    printf("Pon la antiguedad:");
    scanf("%d",&antiguedad);
    printf("Pon las hefm:");
    scanf("%d",&hefm);
    printf("Pon las otras he:");
    scanf("%d",&herh);
    printf("Pon complemento1");
    scanf("%d",&comp1);
    printf("Pon complemento2");
    scanf("%d",&comp2);
    printf("Pon complemento3");
    scanf("%d",&comp3);
    printf("Pon complemento4");
    scanf("%d",&comp4);
    printf("Pon el complemento por idioma:");
    scanf("%d",&idioma);
    printf("Paga extra en este mes:");
    scanf("%f"&pext);
    printf("Pon el porcentaje de irpf:");
    scanf("%f",&irpf);
    printf("Pon el porcentaje de at y ep");
    scanf("%F",&atp);
    
    sbruto=sbase+idioma+antiguedad+hefm+herh+comp1+comp2,comp3,comp4+pext;
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
    atep=bccp*atp;
    
    printf("      Trabajador      Empresa  \n ");
    printf("cc     %f      %f \n",cct,cce);
    printf("cp      ---            %f \n",cpe);
    printf("dmp    %f      %f \n",dmpt,dmpe);
    printf("fp     %f      %f \n",fpt,fpe);
    printf("fgs     ---            %f \n",fgse);
    printf("hefm   %f      %f \n",hefmt,hefme);
    printf("herh   %f      %f \n \n",herht,herhe);
    printf("at y ep  ---            %f \n",atep);
    dev=cct+dmpt+fpt+hefmt+herht;
    printf("El devengado total es:%f",dev);
    liq=sbruto-dev;
    printf("El liquido total es:%f",liq);
    return 0;
}
