//
//  main.c
//  May2021A2a
//
//  Created by Ugochukwu Ezekwem on 03/10/2021.
//  Copyright © 2021 Ugochukwu Ezekwem. All rights reserved.
//

#include <stdio.h>

#include <string.h>

int main(int argc, const char * argv[]) {
    //This array would hold the string upto 150 char
    char string_array[150];
    // these values hold the counts
    int digit_count = 0;
    int letter_count = 0;
    int other_count = 0;
    //Output to the user
    printf("Enter any string:");
    //recieve input
    scanf("%s", &string_array);
    //check the length
    int length = strlen(string_array);
    if (length < 10) {
        printf("You must have at least 10 characters.");
        return 0;
    }
    //iterate over the string
    for (int i =0; i < length; i++) {
        char ch = string_array[i];
        if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        {
            //update the count of letters
            letter_count++;
        }
        else if(ch >= '0' && ch <= '9')
        {
            //update the count of digits
            digit_count++;
        }
        else
        {
            //update the count of other characters
            other_count++;
        }
    }
    //check for rules
    if (other_count > 0) {
        //if it contains special characters
        printf("You can only have letters and digits.");
    }
    else if(letter_count < 2) {
        //if it contains fewer than 2 letters
        printf("You must have at least 2 letters.");
    }
    else if(digit_count < 2) {
        //if it contains fewer than 2 digits
        printf("You must have at least 2 digits.");
    }
    else {
        //everything okay
        printf("You have entered a valid password.");
    }

    return 0;
}
