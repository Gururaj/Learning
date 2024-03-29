#!/bin/bash
export JAVA_HOME=/Library/Java/JavaVirtualMachines/zulu-21.jdk/Contents/Home/
build="NO"
while getopts bf: flag
do
    case "${flag}" in
        b) build="YES";;
        f) filename=${OPTARG};;        
    esac
done


if [ $build == "YES" ]
  then    
    ./gradlew build 
    echo "Build complete"    
fi

if [ -z $filename ]
then 
  ./gradlew run -q --console=plain
else
  ./gradlew run --args "$filename"
fi 