# include  < stdio.h >

int  principal (){
    duplo x, y;

    printf ( " Valor de X: " );
    scanf ( " %lf " , &x);

	printf ( " Valor de Y: " );
    scanf ( " %lf " , &y);

    if (x == 0 && y == 0 ) {
        printf ( " Origem \n " );
    }
    senão  se (x == 0 ) {
        printf ( " Eixo S \n " );
    }
    senão  se (y == 0 ) {
        printf ( " Eixo X \n " );
    }
    senão  se (x > 0 && y > 0 ) {
        printf ( " Q1 \n " );
    }
    senão  se (x < 0 && y > 0 ) {
        printf ( " Q2 \n " );
    }
    senão  se (x < 0 && y < 0 ) {
        printf ( " Q3 \n " );
    }
    outra coisa {
        printf ( " Q4 \n " );
    }

	retorna  0 ;
}