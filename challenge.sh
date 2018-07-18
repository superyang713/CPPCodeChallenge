#!/bin/bash

echo "Please input the challenge number: "

read challengeNumber

if [ ! -d "challenge_$challengeNumber" ]; then
    cp -r project_template challenge_$challengeNumber
else
    echo "You have already finished this challenge!"
fi
