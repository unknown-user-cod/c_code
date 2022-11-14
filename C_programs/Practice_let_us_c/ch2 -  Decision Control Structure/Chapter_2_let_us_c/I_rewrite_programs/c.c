(c) main( ) 
{ 
 float sal ; 
 printf ("Enter the salary" ) ; 
 scanf ( "%f", &sal ) ; 
 if ( sal < 40000 && sal > 25000 ) 
 printf ( "Manager" ) ; 
 else 
 if ( sal < 25000 && sal > 15000 ) 
 printf ( "Accountant" ) ; 
 else 
 printf ( "Clerk" ) ; 
}
