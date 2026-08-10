/*
CONTROL FLOW
„ 
„¥„Ÿ„Ÿ Decision statements
„    „¥„Ÿ„Ÿ if
„    „¥„Ÿ„Ÿ if / else
„    „¥„Ÿ„Ÿ else if
„    „¥„Ÿ„Ÿ nested if
„    „¥„Ÿ„Ÿ switch
„    „¤„Ÿ„Ÿ ternary operator
„ 
„¤„Ÿ„Ÿ Repetition statements
    „¥„Ÿ„Ÿ for
    „¥„Ÿ„Ÿ while
    „¥„Ÿ„Ÿ do while
    „¤„Ÿ„Ÿ nested loops
*/

#include <iostream>
#include <string>

int main()
{
    // ============================================================
    //          C / C++ DECISION & REPETITION STATEMENTS
    // ============================================================

    std::cout << "============================================================\n";
    std::cout << "       C / C++ DECISION & REPETITION STATEMENTS\n";
    std::cout << "============================================================\n\n";


    // ============================================================
    // PART 1: DECISION STATEMENTS
    // ============================================================

    std::cout << "============================================================\n";
    std::cout << "1. DECISION STATEMENTS\n";
    std::cout << "============================================================\n\n";

    /*
        Decision statements allow the program to choose
        which code should be executed.

                    CONDITION
                       |
                +------+------+
                |             |
              TRUE          FALSE
                |             |
             CODE A         CODE B
    */


    // ============================================================
    // 1.1 IF STATEMENT
    // ============================================================

    std::cout << "1.1 IF STATEMENT\n";
    std::cout << "------------------------------------------------------------\n";

    int temperature = 35;

    std::cout << "Temperature = "
        << temperature
        << " C\n";

    if (temperature > 30)
    {
        std::cout << "Temperature is HIGH.\n";
    }

    std::cout << "\n";

    /*
        Syntax:

        if (condition)
        {
            // code
        }

        The code inside if{} runs only when
        the condition is true.
    */


    // ============================================================
    // 1.2 IF / ELSE
    // ============================================================

    std::cout << "1.2 IF / ELSE STATEMENT\n";
    std::cout << "------------------------------------------------------------\n";

    int age = 20;

    std::cout << "Age = " << age << "\n";

    if (age >= 18)
    {
        std::cout << "You are an adult.\n";
    }
    else
    {
        std::cout << "You are under 18.\n";
    }

    std::cout << "\n";

    /*
        if condition is TRUE:
            execute if{}

        if condition is FALSE:
            execute else{}
    */


    // ============================================================
    // 1.3 ELSE IF
    // ============================================================

    std::cout << "1.3 ELSE IF STATEMENT\n";
    std::cout << "------------------------------------------------------------\n";

    int score = 82;

    std::cout << "Score = " << score << "\n";

    if (score >= 90)
    {
        std::cout << "Grade: A\n";
    }
    else if (score >= 80)
    {
        std::cout << "Grade: B\n";
    }
    else if (score >= 70)
    {
        std::cout << "Grade: C\n";
    }
    else if (score >= 60)
    {
        std::cout << "Grade: D\n";
    }
    else
    {
        std::cout << "Grade: F\n";
    }

    std::cout << "\n";

    /*
        Only ONE branch is executed.

        90+  -> A
        80+  -> B
        70+  -> C
        60+  -> D
        <60  -> F
    */


    // ============================================================
    // 1.4 NESTED IF
    // ============================================================

    std::cout << "1.4 NESTED IF STATEMENT\n";
    std::cout << "------------------------------------------------------------\n";

    bool userHasKey = true;
    bool doorLocked = true;

    std::cout << "User has key : "
        << std::boolalpha
        << userHasKey << "\n";

    std::cout << "Door locked  : "
        << doorLocked << "\n";

    if (userHasKey)
    {
        std::cout << "Key is valid.\n";

        if (doorLocked)
        {
            std::cout << "Unlocking the door...\n";
        }
    }
    else
    {
        std::cout << "No valid key.\n";
    }

    std::cout << "\n";

    /*
        An if statement inside another if statement
        is called a NESTED IF.

        Example embedded system:

        if (sensorDetected)
        {
            if (temperatureIsSafe)
            {
                turnMotorOn();
            }
        }
    */


    // ============================================================
    // 1.5 SWITCH STATEMENT
    // ============================================================

    std::cout << "1.5 SWITCH STATEMENT\n";
    std::cout << "------------------------------------------------------------\n";

    int menu = 2;

    std::cout << "Menu selection = "
        << menu << "\n";

    switch (menu)
    {
    case 1:
        std::cout << "Starting the system.\n";
        break;

    case 2:
        std::cout << "Opening settings.\n";
        break;

    case 3:
        std::cout << "Exiting the program.\n";
        break;

    default:
        std::cout << "Invalid selection.\n";
        break;
    }

    std::cout << "\n";

    /*
        switch is useful when one value can have
        several known choices.

        switch(value)
        {
            case 1:
                // code
                break;

            case 2:
                // code
                break;

            default:
                // code
                break;
        }

        IMPORTANT:
        break prevents execution from continuing
        into the next case.
    */


    // ============================================================
    // 1.6 TERNARY OPERATOR
    // ============================================================

    std::cout << "1.6 TERNARY OPERATOR\n";
    std::cout << "------------------------------------------------------------\n";

    int number = 10;

    std::string result =
        (number % 2 == 0)
        ? "Even"
        : "Odd";

    std::cout << "Number = " << number << "\n";
    std::cout << "Result = " << result << "\n\n";

    /*
        Syntax:

        condition ? value_if_true : value_if_false

        It is a short form of if / else.

        Example:

        if (number % 2 == 0)
        {
            result = "Even";
        }
        else
        {
            result = "Odd";
        }

        Can be written as:

        result = (number % 2 == 0) ? "Even" : "Odd";
    */


    // ============================================================
    // PART 2: REPETITION STATEMENTS / LOOPS
    // ============================================================

    std::cout << "============================================================\n";
    std::cout << "2. REPETITION STATEMENTS\n";
    std::cout << "============================================================\n\n";

    /*
        Repetition statements execute code repeatedly.

                    CONDITION
                       |
                +------+------+
                |             |
              TRUE          FALSE
                |             |
             execute        STOP
                |
                +----> CONDITION
    */


    // ============================================================
    // 2.1 FOR LOOP
    // ============================================================

    std::cout << "2.1 FOR LOOP\n";
    std::cout << "------------------------------------------------------------\n";

    for (int i = 0; i < 5; i++)
    {
        std::cout << "i = " << i << "\n";
    }

    std::cout << "\n";

    /*
        Syntax:

        for (initialization; condition; update)
        {
            // code
        }

        Example:

        for (int i = 0; i < 5; i++)

        1. int i = 0       -> initialization
        2. i < 5           -> condition
        3. execute code
        4. i++             -> update
        5. check condition again
    */


    // ============================================================
    // 2.2 WHILE LOOP
    // ============================================================

    std::cout << "2.2 WHILE LOOP\n";
    std::cout << "------------------------------------------------------------\n";

    int count = 0;

    while (count < 5)
    {
        std::cout << "count = "
            << count
            << "\n";

        count++;
    }

    std::cout << "\n";

    /*
        Syntax:

        while (condition)
        {
            // code
        }

        The condition is checked BEFORE
        every iteration.

        Therefore, the loop may execute ZERO times.
    */


    // ============================================================
    // 2.3 DO / WHILE LOOP
    // ============================================================

    std::cout << "2.3 DO / WHILE LOOP\n";
    std::cout << "------------------------------------------------------------\n";

    int value = 0;

    do
    {
        std::cout << "value = "
            << value
            << "\n";

        value++;

    } while (value < 5);

    std::cout << "\n";

    /*
        Syntax:

        do
        {
            // code
        }
        while (condition);

        IMPORTANT:

        do/while always executes AT LEAST ONCE.

        The condition is checked AFTER the code.
    */


    // ============================================================
    // 2.4 NESTED LOOPS
    // ============================================================

    std::cout << "2.4 NESTED LOOPS\n";
    std::cout << "------------------------------------------------------------\n";

    for (int row = 1; row <= 3; row++)
    {
        for (int column = 1; column <= 3; column++)
        {
            std::cout << "("
                << row
                << ","
                << column
                << ") ";
        }

        std::cout << "\n";
    }

    std::cout << "\n";

    /*
        A loop inside another loop is a NESTED LOOP.

        Outer loop:
            row

        Inner loop:
            column

        Useful for:
            - 2D arrays
            - matrices
            - tables
            - image processing
            - game grids
    */


    // ============================================================
    // 2.5 BREAK
    // ============================================================

    std::cout << "2.5 BREAK\n";
    std::cout << "------------------------------------------------------------\n";

    for (int i = 0; i < 10; i++)
    {
        if (i == 5)
        {
            break;
        }

        std::cout << i << " ";
    }

    std::cout << "\n\n";

    /*
        break immediately terminates the loop.

        Output:

        0 1 2 3 4

        When i becomes 5:

        break
          «
        LOOP STOPS
    */


    // ============================================================
    // 2.6 CONTINUE
    // ============================================================

    std::cout << "2.6 CONTINUE\n";
    std::cout << "------------------------------------------------------------\n";

    for (int i = 0; i < 10; i++)
    {
        if (i == 5)
        {
            continue;
        }

        std::cout << i << " ";
    }

    std::cout << "\n\n";

    /*
        continue skips the CURRENT iteration.

        Output:

        0 1 2 3 4 6 7 8 9

        When i == 5:

        continue
           «
        skip this iteration
           «
        continue with next iteration
    */


    // ============================================================
    // PART 3: EMBEDDED SYSTEM EXAMPLES
    // ============================================================

    std::cout << "============================================================\n";
    std::cout << "3. EMBEDDED SYSTEM EXAMPLES\n";
    std::cout << "============================================================\n\n";


    // ============================================================
    // 3.1 SENSOR DECISION
    // ============================================================

    std::cout << "3.1 SENSOR DECISION\n";
    std::cout << "------------------------------------------------------------\n";

    int sensorTemperature = 35;

    std::cout << "Sensor temperature = "
        << sensorTemperature
        << " C\n";

    if (sensorTemperature > 30)
    {
        std::cout << "Fan ON\n";
    }
    else
    {
        std::cout << "Fan OFF\n";
    }

    std::cout << "\n";


    // ============================================================
    // 3.2 DOOR CONTROL
    // ============================================================

    std::cout << "3.2 DOOR CONTROL\n";
    std::cout << "------------------------------------------------------------\n";

    bool openCommand = true;

    if (openCommand)
    {
        std::cout << "Command received: OPEN DOOR\n";
        std::cout << "Motor -> OPEN\n";
    }
    else
    {
        std::cout << "Command received: CLOSE DOOR\n";
        std::cout << "Motor -> CLOSE\n";
    }

    std::cout << "\n";


    // ============================================================
    // 3.3 SENSOR MONITORING LOOP
    // ============================================================

    std::cout << "3.3 SENSOR MONITORING LOOP\n";
    std::cout << "------------------------------------------------------------\n";

    int sensorValue = 0;

    while (sensorValue < 5)
    {
        std::cout << "Reading sensor...\n";
        std::cout << "Sensor value = "
            << sensorValue
            << "\n";

        sensorValue++;
    }

    std::cout << "Monitoring finished.\n\n";


    // ============================================================
    // PART 4: DECISION + REPETITION TOGETHER
    // ============================================================

    std::cout << "============================================================\n";
    std::cout << "4. DECISION + REPETITION\n";
    std::cout << "============================================================\n\n";

    /*
        In real programs, decision and repetition
        are commonly used together.
    */

    for (int temperatureReading = 20;
        temperatureReading <= 40;
        temperatureReading += 5)
    {
        std::cout << "Temperature = "
            << temperatureReading
            << " C -> ";

        if (temperatureReading >= 30)
        {
            std::cout << "HIGH";
        }
        else
        {
            std::cout << "NORMAL";
        }

        std::cout << "\n";
    }

    std::cout << "\n";


    // ============================================================
    // SUMMARY
    // ============================================================

    std::cout << "============================================================\n";
    std::cout << "                         SUMMARY\n";
    std::cout << "============================================================\n\n";

    std::cout << "DECISION STATEMENTS\n\n";

    std::cout << "if\n";
    std::cout << "  -> Execute code when condition is true.\n\n";

    std::cout << "if / else\n";
    std::cout << "  -> Choose between two paths.\n\n";

    std::cout << "else if\n";
    std::cout << "  -> Choose between multiple conditions.\n\n";

    std::cout << "switch\n";
    std::cout << "  -> Choose between known values/cases.\n\n";

    std::cout << "ternary ?:\n";
    std::cout << "  -> Short form of simple if / else.\n\n";


    std::cout << "REPETITION STATEMENTS\n\n";

    std::cout << "for\n";
    std::cout << "  -> Best when the number of iterations is known.\n\n";

    std::cout << "while\n";
    std::cout << "  -> Repeat while a condition is true.\n\n";

    std::cout << "do / while\n";
    std::cout << "  -> Execute at least once, then check condition.\n\n";

    std::cout << "break\n";
    std::cout << "  -> Stop a loop immediately.\n\n";

    std::cout << "continue\n";
    std::cout << "  -> Skip the current iteration.\n\n";


    std::cout << "============================================================\n";
    std::cout << "                 CONTROL FLOW MODEL\n";
    std::cout << "============================================================\n\n";

    std::cout << "              PROGRAM\n";
    std::cout << "                  |\n";
    std::cout << "                  v\n";
    std::cout << "             CONDITION?\n";
    std::cout << "              /      \\\n";
    std::cout << "           TRUE      FALSE\n";
    std::cout << "             |          |\n";
    std::cout << "             v          v\n";
    std::cout << "          ACTION     OTHER ACTION\n";
    std::cout << "             |\n";
    std::cout << "             v\n";
    std::cout << "          LOOP?\n";
    std::cout << "          /   \\\n";
    std::cout << "       YES     NO\n";
    std::cout << "        |       |\n";
    std::cout << "        +-------+\n";
    std::cout << "            |\n";
    std::cout << "            v\n";
    std::cout << "        NEXT CODE\n\n";

    std::cout << "============================================================\n";

    return 0;
}

