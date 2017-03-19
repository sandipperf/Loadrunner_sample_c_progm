ConvertParamToInteger()
{
	
        // Declare an integer at the beginning of the script.
        // Note that in order for this to work the value in the parameter must be a complete whole number
        // with no extra characters or decimal places.
        int Number;

        lr_save_string("9086","NumericParameter");
        lr_output_message( "[%s]", lr_eval_string("{NumericParameter}") );

        // Use the atoi function to convert the parameter into an integer.
        Number = atoi (lr_eval_string("{NumericParameter}"));

        lr_output_message( "The value of integer is [%i]", Number );

        return 0;

}
