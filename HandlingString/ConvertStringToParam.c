ConvertStringToParam()
{
	     // Converting a string to a parameter
        // Declare your string at the beginning of your script:
        char String [100] = "Value to be saved";

        //Use the lr_save_string function to save this value to a parameter:
        lr_save_string(String, "ParamFromString");
        lr_output_message( "New parameter is [%s]", lr_eval_string( "{ParamFromString}" ) );

        return 0;

}
