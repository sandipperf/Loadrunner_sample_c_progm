ConvertFloatToString()
{
	    char String[100];

        float FloatVar =1234.5678;

        sprintf(String, "%f", FloatVar);

        lr_output_message( "The value of string is [%s]", String );

	return 0;
}
