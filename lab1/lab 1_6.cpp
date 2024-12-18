/*#include <stdio.h>
int GetMatrix( int *row, int *col ) ;
int main() {
    int *data, m, n ;
    data = GetMatrix( &m, &n ) ;
    return 0 ;
}//end function*/

#include <stdio.h>

int *GetMatrix( int *row, int *col ) ;

int main() {
    int *data, m, n ;
    data = GetMatrix( &m, &n ) ;

    return 0 ;
}//end function

 
 int *GetMatrix( int *row, int *col ) {
    int *value ;
    printf( "Enter number of rows and columns" );
    scanf( "%d %d", row, col ) ;

    value = new int [*row * *col] ;
    if( *row == 0 && *col == 0 ) {
        printf( "Enter number of rows and columns: 0 0" ) ;
    }
    else if( ( *row == 0 && *col > 0 ) || ( *row > 0 && *col == 0 ) ) {
        printf( "Error: Invalid matrix dimensions.\n" ) ;
    }else{
        printf( "Enter the elements of matrix: " ) ;
        for( int i = 0 ; i < *row ; i++ ) {
            for( int j = 0 ; j < *col ; j++ ) {
                scanf( "%d", &value[ i * ( *col ) + j ]  ) ; 
                if( getchar() == '\n' &&  i == *row - 1 && j == *col - 2 ) {
					printf( "Error: Invalid matrix input" ) ;
					return 0 ;
				}
            }
        }
        printf( "Matrix (%dx%d): \n", *row, *col ) ;
        for( int i = 0 ; i < *row ; i++ ) {
            for( int j = 0 ; j < *col ; j++ ) {
                printf( "%d ", value[ i * ( *col ) + j ] ) ;
            }
            printf( "\n" ) ;
        }
    }
    return value ;
 }





