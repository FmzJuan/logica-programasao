# include  < stdio.h >

int  principal (){
    codigo int , alcool, gasolina, diesel;

    printf ( " Informe um codigo (1, 2, 3) ou 4 para parar: " );
    scanf ( " %d " , &codigo);

	alcool = 0 ;
	gasolina = 0 ;
	gasóleo = 0 ;

    while (código != 4 ) {
        if (código == 1 ) {
            álcool++;
        }
        else  if (codigo == 2 ) {
            gasolina++;
        }
        else  if (código == 3 ) {
            diesel++;
        }
        printf ( " Informe um codigo (1, 2, 3) ou 4 para parar: " );
        scanf ( " %d " , &codigo);
    }

    printf ( " MUITO OBRIGADO \n " );
    printf ( " Alcool: %d \n " , alcool);
    printf ( " Gasolina: %d \n " , gasolina);
    printf ( " Diesel: %d \n " , diesel);

	retorna  0 ;
}