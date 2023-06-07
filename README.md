# Intern Exercises!

Requires g++ and gtest

To compile and run the exercises, just type

```
make
```

or

```
make run
```

## Exercise Format

Each exercise takes the form of a googletest test case. They are all currently failing. To solve an exercise, make the tests pass!

Carefully read the starter code and comments to see the instructions for each exercise.

Googletest determines whether a test passes or fails with statements like

```
ASSERT_EQ (a, b);
```
This will pass if a is equal to b. 

All of these assertions must pass to pass the test. Googletest gives error messages that say which assertion failed for each test. This can help you debug.

All of the tests have a block that looks something like this:
```
/********************* MAKE YOUR CHANGES HERE *************************/
FAIL() << TEST_NAME  << " is not yet implemented" ;

// Some instructions to complete the exercise

/**********************************************************************/
```

ONLY change code within these blocks. 

Remove the line `FAIL() << TEST_NAME  << " is not yet implemented" ;` when you begin working on each exercise.

Some exercises have helper methods to fill in as well.