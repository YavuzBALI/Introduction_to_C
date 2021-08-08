void convertToPostfix( char infix[], char postfix[] )
{
 StackNodePtr startPtr = NULL;
 int i, j = 0;
 
 infix [ strlen(infix) ] = ')';//dizinin sonununa parantez kapatýr
 infix [ strlen(infix) ] = '\0';//dizinin sonunun sonuna null koyar
 push(&startPtr, '(');//en baþa parantez açarki iþlem parantez içinde kalsýn
 
 while( !isEmpty( startPtr ) ){//yýðýný boþmu deðilmi kotrol eder
 for(i = 0; i < strlen( infix ); i++){
 if ( isdigit( infix[ i ] ) ){ //dizide rakam olup olmadýðýna bakar
 postfix[ j ] = infix[ i ];//diziyi postfixe atar
 j++;
 }//end of if...
 else if ( infix[ i ] == '(' ){//dizinin i. deðiþkeni rakam deðilse ve parantezse bunu yðýna ekler
 push ( &startPtr, infix[ i ] );
 }//end of else if...
 else if ( !isOperator( infix[ i ] )){//dizi rakam deðilse ve bir operatörse + - gibi 
 while( !isOperator( stackTop( startPtr ) ) ){//bidahaki operatöre kadar ilerler ve rakamlardan sonra ekler 
 if( precedence( stackTop( startPtr ), infix[ i ] ) >=0){
 postfix[ j ] = pop( &startPtr );
 j++;
 }//end of if...
 else{
 break;
 }//end of else...
 }//end of while..
 push( &startPtr, infix[ i ] );//rakamlar yýðýna ekler
 }//end of else if...
 else{
 while( stackTop( startPtr ) != '(' ){
 if( !isOperator( stackTop( startPtr ) ) ){
 postfix[ j ] = pop( &startPtr );
 j++;
 }//end of if...
 }//end of while...
 pop( &startPtr );
 }//end of else...
 }//end of for...
 }//end of while...
 postfix[ strlen( postfix ) ] = '\0';//sonuna null ekler
 }// end of convertToPostfix...
