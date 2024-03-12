# Exercises

## Layout
Each exercise is in its own folder under the language/track it is provided for.

## Running any exercise
Do the following:
- Go to the exercise directory (e.g. cpp/hello-world).
- Make a folder called "build"
  > `mkdir build`
- Generate build files via cmake (e.g. using linux/unix system generator).
  > `cmake -G "Unix Makefiles" ..`
- Run the exercise.[^1]
  > `make`

[^1]: Note: All tests will be run by default, you can take a look at the tests from the exercise's test file (e.g. cpp/hello_world_test.cpp).
