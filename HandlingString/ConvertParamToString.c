ConvertParamToString()
{      char String[100];

        lr_save_string("This is a String ","StringFromParam");

        //You then need to use the sprintf function to save your parameter to a string:
        sprintf(String, "%s", lr_eval_string("{StringFromParam}"));
        lr_output_message( "The Value of string is [%s]", String );

        return 0;

}
