ConvertIntegerToParameter()
{
	    //First convert an integer into a string 
        //and then to convert that string to a parameter.

        char String[100];

        int integerVar=789123;

        sprintf(String, "%d", integerVar);
        lr_output_message( "New string is [%s]", String );

        lr_save_string(String, "ParamFromString");
        lr_output_message( "New parameter is [%s]", lr_eval_string( "{ParamFromString}" ) );

        return 0;

}
