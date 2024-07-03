#!/bin/bash

function ASSERT_STREQ()
{
if [[ "$1" == "$2" ]];
then
    printf ✅
else
    printf ❌
    echo -en "\nEXPECTED\n$1\n";
    echo -en "_______________________________________________\n";
    echo -en "RESULT\n$2";
fi
}

executable="valgrind --leak-check=full -q $1"

function test_should_assert_str_equal()
{
    local expected="hello world"

    local result=$(eval $executable)

    ASSERT_STREQ "$expected" "$result"
}

test_should_assert_str_equal
printf \\n
