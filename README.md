Week 2 Mini Project — Temperature Conversion App

This program converts a temperature between Celsius and Fahrenheit from the terminal. It reads a number and a unit letter, then prints the converted value using the formulas F = C * 9 / 5 + 32 and C = (F - 32) * 5 / 9.

The input is a numeric temperature followed by a unit letter, which may be C, c, F or f. The letter names the unit the temperature is currently in, so it also sets the direction of the conversion: C means the value is in Celsius and should be converted to Fahrenheit. On success the program prints a sentence of the form "0 degrees Celsius is 32 degrees Fahrenheit." If the unit letter is anything other than C, c, F or f, it prints "Invalid unit". If the temperature cannot be read as a number at all, it prints "Invalid input". For example, 0 then C produces "0 degrees Celsius is 32 degrees Fahrenheit.", 32 then F produces "32 degrees Fahrenheit is 0 degrees Celsius.", 10 then X produces "Invalid unit", and abc produces "Invalid input".

Our team's additional edge case is a non-numeric temperature, which prints "Invalid input". This exercises a different path through the program than an unsupported unit does, because the number never reads successfully and the unit is therefore never examined.

AI DISCLOSURE:
Artificial generative intelligence was used to debug our code. Anthropic's Claude opus 5.0 was used to find syntax and formatting issues on the .cpp file.
