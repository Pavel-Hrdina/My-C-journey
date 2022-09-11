#!/usr/bin/env bash

# Intro 

echo -e "
   _____ _                      
  / ____| |                     
 | |    | |__   ___  __ _ _ __  
 | |    |  _ \ / _ \/ _  |  _ \ 
 | |____| | | |  __/ (_| | |_) |
  \_____|_| |_|\___|\__,_| .__/ 
                         | |    
                         |_|

    File structure generator
\n\n   
"

# Get chapter name from the user

echo "Enter the chapter name: "
read -r chapterName 

# Get chapter number form the user

echo "Enter the chapter number: "
read -r chapterNumber
  

# Chek if $chapterName exists or not

if [[ ! -e $chapterName ]]; then
    # If $chapterName does not exits, then create the directory and the folders in it

    # Create directories for the chapter.
    echo "Creating the chapter directory..."
    mkdir -p "./$chapterName"

    echo "Creating Code directory..."
    mkdir -p "./$chapterName/Code/Exercises"
    echo "Done..."

    echo "Creating Notes directory..."
    mkdir -p "./$chapterName/Notes"

    touch "./$chapterName/Notes/README.md"
    echo "# Notes for chapter $chapterNumber" > "./$chapterName/Notes/README.md"
    echo "Done..."

    echo "Creating Questions directory..."
    mkdir -p "./$chapterName/Questions/"
    mkdir -p "./$chapterName/Questions/Answers/"

    touch "./$chapterName/Questions/README.md"
    touch "./$chapterName/Questions/Answers/README.md"
    echo "# Questions for chapter $chapterNumber" > "./$chapterName/Questions/README.md"
    echo "# Answers for chapter $chapterNumber" > "./$chapterName/Questions/Answers/README.md"
    echo "Done..."
elif [[ -e $chapterName ]]; then
    echo "Chapter already exists."
fi

