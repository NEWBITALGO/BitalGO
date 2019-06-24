Compiling/running unit tests
------------------------------------

Unit tests will be automatically compiled if dependencies were met in configure
and tests weren't explicitly disabled.

After configuring, they can be run with 'make check'.

To run the BitalGod tests manually, launch src/test/test_BitalGo .

To add more BitalGod tests, add `BOOST_AUTO_TEST_CASE` functions to the existing
.cpp files in the test/ directory or add new .cpp files that
implement new BOOST_AUTO_TEST_SUITE sections.

To run the BitalGo-qt tests manually, launch src/qt/test/BitalGo-qt_test

To add more BitalGo-qt tests, add them to the `src/qt/test/` directory and
the `src/qt/test/test_main.cpp` file.
