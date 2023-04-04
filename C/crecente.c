# include  < stdio.h >

int  principal (){
    int x, y;

    printf ( " Digite dois numeros: \n " );
    scanf ( " %d  %d " , &x, &y);

    enquanto (x != y) {
        se (x > y) {
            printf ( " DECRESCENTE! \n " );
        }
        outra coisa {
            printf ( " CRESCENTE! \n " );
        }

        printf ( " Digite outros dois numeros: \n " );
		scanf ( " %d  %d " , &x, &y);
    }

	retorna  0 ;
}