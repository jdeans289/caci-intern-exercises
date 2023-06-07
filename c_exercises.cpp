#include <gtest/gtest.h>

#define TEST_NAME ::testing::UnitTest::GetInstance()->current_test_info()->name()

TEST (C_Exercise, pointer1) {
    int a = 5;
    int * a_ptr = NULL;


    /********************* MAKE YOUR CHANGES HERE *************************/
    FAIL() << TEST_NAME  << " is not yet implemented" ;

    // Set the value of a_ptr to the address of a

    /**********************************************************************/

    // TEST
    ASSERT_TRUE(a_ptr != NULL);
    ASSERT_EQ(a, *a_ptr);
}


/********************* MAKE YOUR CHANGES HERE for pointer2 *************************/
// Fill in the function body to swap the values of two int pointers
void swap (int * a, int * b) {

}
/***********************************************************************************/


TEST (C_Exercise, pointer2) {
    int a = 5;
    int b = 10;


    /********************* MAKE YOUR CHANGES HERE *************************/
    FAIL() << TEST_NAME  << " is not yet implemented" ;


    // Only fill in the arguments of swap
    swap(NULL, NULL);

    /**********************************************************************/

    // TEST
    ASSERT_EQ(a, 10);
    ASSERT_EQ(b, 5);

}

TEST (C_Exercise, printf) {
    int a = 5;
    char buf[50];

    /********************* MAKE YOUR CHANGES HERE *************************/
    FAIL() << TEST_NAME  << " is not yet implemented" ;


    // Change the format string so that it will print:
    // "The value of a is 5"
    // with a newline character

    const char * format_str = "";
    /**********************************************************************/

    // This is here to help you debug
    printf(format_str, a);

    // sprintf is just like printf, except it prints into the buffer in the first argument instead of to the terminal.
    // We can use this to check your answer
    snprintf(buf, sizeof(buf), format_str, a);

    // TEST
    ASSERT_STREQ(buf, "The value of a is 5\n");
}

TEST (C_Exercise, array_index) {
    int arr[5] = {1, 2, 3, 4, 5};

    int arr_3;
    int * arr_3_addr;

    /********************* MAKE YOUR CHANGES HERE *************************/
    FAIL() << TEST_NAME  << " is not yet implemented" ;


    // Set arr_3 to the value at index 3
    // Set arr_3_addr to the address of index 3 of the array

    /**********************************************************************/

    ASSERT_EQ(arr_3, 4);
    ASSERT_EQ(*arr_3_addr, 4);
}

TEST (C_Exercise, array_2d_index) {
    int arr[3][3] = { {1, 2, 3}, 
                      {4, 5, 6}, 
                      {7, 8, 9} };

    int arr_1_1;
    int * arr_1_1_addr;

    /********************* MAKE YOUR CHANGES HERE *************************/
    FAIL() << TEST_NAME  << " is not yet implemented" ;


    // Set arr_1_1 to the value at index 1 of index 1
    // Set arr_3_addr to the address of index 1 of index 1

    /**********************************************************************/

    ASSERT_EQ(arr_1_1, 5);
    ASSERT_EQ(*arr_1_1_addr, 5);
}


TEST (C_Exercise, array_sum) {

    int sum = 0;

    const int arr_len = 5;
    int arr[arr_len] = {1, 2, 3, 4, 5};

    /********************* MAKE YOUR CHANGES HERE *************************/
    FAIL() << TEST_NAME  << " is not yet implemented" ;

    /**********************************************************************/

    ASSERT_EQ(sum, 15);
}

TEST (C_Exercise, array_2d_sum) {

    int sum = 0;

    int arr[3][3] = { {1, 2, 3}, 
                      {4, 5, 6}, 
                      {7, 8, 9} };

    /********************* MAKE YOUR CHANGES HERE *************************/
    FAIL() << TEST_NAME  << " is not yet implemented" ;

    /**********************************************************************/

    ASSERT_EQ(sum, 45);
}

TEST (C_Exercise, array_copy) {
    const int arr_length = 5;
    int arr_original[arr_length] = {10, 20, 30, 40, 50};

    int arr_copy[arr_length];

    /********************* MAKE YOUR CHANGES HERE *************************/
    FAIL() << TEST_NAME  << " is not yet implemented" ;
    
    // Copy all of the values of original into copy

    /**********************************************************************/

    // All elements must be the same
    for (int i = 0; i < arr_length; i++) {
        ASSERT_EQ(arr_original[i], arr_copy[i]);
    }
}

TEST (C_Exercise, dynamic_allocation1) {

    int array_length = 10;
    int * arr = NULL;

    /********************* MAKE YOUR CHANGES HERE *************************/
    FAIL() << TEST_NAME  << " is not yet implemented" ;

    // Allocate space for 10 ints for arr
    // Set the values of each element to 1..10

    /**********************************************************************/

    ASSERT_TRUE(arr != NULL);
    for (int i = 0; i < array_length; i++) {
        // Meaning arr[0] = 1, arr[1] = 2, and so on
        ASSERT_EQ(arr[i], i+1);
    }

    // Don't forget to free your memory!
    free (arr);
}

TEST (C_Exercise, dynamic_allocation2) {

    char ** sentence;

    /********************* MAKE YOUR CHANGES HERE *************************/
    FAIL() << TEST_NAME  << " is not yet implemented" ;

    // Allocate space for two char pointers sentence
    // set the first value to "Hello"
    // set the second value to "World"

    /**********************************************************************/

    ASSERT_TRUE(sentence != NULL);
    ASSERT_STREQ(sentence[0], "Hello");
    ASSERT_STREQ(sentence[1], "World");

    // Don't forget to free your memory!
    free (sentence);

    // If you dynamically allocated the space for "Hello" and "World", you should free them here
}

// Notice that the argument here is const char *
// This means that str is a pointer to a constant
// In other words, str is a read only pointer
// Since we're just calculating the length of a string, we should not be changing the value of the characters in the string
int my_strlen(const char * str) {
    /********************* MAKE YOUR CHANGES HERE for string_length *************************/

    // Fill in this function to calculate the length of a string.
    // Remember that all C strings end with the character '\0'

    return -1;

    /*********************************************************************************/
}

TEST (C_Exercise, string_length) {

    const char * str = "This is a string in C";

    // Remove this line when you implement my_strlen
    FAIL() << TEST_NAME  << " is not yet implemented" ;

    // strlen is the C library function from <string.h> that does this 
    // But you should be able to implement it too :)
    ASSERT_EQ(my_strlen(str), strlen(str));
}

TEST (C_Exercise, preprocessor) {

    /********************* MAKE YOUR CHANGES HERE *************************/
    FAIL() << TEST_NAME  << " is not yet implemented" ;

    /**********************************************************************/

    #if SOME_VAR != 100
    FAIL() << "Use preprocessor definitions to exclude this line" ;
    #endif
}


