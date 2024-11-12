int main (int argc, char *argv[]) {
    float n1;
    float n2;
    float promedio;
    //float n1, n2, promedio;
    printf("ingrese la nota 1: ");
    scanf("%f",&n1);

    printf("ingrese la nota 2: ");
    scanf("%f", &n2);

    promedio=(n1+n2)/2;
    printf("el promedio es: %f\n", promedio);

    if (promedio>=6 )
    {
        printf("aprobado");
    }else {
        printf("repuebra"); 
    }
    
    
    return 0;
}