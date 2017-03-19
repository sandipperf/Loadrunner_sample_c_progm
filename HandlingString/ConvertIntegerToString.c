ConvertIntegerToString()
{
	
        char String[100];

        int integerVar=456723;

        sprintf(String, "%d", integerVar);
        lr_output_message( "The value of string is [%s]", String );

        return 0;

}
